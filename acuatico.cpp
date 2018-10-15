#include "acuatico.h"

Acuatico::Acuatico(bool _escamas, bool _anfibio, bool _vertebrado, bool _carnivoro)
{
    escamas = _escamas;
    anfibio = _anfibio;
    vertebrado = _vertebrado;
    carnivoro = _carnivoro;
}

bool Acuatico::getEscamas(){return escamas;}
bool Acuatico::getAnfibio(){return anfibio;}
bool Acuatico::getCarnivoro(){return vertebrado;}

void Acuatico::ver_caracteristicas()
{
    this->escamas ? cout<<" con Escamas"<<endl : cout<<" Sin escamas"<<endl;
    this->anfibio? cout<<" Es anfibio"<<endl : cout<<"No es anfibio"<<endl;
    this->vertebrado ? cout<<"Animal vertebrado"<<endl : cout<<"Animal invertebrado"<<endl;
    this->carnivoro ? cout<<"Animal carnivoro "<<endl : cout<<"Animal no carnivoro"<<endl;
}
bool Acuatico::getVertebrado(){return vertebrado;}
