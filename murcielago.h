#ifndef MURCIELAGO_H
#define MURCIELAGO_H

#include "alado.h"
#include "mamifero.h"

class Murcielago: public Mamifero, public Alado
{
private:
    string color;
    unsigned int tamanio, edad, frecuenciaeco;

public:
    Murcielago(string especie, bool esmacho, unsigned int nalas, string _color);
    void setTamanio(unsigned int _tamanio);
    void setEdad(unsigned _edad);
    void volar();
    void ver_caracteristicas();
    void aterrizar();
};

#endif // MURCIELAGO_H
