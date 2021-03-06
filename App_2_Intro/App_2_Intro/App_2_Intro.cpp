// App_2_Intro.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Estructuras.h"
typedef int entero;
typedef std::pair<std::string, int>  pareja;

// 101 = 5		001	010	100
// 001 = 1
// 011 = 3
enum class Estado {
	SOLTERO = 0, CASADO = 1, VIUDO = 2, DIVORCIADO = 4, OTRO = 4
};
Estado dameEstado() {
	return Estado::DIVORCIADO;
}
int main() {
	probandoStructs();
	std::exit(-1);

	Estado h = (Estado) 5;
	Genero g = Genero::MUJER;
	if ((int(h) & int(Estado::CASADO)) == int(Estado::CASADO)) {
		std::cout << "CASADO" << std::endl;
	}
	std::cout << "h = " << int(h) << std::endl;
	
	std::cout << "Estado = " << (int)dameEstado() << std::endl;

	entero e = 9;
	std::cout << e << std::endl;
	
	pareja p = std::make_pair("hola", 3);
	std::cout << " - " << p.second << std::endl;

	getchar();
	return 0;
}

int main_typeid()
{
	int a(5);
	int* ptr_a = &a;
	float b(1.4);

	std::cout << "ptr_a es: " 
		<< typeid(ptr_a).name() << std::endl;

	std::cout << "B es: " 
		<< typeid(b).name() << std::endl;
	getchar();
    return 0;
}

