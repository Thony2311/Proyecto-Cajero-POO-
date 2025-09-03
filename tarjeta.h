#ifndef TARJETA_H
#define TARJETA_H

#include "cuenta.h"

class Tarjeta
{
	public:
		Tarjeta(long numero, int clave, Cuenta * unacuenta);
		~Tarjeta();
		
		//Metodos apra acceder
		long getNumero();
		int getClave();
		Cuenta* getCuenta();
		
		
		
		
	private:
		long numero;
		int clave;
		
		//Relacion 1 a 1
		Cuenta * unacuenta;
};

#endif
