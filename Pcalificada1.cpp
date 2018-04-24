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





