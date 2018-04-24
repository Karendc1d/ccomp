#include <iostream>

using namespace std;


int suma(int a[]){
int c=0;
for(int i=0; a[i]!='\0';i++){
    c+=a[i];
}
return c;
}

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


    cout<<strcat(cad1,cad2);
    strcpy(cad1,cad2);
    cout<<suma(arr);
    cout<<sumaRecursiva(arr;5);
    return 0;
}


