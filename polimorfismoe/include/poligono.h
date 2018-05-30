#ifndef POLIGONO_H
#define POLIGONO_H
#include <iostream>
#include <string>
using namespace std;

class poligono
{
public:
    int ancho,alto;
    poligono(int, int);
};

class rectangulo:public poligono{
public:
    rectangulo(int, int);
    int area();
};

class triangulo:public poligono{
public:
    triangulo(int, int);
    int area();
};
#endif // POLIGONO_H
