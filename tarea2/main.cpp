#include <iostream>
using namespace std;

void separar(char palabra[],char nuevo[]){
int j=0;
for(int i=0;palabra[i]!='/0';i++,j++){
//    for(int j=0;nuevo[j]!='/0';j++){
        nuevo[j]=palabra[i];
        //Vocal y consonante
        if((palabra[i]=='a'||palabra[i]=='e'||palabra[i]=='o')&&(palabra[i+1]!='a'||palabra[i+1]!='e'||palabra[i+1]!='i'||palabra[i+1]!='o'||palabra[i+1]!='u')){//si no hay diptongo entonces coloca el -
                if(palabra[i+2]!='a'||palabra[i+2]!='e'||palabra[i+2]!='i'||palabra[i+2]!='o'||palabra[i+2]!='u'){
                    nuevo[j++]=palabra[i++];
                    nuevo[j+2]='-';
                    j++;
                    i++;
                }
                else{
                    nuevo[j++]='-';
                    j++;
                }
        }
        //Vocalfuerte  y
        if((palabra[i]=='a'||palabra[i]=='e'||palabra[i]=='o')&&(palabra[i++]!='i'||palabra[i++]!='u')){//junta los diptongos
               nuevo[j++]='-';
               j++;
        }
//    }

}
cout<<nuevo;
}
int main(){
    char palabra_[30];
    char nuevo_[50];
    cout << "Ingrese una palabra: "<< endl;
    cin>>palabra_;
    separar(palabra_,nuevo_);

return 0;
}



/*
#include <iostream>
using namespace std;

void separar(char* palabra) {
  for(int i=0;palabra[i]!='\0';i++) {
//for(int j=0;nuevo[j]!='\0';j++){
    cout<<palabra[i];
//Vocal y consonante
    if((palabra[i]=='a' || palabra[i]=='e' || palabra[i]=='o') && (palabra[i+1]!='a' || palabra[i+1]!='e' || palabra[i+1]!='i' || palabra[i+1]!='o' || palabra[i+1]!='u')) {
      //si no hay diptongo entonces coloca el -
      if(palabra[i+2]!='a'||palabra[i+2]!='e'||palabra[i+2]!='i'||palabra[i+2]!='o'||palabra[i+2]!='u') {
        cout<<palabra[i+1];
        cout<<'-';
        i++;
      }
      else{
        cout<<'-';
      }
    }
//Vocalfuerte  y
    if((palabra[i]=='a'||palabra[i]=='e'||palabra[i]=='o')&&(palabra[i++]!='i'||palabra[i++]!='u')){//junta los diptongos
      cout<<palabra[i];
      cout<<'-';
    }
//    }
  }
}


/void separar(char a) {
  for(char* p=a; *p; p++) {
    if((*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')){
      cout<<*p<<'-';
    }
    else
      cout<<*p;
  }
}*/

int main() {
  char palabra [30];
  char nuevo [50];
  cout << "Ingrese una palabra: ";
  cin >> palabra;
  separar(palabra);

return 0;
}
*/





//
//void separar(char a[],char b[]){
//
//    for (int i=0;a[i]!='/0';i++){
//       for(int j=0;b[j]!='/0';j++){
//                b[j]=a[i];
//            if((a[i]=='a'||a[i]=='e'||a[i]=='o')&&(a[i++]=='a'||a[i++]=='e'||a[i++]=='o')){
//                   b[j++]='-';
//                   j++;
//            }
//
//       }
//    }
//    cout<<b;
//
//}
//
//int main(){
//    char palabra[15]="aereo";
//    char nuevo[20];
//    separar(palabra,nuevo);
//}
//
