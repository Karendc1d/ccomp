#include "poligono.h"

poligono::poligono(int ancho_,int alto_){
    ancho=ancho_;
    alto=alto_;
}
rectangulo::rectangulo(int ancho_,int alto_):poligono(ancho_,alto_){
}

int rectangulo::area(){
    return ancho*alto;
}

triangulo::triangulo(int ancho_,int alto_}:poligono(ancho_,alto_){
}

int triangulo::area(){
    return ancho*alto/2;
}


