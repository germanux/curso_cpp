// App_1_Intro.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "impuestos.h"
#include "impuestos.h"
#include "utilidades.h"

void conversiones();
void f(char * str) {
	std::cout << str << '\n';
}
void f2(char str[]) {
	std::cout << str << '\n';
}
// Función principal del programa
int main(void)
{
	//char * otraCosa = "otra cosa";
	char otraCosa[10] = "otra cosa";
	char * c = "algo \0 mas"; // 5
	c = c + 100;
	f(otraCosa);
	f2(c);

	int entero = 10;
	int entero_B = 10;
	const int * pEntero = &entero;
	const int ** ptrPtrEntero = &pEntero;
	pEntero = &entero_B;
	// *pEntero = 33;
	std::cout << pEntero << std::endl;
	std::cout << (*pEntero) << std::endl;
	std::cout << &pEntero << std::endl;


	conversiones();
	getchar();
	return 0;
}
void conversiones() {
	using namespace std;
	double x = 3.6;
	int i = x;
	cout << "x = " << x << ", i = " << i << endl;
	int dividendo = 5;
	int divisor = 2;
	/*double resultado = (double) dividendo 
					 /  double (divisor);*/
	double resultado = static_cast<double> (dividendo)
					 / static_cast<double> (divisor);
	cout << "resultado = " << resultado;
}
// Uso cout, incremento ++X y X++ y aplicaIva()
void usoStdCout() {
	int16_t x = 5;
	int16_t precio(5);
	char c = 'c';
	/*/
	std::cout << "Hola que pasa" << std::endl;
	/*/
	std::cout << "El tamaño de X es " << sizeof(x) << " bytes " << std::endl;

	std::cout << "X++ " << x++ << std::endl;
	std::cout << "X = " << x << std::endl;
	std::cout << "++X " << ++x << std::endl;
	std::cout << "X = " << x << std::endl;

	using namespace std;
	cout << "Dime el precio" << endl;
	cin >> precio;
	if (precio <= 0)
	{
		int varLocal = 4;
		cerr << "No hay nada gratis, y menos negativo";
	}
	//varLocal;
	cout << "Precion con IVA = " << impuestos::aplicaIva(precio) << endl;
	/* */
}