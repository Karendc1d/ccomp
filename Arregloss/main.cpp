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
    a.vaciar();
    a.mostrar();
    a.Insertar(1);
    a.Insertar(2);
    a.mostrar();
    a.eliminarElemento(1);
    a.mostrar();
    cout<<a.maximo()<<endl;
    cout<<a.minimo()<<endl;
    cout<<a.promedio()<<endl;
    cout<<a.mayorprimo()<<endl;
    cout<<a.menorprimo()<<endl;
    a.ordenar();
    a.mostrar();
    cout<<a.sumar()<<endl;
    a.invertir();
    a.mostrar();

    return 0;
}
