#include "Modelo.h"
#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp"

class Rama : public Modelo {
public:
	vec3 coordenadas;
	float angulo;
	void mover();
	void rotar();
	void escalar();
	Rama();
};
