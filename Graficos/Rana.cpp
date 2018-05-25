#include "stdafx.h"
#include "Rana.h"

Rana::Rana() {

	//TRIANGLES
	// Inicia rostro de frogger
	//1
	vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.0f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//2
	vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//3
	vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//4
	vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.0f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//5
	vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.0f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//6
	vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//7
	vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//8
	vertices.push_back({ vec4(0.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.0f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	// Finaliza rostro de frogger

	// Inicia rostro trasero de frogger
	//1
	vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.0f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//2
	vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//3
	vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//4
	vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.0f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//5
	vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.0f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//6
	vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//7
	vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//8
	vertices.push_back({ vec4(0.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.0f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	// Finaliza rostro trasero de frogger

	//Union de  las caras de frogger
	// 8 1
	vertices.push_back({ vec4(-0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	// 5 4

	vertices.push_back({ vec4(0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//2
	vertices.push_back({ vec4(0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//7
	vertices.push_back({ vec4(-0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.5f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//6
	vertices.push_back({ vec4(-0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//3
	vertices.push_back({ vec4(0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.3f, -0.2f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.0f, 0.0f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, 0.0f, 0.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Finaliza union d las caras de frogger

	// ojo 1
	vertices.push_back({ vec4(-0.5f, 0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.3f, 0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.3f, 0.7f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-0.3f, 0.7f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.7f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-0.5f, 0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//ojo 2
	vertices.push_back({ vec4(0.5f, 0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.3f, 0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.3f, 0.7f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(0.3f, 0.7f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.5f, 0.7f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(0.5f, 0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//inicializa cuerpo
	vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//finaliza cuerpo

	//inicializa cuerpo atras
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//finaliza cuerpo atras

	//Inicializa union de cuerpo
	// 1
	vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//2
	vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//3
	vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//4
	vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 1.5f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Inicializa pata delantera 1
	vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Finaliza pata delantera 1

	// Inicia Union de pata delantera 1
	vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////50
	vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	/////////////
	vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////// MANO ////
	vertices.push_back({ vec4(-1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//// MANO delantera ///
	vertices.push_back({ vec4(-1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Inicia union de mano 1 //
	vertices.push_back({ vec4(-1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	/////
	vertices.push_back({ vec4(-1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//////
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	// Finaliza Union de  pata delantera 1

	//Inicializa pata delantera 1
	vertices.push_back({ vec4(-1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Finaliza pata delantera 1

	// Inicia Union de pata delantera 2
	vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	/////////////
	vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.0f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	vertices.push_back({ vec4(1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////// MANO ////
	vertices.push_back({ vec4(1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.5f, 0.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//// MANO delantera ///
	vertices.push_back({ vec4(1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Inicia union de mano 2 //
	vertices.push_back({ vec4(1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	/////
	vertices.push_back({ vec4(1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.3f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//////
	vertices.push_back({ vec4(1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.5f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 0.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 0.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	// Finaliza Union de  pata delantera 2

	//Inicializa pata trasera 1
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Finaliza pata trasera 1

	// Inicia Union de pata trasera 1
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	/////////////100
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.6f, 1.0f), vec4((float(rand() % 101)) / 100, (float(rand() % 101)) / 100, (float(rand() % 101)) / 100, 1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////// MANO ////
	vertices.push_back({ vec4(-1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//// MANO trasera ///
	vertices.push_back({ vec4(-1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Inicia union de mano trasera 1 //
	vertices.push_back({ vec4(-1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	/////
	vertices.push_back({ vec4(-1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//////
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	// Finaliza Union de  pata trasera 1

	//Inicializa pata trasera 2
	vertices.push_back({ vec4(-1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(-1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(-1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Finaliza pata trasera 2

	// Inicia Union de pata trasera 2
	vertices.push_back({ vec4(1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	vertices.push_back({ vec4(1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	/////////////
	vertices.push_back({ vec4(1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.0f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.0f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////////////
	vertices.push_back({ vec4(1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	////// MANO trasera 2 ////
	vertices.push_back({ vec4(1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.5f, 1.6f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//// MANO trasera 2 ///
	vertices.push_back({ vec4(1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	//Inicia union de mano trasera 2 //
	vertices.push_back({ vec4(1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	/////
	vertices.push_back({ vec4(1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.3f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.3f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	/////
	vertices.push_back({ vec4(1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });

	vertices.push_back({ vec4(1.6f, -0.5f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.5f, 1.3f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	vertices.push_back({ vec4(1.6f, -0.2f, 1.0f, 1.0f),vec4((float(rand() % 101)) / 100,(float(rand() % 101)) / 100,(float(rand() % 101)) / 100,1.0f) });
	//140

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

	

	//Aqui sigue el mapa UV
}