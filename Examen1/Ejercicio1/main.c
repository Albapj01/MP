#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char ** argv)
{
	if(argc!=2)
	{
		printf("Error, debe introducir el tamaño del vector.\n");
	}

    int tam = atoi(argv[1]);
    int * v = NULL;

    int pares;

	v = reservarmemoria(tam);

    par(v, tam, &pares);
    printf("Los pares son %d\n", pares);

    liberarmemoria(&v);

    return 0;
}