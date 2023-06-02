#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int * reservarmemoria(int tam)
{
	int * v = NULL;
	v = (int*)malloc(sizeof(int)*tam);
	if(v==NULL)
	{
		printf("No se ha podido reservar memoria para el vector\n");
		exit(-1);
	}
    return v;
}

void par(int * v, int tam, int * pares)
{
	int cont=0;
	for(int i=0; i<tam; i++)
	{
		if(v[i]%2 == 0)
		{
			cont++;
		}
	}
	(*pares)=cont;
}

void liberarmemoria(int ** v)
{
	free(*v);
	(*v)=NULL;
}
