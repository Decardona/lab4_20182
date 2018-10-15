#include "mamifero.h"

Mamifero::Mamifero(string _especie, bool _macho)
{
    this->especie = _especie;
    this->macho = _macho;
    this->nhijos = 0;
}

void Mamifero::reproducir(Mamifero &pareja)
{
    if (this->macho){
        if (pareja.macho){
            cout<<"No se puede reproducir mamiferos del mismo tipo"<<endl;
        }else{
            this->nhijos++;
            pareja.nhijos++;
            cout<<"Se ha reproducido correctamente el mamifero"<<endl;
        }
    }else{
        if (pareja.macho){
            this->nhijos++;
            pareja.nhijos++;
            cout<<"Se ha reproducido correctamente el mamifero"<<endl;
        }else{
            cout<<"No se puede reproducir mamiferos del mismo genero"<<endl;
        }
    }
}

string Mamifero::getEspecie(){return especie;}

bool Mamifero::getMacho(){return macho;}

unsigned int Mamifero::getHijos(){return nhijos;}

void Mamifero::moverse()
{
    if (this->enmovimiento)
        cout<<"El mamifero se eta moviendo"<<endl;
    else{
        this->enmovimiento = true;
        cout<<"Iniciando el movimiento"<<endl;
    }
}
