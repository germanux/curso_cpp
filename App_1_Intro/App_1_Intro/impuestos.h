// #pragma once
#ifndef IMPUESTOS_H
#define IMPUESTOS_H

#define IVA_EN_MACRO 1.21
#define MI_FUN(x) x*x

namespace impuestos
{
	const char TIPO_IVA = 'S'; // 1, 2, 3 con IVA
	double aplicaIva(double precio);

	const double variable = MI_FUN(20);
	// const double variable = 20 * 20;
	const double IVA_TIPO_3(1.21);
	const double IVA_TIPO_2(1.08);
	const double IVA_TIPO_1(1.04);
	const double SIN_IVA = 1;
}

#endif // !IMPUESTOS_H
