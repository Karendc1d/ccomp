#include <iostream>
#include <string>
#include "ArregloDinamico.h"
using namespace std;
int main()
{
    ArregloDinamico a(0);
    a.Insertar(8);
    a.Insertar(31);
    a.Insertar(19);
    a.Insertar(15);
    a.mostrar();
//Algunas funciones con el arreglo creado con memoria din�mica:

    a.Insertar(1);
    a.Insertar(2);
    a.mostrar();
    a.mostrar();

    cout<<a.maximo()<<endl;
    cout<<a.minimo()<<endl;
    cout<<a.promedio()<<endl;
    a.ordenar();
    a.mostrar();
    a.invertir();
    a.mostrar();

    return 0;
}
