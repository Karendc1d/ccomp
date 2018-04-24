#include <iostream>
#include <string>
using namespace std;

bool esperfecto(int a){
int c=0;
for(int i=1;i<a;i++){
    for(int b=1;b<=a;b++){
    if(i*b==a){
        c=c+i;
    }
    }
}
cout<<"la suma de los divisores es "<<c<<endl;
if(c==a){
    return true;
}
else{
    return false;
}
}




void lista_perfectos(int x){
    for (int k=1;k<=x;k++){
            int c=0;
        for(int i=1;i<k;i++){
            for(int b=1;b<=k;b++){
                if(i*b==k){
                    c=c+i;
                    cout<<c;
                }
            }
        }

        if(c==k){
            cout<<k<<" y sus divisores son: "<<endl;
        }

}

}






bool primo(int a){
 int b;
 for (int i=1;i<=a;i++){
    if(a%i==0){
        b++;
    }
    if(b<=2){
        return true ;
    }
    else{
        return false;
    }
 }
}

void lista_primos(int x){
 int m=1;
 while(m!=x){
 int b=0;
 for (int i=1;i<=m;i++){
    if(m%i==0){
        b++;
    }

 }
  if(b<=2){
    cout<<m<<",";
    }

 m++;
 }
}




int potencia(int a,int b){
if(b==1){
    return a;
}
else{
    return a*(potencia(a,b-1));
}
}


int main()
{
    int n;
    cout<<"Ingrese un límite: ";
    cin>>n;
    cout<<esperfecto(24)<<endl;
    cout<<primo(7);
    lista_primos(n);
    lista_perfectos(1000);
    cout<<potencia(2,3);

return 0;
}










#include <iostream>

using namespace std;


int suma(int a[]){
int c=0;
for(int i=0; a[i]!='\0';i++){
    c+=a[i];
}
return c;
}

void strcpy(char a[],char b[]){
for (int i=0; b[i]!='\0';i++){
    a[i]=b[i];
}
cout<<a;
}




char strcat(char s[],char t[] ){
int b=0;
for (int i=0;s[i]!='\0';i++){
    b++;
}
for(int i=0;t[i]!='\0';i++){
    s[++b]=t[i];
}
;

}

int main()
{
    char cad1[20]={'1','2','3','4','5'};
    char cad2[]={'6','7','8','9'};
    int arr[]={1,2,3,4,5,'\0'};

//    cout<<strcat(cad1,cad2);
      strcpy(cad1,cad2);
//    cout<<suma(arr);
    return 0;
}





//Pregunta 1
//Iterativa

int suma(const int array[],const int largo)
{
    long suma=0;
    for(int i=0;i<largo;suma +=array[i++]);
        return suma;
}

//recursiva
int sumaRecursiva(int array[],int largo)
{
    int suma=0;
    if(largo==1)
        {
        suma+=array[0];
        }
    else
        {
        suma=array[largo-1]+sumaRecursiva(array,largo-1);
    }
}
