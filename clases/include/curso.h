#ifndef CURSO_H
#define CURSO_H
#include <string>
using namespace std;


class curso{
    public:
        string name;
        int notas;

    curso(string name_,int notas_);
    void setearPomedio(int notas_);
    void setearName(string name_);
    int obtenerPromedio();
    string obtenerName_();
    string obtenerInformacion();
};

#endif // CURSO_H
