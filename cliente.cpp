#include "cliente.h"

Cliente::Cliente()
{
	this->nombre = "";
	this->apellidos = "";
	this->nuip = 0;

}

Cliente::~Cliente()
{
}

Cliente::Cliente(string nombre, string apellidos,long nuip)
{
	this->nombre = nombre;
	this->apellidos = apellidos;
	this->nuip = nuip;
}

string Cliente::getNombre(){
	return this->nombre;
}

string Cliente::getApellidos(){
	return this->apellidos;
}

long Cliente::getNuip(){
	return this->nuip;
}


