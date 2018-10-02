/* Practica de Laboratorio 4
*  Informatica 2 - 2018_2
*  Prof: Juan Camilo Correa Chica
*  Fecha: Octubre 1/2018 - Octubre 8/2018
*  Plazo máximo para enviar enlace para clonar el repositorio: 
*  Estudiante1: Nombres y apellidos completos
*  Estudiante2: Nombres y apellidos completos (Opcional, puede trabajar individualmente)
*  Fecha del ultimo Commit en GitHub: Agregue la fecha y hora del ultimo Commit (aproximada)

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