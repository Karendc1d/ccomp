#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

class ArregloDinamico
{
public:

    int tam;
    int *data;

        ArregloDinamico(int);

        void Insertar(int);
        void mostrar();
        void vaciar();
        void eliminarElemento(int);
        int maximo();
        int minimo();
        int promedio();
        int mayorprimo();
        int menorprimo();
        void ordenar();
        int sumar();
        void invertir();
};

#endif // ARREGLODINAMICO_H
