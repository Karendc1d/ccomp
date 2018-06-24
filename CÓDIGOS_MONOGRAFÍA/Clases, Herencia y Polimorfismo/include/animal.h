#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
using namespace std;

class animal
{
   private:
       int edad;
   public:
    animal(int);
    virtual void comer();
};

class humano:public animal{
private:
    string name;
public:
    humano(int, string);
    void comer();
};

class perro:public animal{
private:
    string name, raza;
public:
    perro(int, string, string);
    void comer();
};

#endif // ANIMAL_H
