#ifndef CLASES_H
#define CLASES_H
#include <iostream>
using namespace std;

class ArregloDinamico
{
    int NumElementos;
    int *data;
    public:
        ArregloDinamico(int n, int arr[]);
        void insertar(int);
        void mostrar();
        void eliminar(int);
};

#endif // CLASES_H
