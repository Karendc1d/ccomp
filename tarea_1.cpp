#include <iostream>
#include<string>
using namespace std;

int main(){
    /*
    //Ejercicio1
    int edad;
    cout<<"Ingrese su edad en numeros, por favor"<<endl;
    cin>>edad;
    if(edad>0){
        if(edad<=11){
            cout<<"Usted es un niño(a) y menor de edad"<<endl;
        }
        if(edad>11&&edad<=15){
            cout<<"Usted es un puberto y menor de edad"<<endl;
        }
        if(edad>15&&edad<=20){
            cout<<"Usted es adolescente"<<endl;
        }
        if(edad>20&&edad<=29){
            cout<<"Usted es un adulto joven y mayor de edad"<<endl;
        }
        if(edad>29&&edad<=60){
            cout<<"Usted es un adulto y mayor de edad"<<endl;
        }
        if(edad>60){
            cout<<"Usted es un adulto mayor y mayor de edad"<<endl;
        }
    }
    else{
        cout<<"Por favor ingrese una edad valida"<<endl;
    }
*/
    
    
    
    //Ejercicio2
/*

    int limite,i=0;
    cout<<"Escriba un numero limite": "<<endl;
    cin>>limite;
    cout<<i;
    while(i<limite){
        i++;
        cout<<","<<i;
    }
    */


    
    //Ejercicio3
    /*
    float a,b,c,mayor;
    float promedio;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>b;
    cout<<"Ingrese el tecer numero: "<<endl;
    cin>>c;
    mayor=a;
    if(b>a){
        mayor=b;
    }
    if(c>a){
        mayor=c;
    }
    cout<<"El mayor numero es: "<<mayor<<endl;
    promedio=(a+b+c)/3;
    cout<<"El promedio de los numeros es: "<<promedio<<endl;
    */
    
    
    
    //Ejercicio 4
    /*
    int a,b;
    cout<<"Ingrese el primero numero: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>b;

    if(a%2==0){
        cout<<a<<" Es multiplo de 2"<<endl;
    }
    else{
        cout<<a<<" No es multiplo de 2"<<endl;
    }
    if(b%2==0){
        cout<<b<<" Es multiplo de 2"<<endl;
    }
    else{
        cout<<b<<" No es multiplo de 2"<<endl;
    }
    if(a%b==0){
        cout<<a<<" Es multiplo de "<<b<<endl;
    }
    else{
        cout<<a<<" no es multiplo de "<<b<<endl;
    }
    if(a*a==b){
        cout<<a<<" al cuadrado tiene como resultado a "<<b<<endl;
    }
    else{
        cout<<a<<" al cuadrado no tiene como resultado a "<<b<<endl;
    }

*/
   
    
    
    
    

//Ejercicio5
    int a,b;
    cout<<"Ingrese un numero: "<<endl;
     cin>>b;
     a=0;
     for(int i=1;i<=b;i++){


         if(b%i==0){
             a++;
            }
         1if(a!=2){
            cout<<"No es Primo";
            }
         else{
            cout<<"Si es Primo";
         }
}
return 0;
}

    


    int a=0,b;
     cout<<"Ingrese un numero: "<<endl;
     cin>>b;
     int i=1;

     while(i<=b){

         if(b%i==0){
             a++;
            }
         if(a!=2){
            cout<<"No es Primo"<<endl;
            }
         else{
            cout<<"Si es Primo"<<endl;
         }
         i++;
}
return 0;
}

    
    
//Ejercicio6
/*
    int a,i=2;
    cout<<"Ingrese el limite: "<<endl;
    cin>>a;
    while(i<=a){
        if(i==2||i==3||i==5||i==7){
            cout<<i<<",";
        }
        if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0){
            cout<<i<<",";
        }
        i=i+1;
        }
*/
    
    
    

  //Ejercicio7
 /*

    int a,d,b=10000,res;
    cout<<"Ingrese un numero de 5 digitos: "<<endl;
    cin>>a;
    while(b>=0){

        d=a/b;
        cout<<d<<"  ";
        a=a%b;
        b=b/10;

    }
    */

    
    
    
    //Ejercicio8

    /*
        int c,a,d,b=10000,m=0;
        cout<<"Ingrese un numero de 5 digitos: "<<endl;
        cin>>c;
        a=c;
         while(a>=1){
            d=a%10;
            m=m+(d*b);
            b=b/10;
            a=a/10;}
        if(c==m){
            cout<<c<<" al revez es "<<m<<" por ende es palindrome"<<endl;
        }
        else{
            cout<<c<<" al revez es "<<m<<" por ende NO es palindorme"<<endl;
        }
*/
    
    
    
    //Ejercicio9
    
 /*

    int a;
    cout<<"Ingrese un anio: "<<endl;
    cin>>a;

    if(a%100==0){
        if(a%400==0){
            cout<<"El anio es bisiesto"<<endl;
        }
        else{
            cout<<"El anio no es bisiesto"<<endl;
        }
    }
    else if (a%4==0){
        cout<<"Es bisiesto"<<endl;
    }
    else{
        cout<<"El anio no es bisiesto"<<endl;
    }

*/

    
    

    //Ejericcio10
/*
   
    int x,a,b,c;
    cout<<"Ingrese un numero: "<<endl;
    cin>>x;
    a=0;
    b=1;
    cout<<a<<","<<b<<",";
    for(int i=0;i<=x;i++){
    c=a+b;
    a=b;
    b=c;
    cout<<c<<",";
    }

*/
    
    
    //Ejericcio Extra

/*
    int n,b,c;
    cout<<"Ingrese un numero: "<<endl;
    cin>>n;
    c=n;
    for(int i=1;i<c;i++){
        b=n*i;
        n=n*i;
    }
    cout<<"El factorial es "<<n;


     return 0;
}
*/
