#ifndef RETIRO_H
#define RETIRO_H

#include "cuenta.h"

using namespace std;


class Retiro
{
	public:
		Retiro(long monto, Cuenta * cuenta);	
		~Retiro();
		
		//Metodos para accerder a los atributos
		long getMonto();
		
		
	private:
		long monto;
		
		//Relacion 1 a 1
		Cuenta* cuenta;
		
};

#endif
