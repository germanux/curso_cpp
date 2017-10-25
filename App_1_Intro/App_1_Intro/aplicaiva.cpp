#include "stdafx.h"
#include "impuestos.h"

namespace impuestos {
	double aplicaIva(double precio) {

		//return impuestos::TIPO_IVA == 'S' ? precio : precio * impuestos::IVA_TIPO_3;

		return
			(impuestos::TIPO_IVA == '3') ? precio * impuestos::IVA_TIPO_3 :
			(impuestos::TIPO_IVA == '2') ? precio * impuestos::IVA_TIPO_2 :
			(impuestos::TIPO_IVA == '1') ? precio * impuestos::IVA_TIPO_1 :
			(impuestos::TIPO_IVA == 'S') ? precio * impuestos::SIN_IVA	  : 0;

		if		(impuestos::TIPO_IVA == '3') return precio * impuestos::IVA_TIPO_3; 
		else if (impuestos::TIPO_IVA == '2') return precio * impuestos::IVA_TIPO_2; 
		else if (impuestos::TIPO_IVA == '1') return precio * impuestos::IVA_TIPO_1; 
		else								 return precio * impuestos::SIN_IVA;
	}
}
