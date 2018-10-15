#ifndef ORNITORRINCO_H
#define ORNITORRINCO_H

#include "mamifero.h"
#include "acuatico.h"

class Ornitorrinco: public Mamifero, public Acuatico
{
private:
    string color;
    bool entierra, cazando;
public:
    Ornitorrinco(string _especie, bool _macho, bool _escamas, bool _anfibio, bool _vertebrado, bool carnivoro);
    void setColor(string _color);
    void setEntierra(bool _entierra);
    void setCazando(bool _cazando);
    string getColor(){return color;}
    bool getEntierra(){return entierra;}
    bool getCazando(){return cazando;}
    void mostrar_caracteristicas();
};

#endif // ORNITORRINCO_H
