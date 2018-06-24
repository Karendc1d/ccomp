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
        int maximo();
        int minimo();
        int promedio();
        void ordenar();
        void invertir();
};

#endif // ARREGLODINAMICO_H
