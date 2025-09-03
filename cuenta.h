#ifndef CUENTA_H
#define CUENTA_H

#include "cliente.h"

class Cuenta
{
	public:
		Cuenta(Cliente * uncliente, long numero);
		~Cuenta();
		
		//Metodos para acceder alos atributos
		long getNumero();
		long getSaldo();
		Cliente* getCliente();
		
		//Metodo que permite modificar el saldo al hacer un retiro
		void retirarDinero(long valor);
		
		//Metodo que permite modificar el saldo al hacer una consignacion
		void consignarDinero(long valor);
		
		
	private:
		long numero;
		long saldo;
		
		//Relacion uno a uno
		Cliente * uncliente;
};

#endif
