#pragma once
#include "Modelo.h"
#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp"

class Tortuga : public Modelo {
public:
	vec3 coordenadas;
	void mover();
	Tortuga();
};