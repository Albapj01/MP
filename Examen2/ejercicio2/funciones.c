#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int * reservarmemoria(int tam)
{
	int * v = NULL;
	v = (int*)malloc(sizeof(int)*tam);
	if(v == NULL)
    {
       printf("Error al reservar memoria.\n");
       exit(-1);
    }
    return v;
}

void leeVector(int * v, int tam)
{
	for(int i=0; i<tam; i++)
	{
		scanf("%d\n", &v[i]);
	}
}

void escribeVector(int * v, int tam)
{
	for(int i=0; i<tam; i++)
	{
		printf("%d\n", v[i]);
	}
}

void ordenar(int * v, int tam)
{
	int aux;
	for(int i=0; i<tam-1; i++)
	{
		for(int j=i+1; j<tam; j++)
		{
			if(v[i]<v[j])
			{
               aux=v[i];
               v[i]=v[j];
               v[j]=aux;
			}
		}
	}
}

void liberarmemoria(int ** v)
{
	free(*v);
	(*v)=NULL;
}