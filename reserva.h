#ifndef RESERVA_H
#define RESERVA_H

#include <iostream>
using namespace std;

class Reserva
{
private:
    string nombre;
    int documento, maletines;
    bool reservado = false;
public:
    Reserva();
    void crear_reserva(string _nombre, int _documento, int _maletines);
    void reservar(bool _reserva);
    bool is_reservado();
    void mostrar_datos();
};

#endif // RESERVA_H
