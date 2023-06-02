#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{

	//Creo una lista
	struct nodo * cabeza = NULL;
	float  media;
	float  mayor;
	float  menor;

	//Insertar por delante un elemento en la lista
	printf("Insertando por delante \n");
	insertarDelante(&cabeza,5.1);
	insertarDelante(&cabeza,6.2);
	insertarDelante(&cabeza,7.3);

	printf("Los elementos de la lista son:\n");
	imprimirLista(cabeza);

	printf("\n\n");

    //Insertar por detrás un elemento en la lista
	printf("Insertando por detrás \n");
	insertarDetras(&cabeza,4.3);
	insertarDetras(&cabeza,9.4);
	insertarDetras(&cabeza,3.6);


	printf("Los elementos de la lista son:\n");
	imprimirLista(cabeza);

	printf("\n\n");

	mediaDatosLista(cabeza, &media);
	printf("La media es %f", media);

	printf("\n\n");

    mayorMenorElemLista(cabeza, &mayor, &menor);
    printf("El mayor es %f, el menor es %f", mayor, menor);

	printf("\n\n");

	printf("Eliminamos todos los elementos de la lista...\n");
	borrarLista(&cabeza);

	return 0;
}