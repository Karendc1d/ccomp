
#include <iostream>
#include "curso.h"
using namespace std;

int main()
{
    curso c(18,"Ccomp");

    curso cursos[2]={curso(15,"Discretas",curso(17,"Matematica"))}
    cout<<c.obtnerInformacion()<<endl;
    cout<<cursos[0].nombre<<endl;
    cout<<cursos[1].nombre<<endl;







//    curso c[5];
//    c[0].name="Matematica";
//    c[0].promedio=1;
//    c[1].name="Literatura";
//    c[1].promedio=18;
//    c[2].name="ccomp";
//    c[2].promedio=12;
//    c[3].name="antropologia";
//    c[3].promedio=19;
//    c[4].name="discretas";
//    c[4].promedio=9;
//
//
//    int tam=5,temp=5,i,j;
//    for (i=1; i<tam; i++){
//          for (j=0 ; j<tam -1; j++){
//               if (c[j].promedio>c[j+1].promedio){
//                    temp = c[j].promedio;
//                    c[j].promedio = c[j+1].promedio;
//                    c[j+1].promedio = temp;}
//    }
//    }
//
//    cout<<c[0].name<<endl;
//    cout<<c[0].promedio<<endl;
//    cout<<c[1].name<<endl;
//    cout<<c[1].promedio<<endl;
//    cout<<c[2].name<<endl;
//    cout<<c[2].promedio<<endl;
//    cout<<c[3].name<<endl;
//    cout<<c[3].promedio<<endl;
//    cout<<c[4].name<<endl;
//    cout<<c[4].promedio<<endl;

    return 0;
}
