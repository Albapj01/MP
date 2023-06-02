/**
    @file entradasalida.c
    @brief Fichero donde se encuentra la implementación de las funciones
    @author Alba
*/


#include "entradasalida.h"
#include <stdio.h>
#include <stdlib.h>


void rellenarvector(struct Punto * v, int tam)
{
    for(int i=0; i<tam; i++)
    {
    	printf("Introduzca la primera coordenada");
    	scanf("%d", &v[i].x);
    	printf("Introduzca la segunda coordenada");
    	scanf("%d", &v[i].y);
    }
}

void imprimevector(struct Punto * v, int tam)
{
	for(int i=0; i<tam; i++)
	{
		printf("El elemento %d del vector contiene %d y %.1d\n",i+1, v[i].x, v[i].y);
	}
}

