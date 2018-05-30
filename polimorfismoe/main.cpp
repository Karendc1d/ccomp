#include <iostream>
#include <string>
#include "poligono.h"
using namespace std;

int main()
{
    rectangulo rect;
    triangulo tri;
    poligono *ppoli1=&rect;
    poligono *ppoli2=&tri;
    ppoli1->poligono(8,6);
    ppolo2->poligono(5,3);
    cout<<rect.area()<<endl;
    cout<<tri.area()<<endl;
    return 0;
}
