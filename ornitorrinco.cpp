#include "ornitorrinco.h"


Ornitorrinco::Ornitorrinco(string _especie, bool _macho, bool _escamas, bool _anfibio, bool _vertebrado, bool carnivoro): Mamifero (_especie, _macho), Acuatico (_escamas, _anfibio, _vertebrado, carnivoro)
{

}

void Ornitorrinco::setColor(string _color){color = _color;}
void Ornitorrinco::setEntierra(bool _entierra){entierra = _entierra;}
void Ornitorrinco::setCazando(bool _cazando){cazando = _cazando;}

void Ornitorrinco::mostrar_caracteristicas()
{
    cout<<"Mamifero de especie "<<getEspecie()<<endl;
    cout<<"Posee "<<getHijos()<<" hijos"<<endl;
    getMacho()? cout<<"Es macho"<<endl : cout<<"Es Hembra"<<endl;
    getEscamas()? cout<<"Acuatico con escamas"<<endl: cout<<"Acuatico sin escamas"<<endl;
    getAnfibio()? cout<<"Animal Semiacuatico Anfibio puede vivir sin estar en el agua"<<endl: cout<<"Animal meramente acuatico obtiene oxigeno solo del agua "<<endl;
    getVertebrado()? cout<<"Posee columna vertebral "<<endl: cout<<" Animal invertebrado "<<endl;
    getCarnivoro()? cout<<"Este animal es carnivoro "<<endl : cout<<" Este Animal no es carnivoro "<<endl;
    cout<<"El color de esta especie es "<<color<<endl;
}

