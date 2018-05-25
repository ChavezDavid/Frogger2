#pragma once
#include "Modelo.h"
#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp"

class Cuadrado : public Modelo {
public:
	vec3 coordenadas;
	float angulo;
	void mover();
	void rotar();
	void escalar();
	Cuadrado();
};

