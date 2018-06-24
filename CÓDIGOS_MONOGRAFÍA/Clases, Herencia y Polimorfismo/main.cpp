#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

int main()
{
    animal *arreglo[2];
    arreglo[0]= new humano(18,"Pedro");
    arreglo[1]= new perro(2,"Bobby","dalmata");

    arreglo[0]->comer();
    arreglo[1]->comer();
    return 0;
}
