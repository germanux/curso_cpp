#include "stdafx.h"
#include "Estructuras.h"
#include <iostream>

void probandoStructs () {
	Persona p;
	p.edad = 20;
	p.genero = Genero::MUJER;
	Persona p2 = { 30, Genero::HOMBRE };

	std::cout << p.edad << ", " 
		<< (int)p.genero << std::endl;
	std::cout << p2.edad << ", " 
		<< (int)p2.genero << std::endl;
}