#ifndef CAJERO_H
#define CAJERO_H

#include "retiro.h"
#include "banco.h"


#include<list>
#include <string>
using namespace std;



class Cajero
{
	public:
		Cajero(Banco* banco);
		~Cajero();
		
		void ejecucion(int caso);
		
		//Metodo de funcionamiento
		flujo_funcionamiento();
		
	private:
		
		//Relacion 0 a muchos
		list<Retiro *> * retiros;
		
		//Relacion 1 a 1
		Banco* banco;
		
};

#endif
