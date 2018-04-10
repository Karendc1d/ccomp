/* Paso por referencia, en la funcion con este signo& le damos permiso para acceder a la direccion de memoria de la variable y modificarla permanenteme.
#include <iostream>
using namespace std;

void sumar(int &x){
  x+=1;
}
int main(){
  int a=5;
  sumar(a);
  cout<<a<<endl;
  return 0;

}
*/

//En cambio en el paso por valor la funcion operara con el valor solo dentro de la funcion porque al imprimir dcho valor fuera de la funcion este volvera a tener su mismo valor de siempre.
#include <iostream>
using namespace std;

int sumar(int x){
  x+=1;
  return x;
}
int main(){
  int a=5;
  cout<<sumar(a)<<endl;
  cout<<a<<endl;
  return 0;
}
