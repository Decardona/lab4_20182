#ifndef ALADO_H
#define ALADO_H

#include <iostream>
using namespace std;

class Alado
{
private:
    unsigned int nalas;
    bool volando, volador, conpico;

public:
    Alado(){nalas = 0; volando=false; volador=false; conpico=false;}
    Alado(bool _volador, bool _conpico, unsigned int _nalas);
    void set_nalas(unsigned int _nalas);
    void set_conpico(bool snpico);
    void set_volando(bool _vuelo);
    bool getVolador();
    bool getConpico();
    unsigned int getNalas();
    bool getVolando();
    void volar();
    void aterrizar();
    void cazar();
    ~Alado(){}
};

#endif // ALADO_H
