#include <iostream>

using namespace std;


int suma(int *a,const int len){
    int *ptr=a;
int c=0;
for(;ptr<=(a+len-1);ptr++){
    c+=*ptr;
    }
return c;
}

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



//void strcat(char s[],char t[] ){
//    int b=0;
//    for (int i=0;s[i]!='\0';i++){
//        b++;
//    }
//    for(int i=0;t[i]!='\0';i++){
//        s[b++]=t[i];
//    }
//   cout << s << endl;
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

void invertir(int *lista ,int len){
    int a;
    int *b=(lista+len-1);
    for (;b>=lista;lista++,b--){
         a=*lista;
        *lista=*b;
        *b=a;
    }
}

int main()
{
//    char cad1[20]={'1','2','3','4','5','\0'};
//    char cad2[]={'6','7','8','9','\0'};
    int arr[]={1,2,3,4,5,6};


//     strcat(cad1,cad2);
//     cout<<cad1;
//    strcpy(cad1,cad2);

//    invertir(arr,6);
//    for(int i=0;i<6;i++){
//        cout<<arr[i];}
     //cout<<arr;
     cout<<suma(arr,6);
    //cout<<sumaRecursiva(arr,6);
    //cout<<tamanio(cad1);

    return 0;
}
