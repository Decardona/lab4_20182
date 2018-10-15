#include "alado.h"

Alado::Alado(bool _volador, bool _conpico, unsigned int _nalas)
{
    this->volador = _volador;
    this->conpico = _conpico;
    this->nalas = _nalas;
}

void Alado::set_nalas(unsigned int _nalas)
{
    this->nalas = _nalas;
}

void Alado::set_conpico(bool snpico)
{
    this->conpico = snpico;
}

void Alado::set_volando(bool _vuelo)
{
    this->volando = _vuelo;
}

bool Alado::getVolando()
{
    return this->volando;
}

bool Alado::getVolador(){return volador;}
bool Alado::getConpico(){return conpico;}
unsigned int Alado::getNalas(){return nalas;}

void Alado::volar()
{
    if (this->volador){
        if (!this->volando){
            this->volando = true;
            cout<<"Volando..."<<endl;
        }else{
            cout<<"Ya nos encontrabamos volando"<<endl;
        }
    }else{
        cout<<"Este alado no puede volar"<<endl;
    }
}

void Alado::aterrizar()
{
    if (this->volando)
        this->volando = false;
    else
        cout<<"Ya me encuentro en tierra"<<endl;
}

void Alado::cazar()
{
    if (!volando)
        volar();
    cout<<"Estamos cazando"<<endl;
}
