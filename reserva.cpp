#include "reserva.h"

Reserva::Reserva()
{

}

void Reserva::crear_reserva(string _nombre, int _documento, int _maletines)
{
    this->nombre = _nombre;
    this->documento = _documento;
    this->maletines = _maletines;
}

void Reserva::reservar(bool _reserva)
{
    this->reservado = _reserva;
}

bool Reserva::is_reservado()
{
    return this->reservado;
}

void Reserva::mostrar_datos()
{
    if (this->reservado)
        cout<<"Este camarote se encuentra reservado "<<endl;
    else
        cout<<"Este camarote no se encuentra reservado "<<endl;
    cout<<endl<<"Nombre del cliente: "<<this->nombre<<endl;
    cout<<"Documento de identidad: "<<this->documento<<endl;
    cout<<"Maletines: "<<this->maletines<<endl;
    cout<<"------------------------------------------------------"<<endl;
}
