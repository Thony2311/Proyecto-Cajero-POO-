#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente
{
	public:
		Cliente();
		Cliente(string nombre, string apellidos,long nuip);
		~Cliente();
		
		//Metodos pra acceder a la informacion
		long getNuip();
		string getNombre();
		string getApellidos();
		
	private:
		long nuip;
		string nombre;
		string apellidos;

};

#endif
