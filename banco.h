#ifndef BANCO_H
#define BANCO_H

#include<list>
#include <string>
using namespace std;

#include "cliente.h"
#include "cuenta.h"
#include "tarjeta.h"



class Banco
{
	public:
		Banco(string nombre);
		~Banco();
		
		string getNombre();
		// Agregar métodos
		void agregarTarjeta(Tarjeta *);
		Tarjeta* buscarTarjeta(long numero);
				
	private:
		//Atributos propios de la clase
		string nombre;
		
		//Declaracion relacion 0 a muchos...
		list<Cliente *> *clientes;
		list<Cuenta *> *cuentas;
		list<Tarjeta *> *tarjetas;
};

#endif
