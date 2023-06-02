#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main(int argc, char ** argv)
{
    if(argc != 2)
    {
    	printf("Error debe introducir el nombre del fichero\n");
    	exit(-1);
    }

    char *  nombrefichero = argv[1];

    struct discos * v;
    int tam, i;

    mostrarfichero(nombrefichero);

    int cant =  numdiscos(nombrefichero);
    printf("Hay %d discos", cant);

    add(nombrefichero);

    v = reservarmemoria(tam);

    ficheroAvector(nombrefichero,v);

    ordenar(v,tam,&ascendente);

    ordenar(v,tam,&descendente);

    imprimirVectorRecur(v, tam, i);

    liberarMemoria(&v);

	return 0;
}


