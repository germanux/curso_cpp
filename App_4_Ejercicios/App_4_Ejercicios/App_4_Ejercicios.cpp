// App_4_Ejercicios.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void ejercicio_1(int num);
void ejercicio_2(int num);

int main() {
	int num;
	std::cin >> num;
	ejercicio_1(num);
	ejercicio_2(num);

	getchar(); getchar();
    return 0;
}
void ejercicio_1(int num) {
	bool esPar = (num % 2 == 0);
	std::cout << num << " es "
		<< (esPar ? "par" : "impar") << std::endl;
}
bool siEsPrimo(int num) {
	for (int i = 2; i < num; i++) 
		if (num % i == 0)
			return false;
	return true;
}
void ejercicio_2(int num) {
	bool esPrimo = siEsPrimo(num);
	std::cout << num << " es "
		<< (esPrimo ? "primo" : "no primo") << std::endl;
}