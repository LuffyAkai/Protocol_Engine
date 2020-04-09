#include "ProtoMath.h"

//Aqui damos el valor a los componentes del vector.
void Vec2::Set(float x_, float y_)
{
	x = x_;
	y = y_;
}

//Calculamos algunas propiedades del vector.
//El caso de la magnitud
float Vec2::Length()
{
	return sqrt(x*x + y*y);
}

// La magnitud cuadratica
float Vec2::LengthSquared()
{
	return x*x + y*y;
}

//Aqui se muestra el valor del vector.
void Vec2::Display()
{
	std::cout << "El vector es: (" << x << ", " << y << ")" << std::endl;

}

//aqui se obtiene los componentes del vector.
float Vec2::getx()
{
	return x;
}

float Vec2::gety()
{
	return y;
}

//Definiendo operaciones con los vectores.
//Suma de operadores.
void Vec2::operator+=(Vec2 v)
{
	x = v.x;
	y = v.y;
}

//Resta de operadores.
void Vec2::operator-=(Vec2 v)
{
	x -= v.x;
	y -= v.y;
}

// Producto Punto.
float Vec2::Dot(Vec2 a, Vec2 b)
{
	return a.x * b.x + a.y * b.y;
}

//Producto Cruz.
float Vec2::Cross(Vec2 a, Vec2 b)
{
	return a.x * b.y - a.y * b.x;
}
