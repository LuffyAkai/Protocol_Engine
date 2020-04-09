#include "ProtoWorld.h"

//Definiendo la gravedad.
void World::setGravity(Vec2 v)
{
	gravity = v;
}

void World::addBody(Body* b)
{
	bodies.push_back(b); //Va agregando elementos al vector bodies.
}

//Este es la parte mas importante de todo.
void World::Step(float dt)
{
	if ((int)bodies.size() == 0) { std::cout << "NO BODIES FOUND IN THIS WORLD." << std::endl; system("pause");}

	//Por ahora, la unica aceleracion que existe es debido a la gravedad.
	float ax = gravity.getx(); 
	float ay = gravity.gety();

	for (int i = 0; i < (int)bodies.size(); i++) //Iterando sobre el vector "bodies".
	{
		float sx = bodies[i]->getPos().getx(); //Posicion en x del cuerpo en bodies[i]
		float sy = bodies[i]->getPos().gety(); //Posicion en y del cuerpo en bodies[i]

		float vx = bodies[i]->getVel().getx(); //Velocidad en x del cuerpo en bodies[i]
		float vy = bodies[i]->getVel().gety(); //Velocidad en y del cuerpo en bodies[i]

		bodies[i]->setPos(Vec2(sx + vx * dt, sy + vy * dt)); //Modificando la posicion del cuerpo usando la aproximacion de Euler.
		bodies[i]->setVel(Vec2(ax * dt + vx, ay * dt + vy)); //Modificando la velodidad del cuerpo usando la aproximacion de Euler.
	}
}
