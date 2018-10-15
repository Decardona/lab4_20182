#ifndef MANATI_H
#define MANATI_H

#include "mamifero.h"
#include "acuatico.h"

class Manati : public Mamifero, public Acuatico
{
private:
    string color, region;
    bool aguasalada;

public:
    Manati(string _especie, bool _esmacho, bool _escamas, bool _anfibio, bool _vertebrado, bool carnivoro, bool _aguasalada);
    void setColor(string _color){color = _color;}
    void setRegion(string _region){region = _region;}
    void ver_caracteristicas();

};

#endif // MANATI_H
