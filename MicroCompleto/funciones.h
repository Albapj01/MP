/**
	@file funciones.h
	@brief Fichero donde se encuentra los prototipos de las funciones y estructuras
	@author Alba
*/


#ifndef FUNCIONES_H
#define FUNCIONES_H


/** Definición de la estructura punto*/
struct Punto
{
	int x; /**< parte x de un punto */
	int y; /**< parte y de un punto */
};


struct Punto * reservaMemoria(int tam);

void liberarMemoria(struct Punto ** v);

//doxygen
/**
	@fn	void void pmedioreferencia(struct Punto * v, int tam, int * pmedio);
	@brief	Función que calcula el punto medio entre varios puntos por referencia.
	@param	Parámetro 1: Vector de punto.
	@param 	Parámetro 2: Tamaño del vector de punto.
	@param	Parámetro 3: Variable recibida por referencia donde guardaré el punto medio.
	@return	Esta función no retorna nada por valor.
*/
void pmedioreferencia(struct Punto * v, int tam, int * pmedio);

void ordenarvector(struct Punto * v, int tam);

//doxygen
/**
	@fn	void float distanciapuntos(struct Punto * p1, struct Punto * p2);
	@brief	Función que calcula la distancia entre dos puntos.
	@param	Parámetro 1: Vector de punto.
	@param 	Parámetro 2: Tamaño del vector de punto.
	@return	Esta función retorna la distancia por valor.
*/
float distanciapuntos(struct Punto * p1, struct Punto * p2);

#endif