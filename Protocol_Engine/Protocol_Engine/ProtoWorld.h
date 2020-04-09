#include "ProtoBody.h"

//Se encarga de hacer las iteraciones necesarias para la simulacion.
struct World
{
public:
	//Definiendo los constructores
	World() : gravity(Vec2(0.0f, 9.81f)) {}
	World(Vec2 gravity) : gravity(gravity) {}

	//Estableciendo la gravedad.
	void setGravity(Vec2 v);

	//La creacion de un cuerpo.
	void addBody(Body* b);

	//Dando la simulacion.
	void Step(float dt);

private:
	Vec2 gravity;
	std::vector<Body*> bodies;

};
