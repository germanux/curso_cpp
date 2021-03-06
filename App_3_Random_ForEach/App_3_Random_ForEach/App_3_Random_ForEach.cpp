// App_3_Random_ForEach.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <random>

struct Vivienda
{
	char calle[50];
	int numero;
	int metros;
};
int main()
{
	Vivienda viviendas[100];
	std::random_device rd;
	std::mt19937 mersenne(rd());
	for (int i = 0; i < 100; i++) {
		Vivienda viviendaAleatoria = {
			"Miguel Yuste", mersenne() / 10000000, mersenne() / 10000000
		};
		strcpy_s(viviendas[i].calle, viviendaAleatoria.calle);
		viviendas[i].numero = viviendaAleatoria.numero;
		viviendas[i].metros = viviendaAleatoria.metros;
	}
	for (Vivienda v : viviendas) {
		std::cout << v.calle << ", "
			<< v.numero << ": "
			<< v.metros << std::endl;
	}
	std::cout << sizeof(viviendas) / sizeof(viviendas[0]);
	getchar();
    return 0;
}

