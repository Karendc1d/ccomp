#include <iostream>
#include <stdio.h>
#include "persona.h"

using namespace std;

int main(int argc, const char * argv[]) {

	Persona pp ("Pepe", 30, 180);

	Persona pepito(pp);

	Persona unapersona;

	Persona maria("Maria",30,150);

	maria = maria+pp;

	//cout<<"Nombre: "<<maria.nombre()<<" Edad: "<<maria.edad()<<" Estatura: "<<maria.estatura()<<endl;

	pepito = 3 + pepito;
	cout<<pepito;

	cout<<"Inserte una persona!"<<endl;
	cin>>unapersona;

	cout<<unapersona;

	return 0;

}

