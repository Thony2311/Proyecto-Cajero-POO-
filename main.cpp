/*
=====================================================
			UNIVERSIDAD DEL VALLE - SEDE PALMIRA
			TECNOLOGÌA EN DESARROLO DE SOFTWARE
			
				TALLER FINAL
			
	Grupo 21
		Anthony Alzate Muriel 2355949-2724
		Sara Sinisterra Villota 2355303-2724
		Cristian Franco Lopez 2355565-2724
========================================================	
*/

#include <iostream>
#include "cajero.h"
#include "exception.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Creacion del objeto banco
	Banco* banco = new Banco("Calacotes Bank");
	
	//Creacion de los 5 objetos de la clase cliente
	Cliente* cliente1 = new Cliente("Anthony", "Alzate Muriel", 2355949);
	Cliente* cliente2 = new Cliente("Sara", "Sinisterra Villota", 23559874);
	Cliente* cliente3 = new Cliente("Cristian", "Franco", 23558744);
	Cliente* cliente4 = new Cliente("Ever", "Manzano LLano", 21856974);
	Cliente* cliente5 = new Cliente("Liliana", "Mora Saavedra", 21958746);
	
	//Creacion de los 5 objetos de la clase cuenta
	Cuenta* cuenta1 =new Cuenta(cliente1, 31458248);
	Cuenta* cuenta2 =new Cuenta(cliente2, 31458249);
	Cuenta* cuenta3 =new Cuenta(cliente3, 31458241);
	Cuenta* cuenta4 =new Cuenta(cliente4, 31458242);
	Cuenta* cuenta5 =new Cuenta(cliente5, 31458243);
	
	//Creacion de los 5 objetos de la clase tarjeta
	Tarjeta* tarjeta1 = new Tarjeta(95030412, 1234, cuenta1);
	Tarjeta* tarjeta2 = new Tarjeta(95030413, 1235, cuenta2);
	Tarjeta* tarjeta3 = new Tarjeta(95030414, 1236, cuenta3);
	Tarjeta* tarjeta4 = new Tarjeta(95030415, 1237, cuenta4);
	Tarjeta* tarjeta5 = new Tarjeta(95030416, 1238, cuenta5);
	
	cuenta1->consignarDinero(8000000);
	cuenta2->consignarDinero(4000000);
	cuenta3->consignarDinero(6040900);
	cuenta4->consignarDinero(12005000);
	cuenta5->consignarDinero(10300200);
	
	// Creacion del objeto  de la clase cajero
	Cajero* SEDELLANOGRANDE = new Cajero(banco);
	
	//Creacion de la lista de tarjetas
	banco->agregarTarjeta(tarjeta1);
	banco->agregarTarjeta(tarjeta2);
	banco->agregarTarjeta(tarjeta3);
	banco->agregarTarjeta(tarjeta4);
	banco->agregarTarjeta(tarjeta5);

	int opcion = 1;
	while (opcion != 3) {
		
		cout << endl << "Bienvenido a nuestro cajero de " << banco->getNombre() << ". Su banco aliado" << endl << endl;
		cout << endl << "Por favor selecciona la operacion bancaria que desea hacer" << endl << endl;
		cout << "1. Retirar Dinero" << endl;
		cout << "2. Consignar Dinero" <<endl;
		cout << "3. Salir" << endl << endl;
		cin >> opcion;
		cout << endl; 
		
		if (opcion == 3){
			std::cout << "Gracias por usar nuestros servicios" << std::endl;
			break;
		}
			
		SEDELLANOGRANDE->ejecucion(opcion);
			
	}	
		
	delete banco;
	delete cliente1, cliente2, cliente3, cliente4, cliente5;
	delete cuenta1, cuenta2, cuenta3, cuenta4, cuenta5;
	delete tarjeta1, tarjeta2, tarjeta3, tarjeta4, tarjeta5;
	delete SEDELLANOGRANDE;

	return 0;
}
