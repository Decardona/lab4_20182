#ifndef ACUATICO_H
#define ACUATICO_H

#include <iostream>
using namespace  std;

class Acuatico
{
private:
    bool escamas, anfibio, vertebrado, carnivoro;
public:
    Acuatico(){escamas=false; anfibio = false; vertebrado = false; carnivoro = false;}
    Acuatico(bool _escamas, bool _anfibio, bool _vertebrado, bool _carnivoro);
    bool getEscamas();
    bool getAnfibio();
    bool getVertebrado();
    bool getCarnivoro();
    void ver_caracteristicas();
};

#endif // ACUATICO_H
