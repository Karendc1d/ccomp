#include <iostream>
#include<string>
using namespace std;

//Ejercicio1
    void edad(int edad){
    if(edad>0){
        if(edad<=11){
            cout<<"Usted es un ni�o(a) y menor de edad"<<endl;
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

    }



//Ejercicio2

    int limite (int limite){
    int i=0;
    cout<<i;
    while(i<limite){
        i++;
        cout<<","<<i;
    }
    }




//Ejercicio3
    int mayor_menor_promedio(float a,float b,float c){
    float promedio,mayor,menor;
    mayor=a;
    if(b>a){
        mayor=b;
    }
    if(c>a){
        mayor=c;
    }
    menor=b;
    if(a<b){
        menor=a;
    }
    if(c<b){
        menor=c;
    }
    promedio=(a+b+c)/3;
    cout<<"El mayor numero es: "<<mayor<<endl;
    cout<<"El menor numero es: "<<menor<<endl;
    cout<<"El promedio de los numeros es: "<<promedio<<endl;
}



//Ejercicio 4

void multiplo(int a, int b){

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

}


//Ejercicio5


void primos(int b){
    int a=0;
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
}}

//Ejercicio6

    void primo(int a){
    int i=2;
    while(i<=a){
        if(i==2||i==3||i==5||i==7){
            cout<<i<<",";
        }
        if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0){
            cout<<i<<",";
        }
        i=i+1;
        }
}



  //Ejercicio7

    void cinco_digitos(int a){
    int d,b=10000,res;
    while(b>=0){

        d=a/b;
        cout<<d<<"  "<<endl;
        a=a%b;
        b=b/10;

    }}



    //Ejercicio8
        void palindrome(int c){
        int a,d,b=10000,m=0;
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
        }
   //Ejercicio9

    void bisiesto(int a){

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
    }



    //Ejericcio10

  int fibonacci(int x){
    int a,b,c;
    a=0;
    b=1;
    cout<<a<<","<<b<<",";
    for(int i=0;i<=x;i++){
    c=a+b;
    a=b;
    b=c;
    cout<<c<<","<<endl;
    }}



//Ejericcio Extra

    int factorial (int n){
    int b,c;
    c=n;
    for(int i=1;i<c;i++){
        b=n*i;
        n=n*i;
    }
    cout<<"El factorial es "<<n<<endl;
}


int main(){
    edad(75);
    limite(10);
    mayor_menor_promedio(7.0,8.0,4.0);
    multiplo(8,2);
    primos(7);
    primo(5);
    cinco_digitos(15896);
    palindrome(12521);
    bisiesto(2000);
    fibonacci(5);
    factorial(5);

    return 0;
    }
