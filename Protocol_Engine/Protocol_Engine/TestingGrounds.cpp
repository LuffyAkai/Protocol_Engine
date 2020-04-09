#include "ProtoWorld.h"
float mass; //definiendo el valor de masa.
float pos_x; //definiendo el valor de posicion en x.
float pos_y; //definiendo el valor de posicion en y.
float vel_x; //definiendo la velocidad en x.
float vel_y; //definiendo la velocidad en y.
int main()
{
	//Aqui es la bienvenida del usuario y se le hara las preguntas al usuario.
	std::cout << "Hola, Bienvenido al game engine Protocol Engine" << std::endl;
	std::cout << "Ingrese los siguientes valores" << std::endl;
	std::cout << "La masa: ";
	std::cin >> mass;
	std::cout << "Posicion en x: ";
	std::cin >> pos_x;
	std::cout << "Posicion en y: ";
	std::cin >> pos_y;
	std::cout << "Velocidad en x: ";
	std::cin >> vel_x;
	std::cout << "Velocidad en y: ";
	std::cin >> vel_y;

	//Creamos un mundo.
	World w1;

	//Creamos un cuerpo y establecemos sus propiedades y condiciones iniciales.
	Body b1;
	b1.setMass(mass);
	b1.setPos(Vec2(pos_x, pos_y));
	b1.setVel(Vec2(vel_x, vel_y));

	//Agregamos el cuerpo creado al mundo.
	w1.addBody(&b1);

	for (int i = 0; i < 10; i++) {
		w1.Step(1.0f);
		b1.DisplayInfo();
	}
}