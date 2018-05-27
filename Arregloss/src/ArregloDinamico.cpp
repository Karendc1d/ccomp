#include "ArregloDinamico.h"
ArregloDinamico::ArregloDinamico(int tam_)
{
    tam=tam_;
    data=new int[tam];
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
void ArregloDinamico::vaciar(){
    tam=0;
    realloc(data,0);
    }

void ArregloDinamico::eliminarElemento(int pos){
    tam--;
    int aux=0;
    int *lista = new int[tam];
    for(int i=0;i<tam+1;i++){
        if(i!=pos-1){
            lista[aux]=data[i];
            aux++;
        }
    }
    delete[] data;
    data=new int[tam];
    for(int i=0; i<tam; i++){
        data[i]=lista[i];
    }
    delete[] lista;
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

int ArregloDinamico::mayorprimo(){
    int may=*data;
    int a=0;
    for(int i=0;i<tam;i++){
        for(int j=2;j<data[i]-1;j++){
            if(data[i]%j==0)a++;
        }
        if(a<=2)if(data[i]>may)may=data[i];
        }
    return may;

}

int ArregloDinamico::menorprimo(){
    int men=*data;
    int a=0;
    for(int i=0;i<tam;i++){
        for(int j=2;j<data[i]-1;j++){
           if(data[i]%j==0)a++;
        }
        if(a<=2)if(a<men)men=data[i];
        }
        return men;
    }

int ArregloDinamico::sumar(){
    int suma=0;
    for(int i=0;i<tam;i++){
        suma+=data[i];
    }
    return suma;
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
