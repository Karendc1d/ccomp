#include <iostream>
#include <string>
using namespace std;

bool esprimo(int *ptr){
    int cont=0;
    for(int i=1;i<=*ptr;i++){
            if(*ptr%i==0){
                cont++;
            }
        }
if(cont==2){
                return true;
            }
else{
                return false;
    }
}

void print(int *ptr, int tam){
    for(int i=0;i<=tam;i++){
        cout<<"["<<i<<"]= "<<*ptr++<<endl;
    }
}
void par_impar(int *ptr, int tam){
    for(int i=0;i<tam;i++,*ptr++){
        if(*ptr%2==0){
            cout<<"["<<i<<"]= par"<<endl;
        }
        else{
            cout<<"["<<i<<"]= impar"<<endl;
    }}

}
int numCalif, *calif;

void pedirNotas(){
    cout<<"Ingrese el numero de notas: "<<endl;
    cin>>numCalif;
    calif=new int[numCalif];
    for(int i=0; i<numCalif;i++){
        cout<<"Ingrese una calificación: "<<endl;
        cin>>calif[i];
    }
}

void mostrarNotas(){
    for(int i=0;i<numCalif;i++)
    cout<<"["<<i<<"]="<<calif[i]<<endl;
}

void intercambio(int *ptr1,int *ptr2){
    int aux;
    aux=*ptr1;
    *ptr1=*ptr2;
    *ptr2=aux;
}

int main(){
int a=10,*ptr,*ptr2,b=14,c=13;
ptr=&a;
int arra[4]={2,3,4,5};
ptr2=arra;

//cout<<"es primo o no:  "<<esprimo(ptr)<<endl;
//print(ptr2,4);
cout<<"antes del intercambio: "<<endl;
cout<<"b: "<<b<<endl;
cout<<"c: "<<c<<endl;

intercambio(&b,&c);

cout<<"Despues del intercambio:"<<endl;
cout<<"b: "<<b<<endl;
cout<<"c: "<<c<<endl;

//par_impar(ptr2,4);
//pedirNotas();
//mostrarNotas();
//delete[]calif;

return  0;

}


