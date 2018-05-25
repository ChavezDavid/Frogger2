#pragma once
#include "Modelo.h"
#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp"

class Tortuga : public Modelo {
public:
	vec3 coordenadas;
	float angulo;
	float velocidad = 6.0f;
	void mover(double tiempoDelta);
	void rotar();
	void escalar();
	Tortuga();
};