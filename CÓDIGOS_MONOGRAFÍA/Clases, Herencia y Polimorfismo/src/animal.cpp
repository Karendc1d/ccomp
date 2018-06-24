#include "animal.h"

animal::animal(int edad_)
{
    edad=edad_;
}

void animal::comer(){
    cout<<"Estoy comiendo ";
}

humano::humano(int edad_,string name_):animal(edad_){
    name=name_;
}

void humano::comer(){
    animal::comer();
    cout<<"sentado en una mesa."<<endl;
}

perro::perro(int edad_,string name_,string raza_):animal(edad_){
    name=name_;
    raza=raza_;
}

void perro::comer(){
    animal::comer();
    cout<<"en el suelo."<<endl;

}
