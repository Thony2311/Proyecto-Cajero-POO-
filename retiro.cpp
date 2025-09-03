#include "retiro.h"

Retiro::Retiro(long monto, Cuenta * cuenta)
{
	this->monto = monto;
	this->cuenta = cuenta;
}

Retiro::~Retiro()
{
}

long Retiro::getMonto(){
	return this->monto;
}


