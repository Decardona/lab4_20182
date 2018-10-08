/* Practica de Laboratorio 4
*  Informatica 2 - 2018_2
*  Prof: Juan Camilo Correa Chica
*  Fecha: Octubre 1/2018 - Octubre 8/2018
*  Plazo máximo para enviar enlace para clonar el repositorio: 
*  Estudiante1: Diego Esteban Cardona Bedoya
*  Estudiante2: Victor Parra Julio
*  Fecha del ultimo Commit en GitHub: 08/10/2018 18:15

* 1.Implementar un sistema de reserva de tiquetes de un crucero, que tiene 3 alternativas de ubicación en los camarotes del buque: Clase Económica, 
*   clase Turística y clase Premium. Cada clase tiene el mismo número de camarotes disponibles: 50.
*	Implemente una clase llamada Reserva que tiene los atributos: un string para el nombre de quien reserva, un int para el número de documento de identidad, 
*   un char para la cantidad de equipaje (cuántos maletines) y un bool para marcar el camarote en cuestión como reservado.
*	Usando la clase Reserva usted debe implementar un sistema de reserva de tiquetes para el crucero. Por las restricciones de memoria del sistema usted tiene
*   como requerimiento el uso de apuntadores y de los operadores NEW y DELETE para el manejo dinámico de memoria del sistema.
*	El programa iniciará dando la bienvenida y ofrecerá la opción de reservar un camarote en el crucero y la opción de revisar la lista de reservas.
*	Si el usuario elige reservar un camarote se le preguntara en que clase desea viajar y el camarote que desea ocupar (de los 50 disponibles). Cuando el 
*   usuario escoja el camarote se debe revisar que no esté reservado previamente. Si el camarote está disponible se le preguntara el nombre, el número de
*   identificación y el equipaje total que va llevar. Recuerde que debe crear un objeto de la clase Reserva y almacenarlo en la ubicación correspondiente a
*   la clase viajera (Económica, Turística o Premium)  y al número de camarote.
*	Si el usuario elige ver la lista de Reserva entonces se debe pedir que introduzca un password (ya que está opción es solo para usuarios con permisos de
*   administrador, por seguridad), si el password es correcto entonces se debe mostrar en pantalla los camarotes reservados por cada clase viajera y el 
*   nombre de quien lo ha reservado y la cantidad de camarotes aún disponibles.
*
*/

#include "reserva.h"

int main()
{
    int opcion = 0, seccion=1, camarote=0, documento=0, maletines=0;
    string nombre, admin="info", clave;


    Reserva **ptrr = new Reserva*[3];

    for(int i=0; i<3; i++){
        *(ptrr+i) = new Reserva[50];
    }
    do{
        cout<<"Bienvenido al sistema de reservas de crucero. Seleccione una de las siguiente opciones"<<endl;
        cout<<"1) Reservar un camarote  |  2) Revisar todas las reservas  |   0) Salir "<<endl<<"Opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1:
            {
                cout<<endl<<"Escoja la clase en la que desea viajar: "<<endl;
                cout<<"1) Economica   |   2) Turistica    |    3) Premium  |   0) Regresar al menu anterior "<<endl<<"Opcion: ";
                cin>>seccion;
                cout<<endl<<"Escriba un numero de camarote entre 1 y 50: ";
                cin>>camarote;
                if(ptrr[seccion-1][camarote-1].is_reservado()){
                    cout<<"Este camarote ya se encuentra reservado, por favor intente nuevamente con otro numero de camarote"<<endl<<endl;
                }else{
                    cout<<"Este camarote esta disponible "<<endl;
                    cout<<"Escriba su nombre: ";
                    cin>>nombre;
                    cout<<"Documento de identidad: ";
                    cin>>documento;
                    cout<<"Numero de maletines que incluira: ";
                    cin>>maletines;
                    ptrr[seccion-1][camarote-1].crear_reserva(nombre,documento,maletines);
                    ptrr[seccion-1][camarote-1].reservar(true);
                    cout<<"Se ha reservado correctamente tu camarote"<<endl<<endl;
                }
                break;
            }
            case 2:
            {
                cout<<"Especifique su clave de administrador: ";
                cin>>clave;
                unsigned int reservados = 0;
                if(admin.compare(clave)==0){
                    cout<<"Bienvenido Administrador "<<endl<<"Estamos revisando todos los camarotes por favor aguarde..."<<endl<<endl;
                    for (int i=0; i<3; i++){
                        cout<<"Secccion: "<<i+1<<endl<<"================"<<endl;
                        for(int j=0; j<50; j++){
                            if (ptrr[i][j].is_reservado()){
                                cout<<"Camarote "<<j+1<<endl;
                                ptrr[i][j].mostrar_datos();
                                reservados++;
                            }
                        }
                        cout<<"Resumen. Para esta seccion tenemos "<<reservados<<" camarotes reservados. Todavia nos faltan "<<50-reservados<<" camarotes por reservar"<<endl<<"(C)ontinuar =>";
                        cin>>nombre;
                        reservados = 0;
                        cout<<endl;
                    }
                }
                break;
            }
        }
    }while(opcion>0);
    delete *ptrr;
    return 0;
}
