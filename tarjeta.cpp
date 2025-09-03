#include "tarjeta.h"

Tarjeta::Tarjeta(long numero, int clave, Cuenta * unacuenta)
{
	this->numero = numero;
	this->clave = clave;
	this->unacuenta = unacuenta;
}

Tarjeta::~Tarjeta()
{
}

long Tarjeta::getNumero(){
	return this->numero;
}

int Tarjeta::getClave(){
	return this->clave;
}

Cuenta* Tarjeta::getCuenta(){
	return this->unacuenta;
}
