#include "Modelo.h"
#include "glm\gtx\transform.hpp"
#include "glm\glm.hpp"

class Cono : public Modelo {
public:
	Cono();
	vec3 coordenadas;
	void mover();
};
