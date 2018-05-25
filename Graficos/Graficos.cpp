// Graficos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#define GLEW_STATIC
#include "GL\glew.h"
#include "GLFW\glfw3.h"

#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp"

#include <iostream>
#include <time.h>

#include "Vertice.h"
#include "Shader.h"

#include "Modelo.h"
#include "Cono.h"
#include "Cuadrado.h"
#include "Mapa.h"
#include "Rama.h"
#include "Rana.h"
#include "Tacoma.h"
#include "Tortuga.h"
#include "Tronco.h"

using namespace std;

GLfloat red, green, blue;

GLuint posicionID;
GLuint colorID;
GLuint modeloID;
GLuint vistaID;
GLuint proyeccionID;

GLuint coordenadaUVID;
GLuint samplerImagenID;

GLuint texturaCuadradoID;
GLuint texturaConoID;
GLuint texturaMapaID;
GLuint texturaRamaID;
GLuint texturaRanaID;
GLuint texturaTacomaID;
GLuint texturaTortugaID;
GLuint texturaTroncoID;

mat4 vista;
mat4 proyeccion;

Cono *cono;
Cuadrado *cuadrado;
Mapa *mapa;
Rama *rama;
Rana *rana;
Tacoma *tacoma;
Tortuga *tortuga;
Tronco *tronco;

Shader *shader;
//Declaración de ventana
GLFWwindow *window;

//Propiedades de la ventana
GLfloat ancho = 1024;
GLfloat alto = 768;

vec3 posicionCamara;

double tiempoAnterior;

void actualizarVista() {
	vista = lookAt(posicionCamara, //Posicion de la cámara
		vec3(0.0f, 0.0f, 0.0f),				//Posición del objetivo
		vec3(0.0f, 1.0f, 0.0f));			//Vector hacia arriba (rotación cámara)
}

void inicializarProyeccion() {
	proyeccion =
		perspective(45.0f, //Campo de visión (FoV)
			ancho / alto, //Relación de aspecto (Aspect ratio)
			0.1f, //Near clipping (Desde donde renderea)
			150.0f); //Far clipping (Hasta donde renderea)
}

float cuboX = 0.0f;
float cuboZ = 0.0f;

bool checarColisiones() {
	if (tacoma->direccion == 0 || tacoma->direccion == 1) {
		if (tacoma->coordenadas.x + 1.9f >= cuboX - 1.0f &&
			tacoma->coordenadas.x - 1.9f <= cuboX + 1.0f &&
			tacoma->coordenadas.z + 0.7f >= cuboZ - 1.0f &&
			tacoma->coordenadas.z - 0.7f <= cuboZ + 1.0f) {
			return true;
		}
	}

	if (tacoma->direccion == 2 || tacoma->direccion == 3) {
		if (tacoma->coordenadas.x + 0.7f >= cuboX - 1.0f &&
			tacoma->coordenadas.x - 0.7f <= cuboX + 1.0f &&
			tacoma->coordenadas.z + 1.9f >= cuboZ - 1.0f &&
			tacoma->coordenadas.z - 1.9f <= cuboZ + 1.0f) {
			return true;
		}
	}

	return false;
}

void actualizar() { 
	double tiempoActual = glfwGetTime();
	double tiempoDelta = tiempoActual - tiempoAnterior;
	
	//Movimiento tacoma
	int estadoD = glfwGetKey(window, GLFW_KEY_D);
	if (estadoD == GLFW_PRESS) {
		tacoma->direccion = 0;
	}

	int estadoA = glfwGetKey(window, GLFW_KEY_A);
	if (estadoA == GLFW_PRESS) {
		tacoma->direccion = 1;
	}

	int estadoW = glfwGetKey(window, GLFW_KEY_W);
	if (estadoW == GLFW_PRESS) {
		tacoma->direccion = 2;
	}

	int estadoS = glfwGetKey(window, GLFW_KEY_S);
	if (estadoS == GLFW_PRESS) {
		tacoma->direccion = 3;
	}

	if (!checarColisiones()) {
		tacoma->mover(tiempoDelta);
	}

	actualizarVista();
	
	cono->vista = vista;
	cuadrado->vista = vista;
	mapa->vista = vista;
	rama->vista = vista;
	rana->vista = vista;
	tacoma->vista = vista;
	tortuga->vista = vista;
	tronco->vista = vista;

	tiempoAnterior = tiempoActual;
}

void dibujar() {	
	cono->dibujar(GL_POLYGON);
	cuadrado->dibujar(GL_TRIANGLES);
	mapa->dibujar(GL_QUADS);
	rama->dibujar(GL_POLYGON);
	rana->dibujar(GL_TRIANGLES);
	tacoma->dibujar(GL_QUADS);
	tortuga->dibujar(GL_TRIANGLES);
	tronco->dibujar(GL_QUADS);
}

void inicializarCono() {
	cono = new Cono();
	cono->vista = vista;
	cono->proyeccion = proyeccion;
}

void inicializarCuadrado() {
	cuadrado = new Cuadrado();
	cuadrado->vista = vista;
	cuadrado->proyeccion = proyeccion;
}

void inicializarMapa() {
	mapa = new Mapa();
	mapa->vista = vista;
	mapa->proyeccion = proyeccion;
}

