#include "Modelo.h"
#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp"

class Cono : public Modelo {
public:
	vec3 coordenadas;
	float angulo;
	void mover();
	void rotar();
	void escalar();
	Cono();
};
