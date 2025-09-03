#include "banco.h"
#include "Exception.h"

Banco::Banco(string nombre)
{
	this->nombre = nombre;
	this->clientes = new list<Cliente*>();
	this->cuentas = new list<Cuenta*>();
	this->tarjetas = new list<Tarjeta*>();	
}

Banco::~Banco()
{
}

string Banco::getNombre(){
	return this->nombre;
}

//Agregar tarjeta
//Geenrar error si el numero de tarjeta ya existe

void Banco::agregarTarjeta(Tarjeta * tar){
	
	list<Tarjeta*>::iterator it = this->tarjetas->begin();
	Tarjeta * objeto = NULL;
	while (it !=this->tarjetas->end() ){
		objeto = *it;
		if (objeto->getNumero() == tar->getNumero())
			throw new Exception ("Ya hay una tarjeta registrada con el mismo numero");
		it++;		
	}
	this->tarjetas->push_back(tar);
}


Tarjeta* Banco::buscarTarjeta(long numero){
	
	list<Tarjeta*>::iterator it = this->tarjetas->begin();
	
	Tarjeta * objeto = NULL;
	while (it !=this->tarjetas->end() ){
		objeto = *it;
		if (objeto->getNumero() == numero)
			return objeto;
		it ++;
	}
	throw new Exception ("No se encontro una tarjeta con el numero dado");
}


	

