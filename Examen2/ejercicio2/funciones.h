#ifndef FUNCIONES_H
#define FUNCIONES_H

/* ---------------------------------------
   Fichero de cabecera para las funciones
   de lectura y escritura de un vector de
   enteros
   
   Septiembre 2014
   ---------------------------------------*/

/* -------------------------------------------------------
   Función que muestra por pantalla un vector de enteros.
   
   Se le pasa: v -> dirección de inicio del vector
               tam -> tamaño del vector.
   Devuelve: nada
   Utiliza: nada
   ----------------------------------------------------*/
void escribeVector(int * v, int tam);

/*------------------------------------------------------
   Función que lee de teclado un vector de enteros
   
   Se le pasa: v -> dirección de inicio del vector
               tam -> tamaño del vector.
   Devuelve: nada
   Utiliza: nada
------------------------------------------------------*/
void leeVector(int * v, int tam);

int * reservarmemoria(int tam);

void ordenar(int * v, int tam);

void liberarmemoria(int ** v);

#endif