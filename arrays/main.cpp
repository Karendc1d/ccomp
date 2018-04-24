#include <iostream>

using namespace std;

//
//int suma(int a[]){
//int c=0;
//for(int i=0; a[i]!='\0';i++){
//    c+=a[i];
//}
//return c;
//}
//
//int sumaRecursiva(int array[],int largo)
//{
//    int suma=0;
//    if(largo==1)
//        {
//        suma+=array[0];
//        }
//    else
//        {
//        suma=array[largo-1]+sumaRecursiva(array,largo-1);
//    }
//}
//
//
//
//void strcpy(char a[],char b[]){
//for (int i=0; b[i]!='\0';i++){
//    a[i]=b[i];
// cout<<a;
//}
//
//
//
//
//char strcat(char s[],char t[] ){
//int b=0;
//for (int i=0;s[i]!='\0';i++){
//    b++;
//}
//for(int i=0;t[i]!='\0';i++){
//    s[++b]=t[i];
//}
//;
//
//}
//
//int tamanio(char a[]){
//int c=1;
//for(int i=1;a[i]!='\0';i++){
//    c++;
//}
//return c;
//
//}

void invertir(int tam,int a[]){
int c=tam-1;
int b=a[0];
for (int i=0;a[i]!=tam/2;i++){

    a[i]=a[c];
    a[c]=a[b];
    c--;
    b++;

}
cout<<a;
}


int main()
{
    char cad1[20]={'1','2','3','4','5'};
    char cad2[]={'6','7','8','9'};
    int arr[]={1,2,3,4,5,6,'\0'};


//    cout<<strcat(cad1,cad2);
//    strcpy(cad1,cad2);
     invertir(6,arr);
    // cout<<suma(arr);
    //cout<<sumaRecursiva(arr,6);
    //cout<<tamanio(cad1);

    return 0;
}


