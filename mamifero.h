#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <iostream>
using namespace std;

class Mamifero
{
private:
    unsigned int nhijos=0;
    string especie;
    bool macho, enmovimiento;
public:
    Mamifero(string _especie, bool _macho);
    void reproducir(Mamifero &pareja);
    void moverse();
    string getEspecie();
    bool getMacho();
    unsigned int getHijos();
    ~Mamifero(){}
};

#endif // MAMIFERO_H
