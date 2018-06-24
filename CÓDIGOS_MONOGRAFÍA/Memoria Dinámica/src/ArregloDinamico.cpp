#include "ArregloDinamico.h"
ArregloDinamico::ArregloDinamico(int tam_)
{
    tam=tam_;
    data=new int[tam]; //Reservando memoria para para cantidad de datos que nos indique "tam"
}

void ArregloDinamico::Insertar(int x){
    tam++;
    realloc(data,tam);
    *(data+tam-1)=x;
}

void ArregloDinamico:: mostrar(){
    for(int i=0;i<tam;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}

int ArregloDinamico::maximo(){
    int x=*data;
    for(int i=1;i<tam;i++){
        if(data[i]>x)x=data[i];
    }
    return x;
}

int ArregloDinamico::minimo(){
    int y=*data;
    for(int i=0;i<tam;i++){
        if(data[i]<y)y=data[i];
    }
    return y;
}

int ArregloDinamico::promedio(){
    int prom=*data;
    for(int i=1;i<tam;i++){
        prom+=data[i];
    }
    prom=prom/tam;
    return prom;
}


void ArregloDinamico::ordenar(){
    int temp;
    for (int i=1; i<tam; i++){
        for(int j=0 ; j<tam - 1; j++)
            if (data[j]>data[j+1]){
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
                }
    }
}

void ArregloDinamico::invertir(){
    int aux;
    for(int i=0;i<tam/2;i++){
        aux=data[i];
        data[i]=data[tam-1-i];
        data[tam-1-i]=aux;
    }
}