void inicializarRama() {
	rama = new Rama();
	rama->vista = vista;
	rama->proyeccion = proyeccion;
}

void inicializarRana() {
	rana = new Rana();
	rana->vista = vista;
	rana->proyeccion = proyeccion;
}

void inicialiarTacoma() {
	tacoma = new Tacoma();
	tacoma->vista = vista;
	tacoma->proyeccion = proyeccion;
}

void inicializarTortuga() {
	tortuga = new Tortuga();
	tortuga->vista = vista;
	tortuga->proyeccion = proyeccion;
}

void inicializarTronco() {
	tronco = new Tronco();
	tronco->vista = vista;
	tronco->proyeccion = proyeccion;
}

int main()
{
	//Inicialización de GLFW
	if (!glfwInit()) {
		//Si no se inició bien, terminar la ejecución
		exit(EXIT_FAILURE);
	}

	//Inicializar la ventana
	window = glfwCreateWindow(ancho, alto, "Graficos", NULL, NULL);
	//Verficar si se creó bien la ventana
	if (!window) {
		//Cerrar todos los procesos de GLFW
		glfwTerminate();
		//Termina ejecución
		exit(EXIT_FAILURE);
	}

	//Establecer "window" como contexto
	glfwMakeContextCurrent(window);

	//Se trae las funciones de OpenGL Moderno
	glewExperimental = true;
	//Inicializar GLEW
	GLenum glewError = glewInit();
	//Verificar que GLEW se inicializó bien
	if (glewError != GLEW_OK) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	const GLubyte *version = glGetString(GL_VERSION);
	cout << "Version de OpenGL: " << version << endl;

	red = green = blue = 0.75f;

	posicionCamara = vec3(0.0f, 15.0f, 5.0f);

	actualizarVista();
	inicializarProyeccion();

	inicializarCono();
	inicializarCuadrado();
	inicializarMapa();
	inicializarRama();
	inicializarRana();
	inicialiarTacoma();
	inicializarTortuga();
	inicializarTronco();

	//Crear instancia del shader
	const char * rutaVertex = "vShaderSimple.shader";
	const char * rutaFragment = "fShaderSimple.shader";
	shader = new Shader(rutaVertex, rutaFragment);

	//Mapeo de atributos
	posicionID =
		glGetAttribLocation(shader->getID(), "posicion");
	colorID =
		glGetAttribLocation(shader->getID(), "color");
	modeloID =
		glGetUniformLocation(shader->getID(), "modelo");
	vistaID =
		glGetUniformLocation(shader->getID(), "vista");
	proyeccionID =
		glGetUniformLocation(shader->getID(), "proyeccion");

	samplerImagenID =
		glGetUniformLocation(shader->getID(), "samplerImagen");
	coordenadaUVID =
		glGetAttribLocation(shader->getID(), "coordenadaUV");

	texturaCuadradoID =
		Shader::cargarBMP("texturas\\carita.bmp");

	texturaTacomaID =
		Shader::cargarBMP("texturas\\tacoma.bmp");

	//Desenlazar shader
	shader->desenlazarShader();

	cono->shader = shader;
	cono->inicializarVertexArray(posicionID, colorID,
		modeloID, vistaID, proyeccionID, coordenadaUVID,
		samplerImagenID, texturaTacomaID);

	cuadrado->shader = shader;
	cuadrado->inicializarVertexArray(posicionID, colorID,
		modeloID, vistaID, proyeccionID, coordenadaUVID,
		samplerImagenID, texturaCuadradoID);

	mapa->shader = shader;
	mapa->inicializarVertexArray(posicionID, colorID,
		modeloID, vistaID, proyeccionID, coordenadaUVID,
		samplerImagenID, texturaTacomaID);

	rama->shader = shader;
	rama->inicializarVertexArray(posicionID, colorID,
		modeloID, vistaID, proyeccionID, coordenadaUVID,
		samplerImagenID, texturaTacomaID);

	rana->shader = shader;
	rana->inicializarVertexArray(posicionID, colorID,
		modeloID, vistaID, proyeccionID, coordenadaUVID,
		samplerImagenID, texturaTacomaID);

	tacoma->shader = shader;
	tacoma->inicializarVertexArray(posicionID, colorID,
		modeloID, vistaID, proyeccionID, coordenadaUVID,
		samplerImagenID, texturaTacomaID);

	tortuga->shader = shader;
	tortuga->inicializarVertexArray(posicionID, colorID,
		modeloID, vistaID, proyeccionID, coordenadaUVID,
		samplerImagenID, texturaTacomaID);

	tronco->shader = shader;
	tronco->inicializarVertexArray(posicionID, colorID,
		modeloID, vistaID, proyeccionID, coordenadaUVID,
		samplerImagenID, texturaTacomaID);

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);
	
	tiempoAnterior = glfwGetTime();

	//Ciclo de dibujo
	while (!glfwWindowShouldClose(window)) {
		//Establecer el area de render (viewport)
		glViewport(0, 0, ancho, alto);
		//Establecer el color con el que se limpia la pantalla
		glClearColor(red, green, blue, 1);
		//Limpiar la pantalla
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//rutina de dibujo
		actualizar();
		dibujar();

		//Intercambio de buffers
		glfwSwapBuffers(window);
		//Buscar señales de entrada
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}

