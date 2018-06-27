#include <stdio.h>
#include <conio.h>
#include<iostream>
#include "libgame.h"
#include "pong.h"

using namespace std;


int velocidad=18,h=1,score=1,i=2;
    PELOTA P(38,14,1,1,score);


void cambiar_velocidad(){
        if(P.DS()==h*4){
            velocidad-=3;
            gotoxy(68,1); cout<<"Nivel:"<<i++;
            h++;
        }
    }

int main(){

    OcultaCursor();
    Color(0x009);
    pintar_marco();
    int cont=0, op_juego;
    MENU M;
    Color(0x009);
    M.pintar_portada(op_juego);
    JUGADOR A(6,15);
    Color(0x002);
    A.pintar();
    JUGADOR B(74,15);
    B.pintar();



    char tecla;
    gotoxy(1,1);
cout<<"Score: ";

    while(1){



            if(kbhit()){
            A.borrar(); B.borrar();
            tecla= getch();
            if (tecla=='m'){M.pintar_portada(op_juego);}
            if(tecla=='q' && A.RY()>5) A.Y(-1); else if (tecla=='a' &&A.RY()<21) A.Y(1);
            if(op_juego=='1'){
            if(tecla=='o' && B.RY()>5) B.Y(-1); else if (tecla=='l'&& B.RY()<21) B.Y(1);
            }
            A.pintar(); B.pintar();
        }

        if(op_juego=='2'&& !cont) B.mover_cpu(P.PX(),P.PY(),P.DX());
        if(!cont++){
        cambiar_velocidad();
        P.mover(A,B);

        }
        pausa(velocidad);

        if(cont>5)cont=0;



    }

    return 0;
}
