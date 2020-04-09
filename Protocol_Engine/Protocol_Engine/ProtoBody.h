#include "ProtoMath.h"

struct Body
{
public:
	//Definimos los constructores.
	Body() : mass(1.0f) {}
	Body(float mass) : mass(mass) {}

	//Establecemos el valor de la masa.
	void setMass(float m);

	//Establecemos la velocidad y la posicion.
	void setVel(Vec2 v);
	void setPos(Vec2 v);

	//Obtenemos los valores de masa, posicion y velocidad.
	float getMass();
	float getInvMass();
	Vec2 getVel();
	Vec2 getPos();

	//Mostramos la informacion del cuerpo.
	void DisplayInfo();

	//La aplicacion de la fuerza.
	void addForce(Vec2 v);

private:
	float mass;
	float invMass = 1 / mass;
	Vec2 position;
	Vec2 velocity;
	Vec2 force;
};
