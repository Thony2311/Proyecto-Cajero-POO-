#include "cajero.h"
#include <iostream>
#include "exception.h"

Cajero::Cajero(Banco* banco)
{
	this->banco = banco;
	this->retiros = new list<Retiro*>();
}

Cajero::~Cajero()
{
}

void Cajero::ejecucion(int caso){
	
	try {
		
		if (caso == 0 || caso > 3) {
    	std::cout << "Opcion no valida" << std::endl;
    	return;
		}
	
		int contrasenia;
		long numeroTarjeta, monto;
		//Paso 1.
    	cout << "Ingrese el numero de la tarjeta: ";
    	cin >> numeroTarjeta;
    	std::cout << std::endl;
    	
    	//Paso 2.
		Tarjeta* target = banco->buscarTarjeta(numeroTarjeta);

   		cout << "Ingrese la clave de su tarjeta: ";
    	std::cin >> contrasenia;
    	cout << std::endl;
    

		
		if(target->getClave() == contrasenia){
			
			//Paso 3.
			std::cout << "Saldo disponible: " << target->getCuenta()->getSaldo() << endl << endl;
			
			if (caso == 1) {
				
					//Paso 4.
					std::cout << "Ingrese el monto a retirar: ";
		    		std::cin >> monto;
		    		std::cout << std::endl;
		    
		    		//Paso 5.
		    		target->getCuenta()->retirarDinero(monto);
		    	
		    		Retiro* unretiro = new Retiro(monto, target->getCuenta());
		    		this->retiros->push_back(unretiro);
		    	
		    		//Paso 6.
		    		cout <<"Transaccion realizada con exito" << endl;
		    		cout <<"Cliente: " << target->getCuenta()->getCliente()->getNombre() << " " << target->getCuenta()->getCliente()->getApellidos() << endl;
		    		cout << "Numero de cuenta: " << target->getCuenta()->getNumero() << endl;
		    		//cout << "Numero de cuenta: ***** " << target->getNumero().substr(target->getNumero().length() - 4).c_str();
		    		cout << "Saldo disponible: " << target->getCuenta()->getSaldo() << endl << endl;
		    		cout << "Gracias por usar nuestros servicios" << endl;
		            
			}
		            
		    if (caso == 2) {
					//Paso 4.
					cout << "Ingrese el monto a consignar: ";
		    		cin >> monto;
		    		cout << endl;
		    	//Paso 5.
		    		target->getCuenta()->consignarDinero(monto);
		    		cout <<"Transaccion realizada con exito" << endl;
		    		cout <<"Cliente: " << target->getCuenta()->getCliente()->getNombre() << " " << target->getCuenta()->getCliente()->getApellidos() << endl;
		    		cout << "Numero de cuenta: " << target->getCuenta()->getNumero() << endl;
		    		//cout << "Numero de cuenta: ***** " << target->getNumero().substr(target->getNumero().length() - 4).c_str();
		    		cout << "Saldo disponible: " << target->getCuenta()->getSaldo() << endl << endl;
		    		cout << "Gracias por usar nuestros servicios" << endl;
		            
			}
			
		}
			
		else {
			throw new Exception ("Clave Incorrecta");
		}	
	
	}
	
	catch (Exception * exc) {
		cout << "ERROR: " << exc->getMessage() << endl;
	}

}
