#include "murcielago.h"

Murcielago::Murcielago(string especie, bool esmacho, unsigned int nalas, string _color): Mamifero(especie, esmacho), Alado(true, false, nalas)
{
    color = _color;
}

void Murcielago::setTamanio(unsigned int _tamanio)
{
    this->tamanio = _tamanio;
}

void Murcielago::setEdad(unsigned _edad)
{
    this->edad = _edad;
}

void Murcielago::volar()
{
    if (getVolando())
        cout<<"Ya el murcielago se encontraba volando"<<endl;
    else{
        this->frecuenciaeco = 100;
        set_volando(true);
        cout<<"Se ha iniciado el vuelo"<<endl;
    }
}

void Murcielago::ver_caracteristicas()
{
    cout<<"Mamifero de especie "<<getEspecie()<<endl;
    cout<<"Posee "<<getHijos()<<" hijos"<<endl;
    getMacho()? cout<<"Es macho"<<endl : cout<<"Es Hembra"<<endl;
    getVolador()? cout<<"Alado volador"<<endl: cout<<"Alado sin posibilidad de volar"<<endl;
    getConpico()? cout<<"Alado con pico"<<endl: cout<<"Alado sin pico"<<endl;
    cout<<"Posee "<<getNalas()<<" alas"<<endl;
    cout<<"El tamaño de este murcielago es de "<<tamanio<<" mm"<<endl;
    cout<<"La edad es de "<<edad<< " años aproximadamente"<<endl;
    cout<<"El color de esta especie es "<<color<<endl;
}

void Murcielago::aterrizar()
{
    if (Alado::getVolando())
        cout<<"Ya el muercielago se encontraba en tierra"<<endl;
    else{
        Alado::set_volando(false);
        this->frecuenciaeco = 0;
        cout<<"El murcielago ha entrado en reposo"<<endl;
    }
}
