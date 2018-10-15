#include "manati.h"


Manati::Manati(string _especie, bool _esmacho, bool _escamas, bool _anfibio, bool _vertebrado, bool carnivoro, bool _aguasalada): Mamifero (_especie, _esmacho), Acuatico (_escamas, _anfibio, _vertebrado, carnivoro)
{
    this->aguasalada = _aguasalada;
}

void Manati::ver_caracteristicas()
{
    Acuatico::ver_caracteristicas();
    getMacho()? cout<<"Es macho"<<endl : cout<<"Es hembra"<<endl;
    cout<<"Especie "<<getEspecie()<<endl;
    cout<<"Posee "<<getHijos()<<" hijos"<<endl;
    this->aguasalada ? cout<<"Vive en agua salada"<<endl : cout<<"Vive en agua dulce"<<endl;
    cout<<"vive en la region "<<region<<endl;
}
