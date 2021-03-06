// App_4_Ejercicios.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void ejercicio_1(int num);
void ejercicio_1_array(int* nums, int tamanho);
void ejercicio_2(int num);
void ejercicio_3(int num);

int main() {
	int num;
	std::cin >> num;
	ejercicio_1(num);
	ejercicio_2(num);
	ejercicio_3(num);

	int arrayNums[] = { 1, 5, 10, 22 };
	int tamanho = sizeof(arrayNums) / sizeof(arrayNums[0]);
	ejercicio_1_array(arrayNums, tamanho);
	ejercicio_1_array(arrayNums, tamanho);

	getchar(); getchar();
    return 0;
}
void ejercicio_1(int num) {
	bool esPar = (num % 2 == 0);
	std::cout << num << " es "
		<< (esPar ? "par" : "impar") << std::endl;
	num = num + 11;
}
void ejercicio_1_array(int* nums, int tamanho)
{
	for (int i = 0; i < tamanho +1; i++) {
		ejercicio_1(nums[i]);
		// nums[i] += 11;
	}
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
void ejercicio_3(int num) {
	int num_comp;
	do {
		std::cin >> num_comp;
		if (num_comp < num)
			std::cout << num_comp << " es menor a " << num  << std::endl;
		else if (num_comp > num)
			std::cout << num_comp << " es mayor a " << num << std::endl;
		else
			std::cout << num_comp << " es igual a " << num << std::endl;
	} while (num_comp != num);
}