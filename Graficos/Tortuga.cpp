#include "stdafx.h"
#include "Tortuga.h"

Tortuga::Tortuga() {
	coordenadas = vec3(10.0f, 0.0f, 0.0f);
	angulo = 0.0f;

	//TRIANGLES
	//Caparazon arriba
	vertices.push_back({ vec4(-1.0f, 2.0f,-1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 2.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.8f, 1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 2.0f,-1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.8f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.8f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(1.0f, 2.0f,-1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 2.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 1.8f, 1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 2.0f,-1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 1.8f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.8f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 2.0f,-1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 2.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 1.8f, 1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 2.0f,-1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 1.8f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.8f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 2.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 2.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.8f, -3.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 2.0f, -1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.8f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.8f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(1.0f, 2.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 2.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 1.8f, -3.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 2.0f, -1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 1.8f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.8f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 2.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 2.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 1.8f, -3.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 2.0f, -1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 1.8f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.8f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 1.0f, 2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.0f, 2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.8f, 1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.0f, 2.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.8f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.8f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(1.0f, 1.0f, 2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 1.0f, 2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 1.8f, 1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.0f, 2.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 1.8f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.8f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 1.0f, 2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 1.0f, 2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 1.8f, 1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.0f, 2.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 1.8f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.8f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 1.0f, -4.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.0f, -4.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.8f, -3.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.0f, -4.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.8f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.8f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(1.0f, 1.0f, -4.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 1.0f, -4.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 1.8f, -3.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.0f, -4.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 1.8f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.8f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 1.0f, -4.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 1.0f, -4.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 1.8f, -3.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.0f, -4.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 1.8f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.8f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	//Caparazon abajo
	vertices.push_back({ vec4(-1.0f, 0.0f,-1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.3f, 1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.0f,-1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.3f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.3f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(1.0f, 0.0f,-1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 0.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 0.3f, 1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.0f,-1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 0.3f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.3f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 0.0f,-1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 0.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 0.3f, 1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.0f,-1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 0.3f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.3f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 0.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.3f, -3.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.0f, -1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.3f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.3f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(1.0f, 0.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 0.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 0.3f, -3.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.0f, -1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 0.3f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.3f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 0.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 0.0f, -1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 0.3f, -3.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.0f, -1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 0.3f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.3f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 1.0f, 2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.0f, 2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.3f, 1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.0f, 2.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.3f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.3f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(1.0f, 1.0f, 2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 1.0f, 2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 0.3f, 1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.0f, 2.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 0.3f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.3f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 1.0f, 2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 1.0f, 2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 0.3f, 1.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.0f, 2.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 0.3f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.3f, 1.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 1.0f, -4.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.0f, -4.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.3f, -3.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.0f, -4.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.3f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.3f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(1.0f, 1.0f, -4.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 1.0f, -4.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 0.3f, -3.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 1.0f, -4.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 0.3f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(1.0f, 0.3f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	vertices.push_back({ vec4(-1.0f, 1.0f, -4.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 1.0f, -4.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 0.3f, -3.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 1.0f, -4.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-4.0f, 0.3f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.3f, -3.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });

	//Cabeza
	vertices.push_back({ vec4(6.0f, 2.0f, -2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 2.0f, -2.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 2.0f, 0.0f, 1.0f),vec4(1.0f, 1.0f, 1.0f, 1.0f) });
	vertices.push_back({ vec4(6.0f, 2.0f, -2.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(4.0f, 2.0f, 0.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	vertices.push_back({ vec4(6.0f, 2.0f, 0.0f, 1.0f),vec4(0.0f, 0.0f, 0.0f, 1.0f) });
	//50

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));
	//
	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));
	//
	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));
	//
	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));

	mapaUV.push_back(vec2(0.0f, 0.0f));
	mapaUV.push_back(vec2(0.1f, 0.0f));
	mapaUV.push_back(vec2(1.0f, 1.0f));
	//
}

void Tortuga::mover(double tiempoDelta) {
	modelo = mat4(1.0f); //Matriz identidad
	modelo = translate(modelo, coordenadas);
	modelo = rotate(modelo, angulo, vec3(0.0f, 1.0f, 0.0f));
	modelo = scale(modelo, vec3(1.0f, 1.0f, 1.0f));
}