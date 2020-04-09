#include <iostream>
#include <math.h>
#include <vector>

struct Vec2
{
public:
	//Definimos los constructores
	Vec2() : x(0.0f), y(0.0f) {} // Constructor predeteminado
	Vec2(float x, float y) : x(x), y(y) {}

	//Asignamos valores a los componentes del vector.
	void Set(float x_, float y_);

	//Las Propiedades del vector.
	float Length();
	float LengthSquared();
	void Display();

	//Para obtener los componentes del vector.
	float getx();
	float gety();

	//Las operaciones con vectores.
	void operator += (Vec2 v);
	void operator -= (Vec2 v);
	float Dot(Vec2 a, Vec2 b);
	float Cross(Vec2 a, Vec2 b);

private:
	// Se pone los puntos en privado.
	float x, y;

};
