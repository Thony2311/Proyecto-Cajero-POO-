#include "cuenta.h"
#include "exception.h"

Cuenta::Cuenta(Cliente * uncliente, long numero)
{
	this->uncliente = uncliente;
	this->numero = numero;
	this->saldo = 0;
}

Cuenta::~Cuenta()
{
}

long Cuenta::getNumero(){
	return this->numero;
}

long Cuenta::getSaldo(){
	return this->saldo;
}

Cliente* Cuenta::getCliente(){
	return this->uncliente;
}

void Cuenta::retirarDinero(long valor){
 	
	if (valor > this->saldo){
		throw new Exception ("No tiene fondos suficientes para hacer esta transaccion");			
	}
	
	this->saldo = this->saldo - valor;
}

void Cuenta::consignarDinero(long valor){
	this->saldo = this->saldo + valor;
}
