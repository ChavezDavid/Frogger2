#pragma once
#include "Modelo.h"
#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp"

class Chasis : public Modelo {
public:
	vec3 coordenadas;
	float angulo;
	int direccion = 0;
	float velocidad = 6.0f;
	void mover(double tiempoDelta);
	void rotar();
	void escalar();
	Chasis();
};

