#include "curso.h"
#include <string>
using namespace std;

curso(string a, int b){
    name=a;
    promedio=b;
};

void setname(string a){
    name=a;
}
void setpromedio(int b){
    promedio=b;
}


void curso::setearPomedio(int notas_){
    promedio=notas_;
    }
void curso::setearName(string name_){
    name=name_;
}
int curso::obtenerPromedio(){
    return promedio;}
string curso::obtenerName_(){
    return name;}
string curso::obtenerInformacion(){
    stringstream a;
    a<promedio;
    return "El nombre de este curso es " + name + " y el promedio es " + promedio +
}



};
