/**
    @file main.c
    @brief programa principal del ejercicio completo micro 1
    @author Alba
*/


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "entradasalida.h"


int main(int argc, char * * argv)
{
	if(argc!=2)
	{
		printf("ERROR en linea de argumentos. Se debe introducir el tamano del vector obligatoriamente,\n");
		printf("por ejemplo, %s 3\n",argv[0]);
		exit(-1);
	}

    struct Punto * v;
    int tam, p1, p2;
    int pmedio;

    v = reservaMemoria(tam);

    printf("Introduzca los elementos del vector \n");
    rellenarvector(v, tam);

    printf("El punto medio entre los puntos es: \n");
    pmedioreferencia(v, tam, &pmedio);

    ordenarvector(v, tam);
    printf("El vector ordenado es: \n");
    imprimevector(v, tam);

    printf("La distancia entre los dos puntos es: \n");
    float distancia = distanciapuntos(p1, p2);

    printf("Los elementos del vector son: \n");
    imprimevector(v, tam);

    liberarMemoria(&v);
    
	return 0;
}