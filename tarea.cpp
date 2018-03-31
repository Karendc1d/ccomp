#include <iostream>
#include<string>
using namespace std;

int main()
{
    int edad;
    cout<<"Ingrese su edad en numeros, por favor"<<endl;
    cin>>edad;
    if(edad>0){
        if(edad<=11){
            cout<<"Usted es un niño(a)"<<endl;
        }
        if(edad>11&&edad<=15){
            cout<<"Usted es un puberto"<<endl;
        }
        if(edad>15&&edad<=20){
            cout<<"Usted es adolescente"<<endl;
        }
        if(edad>20&&edad<=29){
            cout<<"Usted es un adulto joven"<<endl;
        }
        if(edad>29&&edad<=60){
            cout<<"Usted es un adulto"<<endl;
        }
        if(edad>60){
            cout<<"Usted es un adulto mayor"<<endl;
        }
    }
    else{
        cout<<"Por favor ingrese una edad valida"<<endl;
    }
    return 0;
}
