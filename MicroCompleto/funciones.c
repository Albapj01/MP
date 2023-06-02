/**
	@file funciones.c
	@brief Fichero donde se encuentra la implementación de las funciones
	@author Alba
*/


#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Punto * reservaMemoria(int tam)
{
	struct Punto * v = NULL;

	v = (struct Punto *)malloc(sizeof(struct Punto)*tam);

	if(v==NULL)
	{
	   printf("Error al reservar memoria.\n");
	   exit(-1);
	}
	return v;
}

void liberarMemoria(struct Punto ** v)
{
	free(*v);
	(*v) = NULL;
}

void pmedioreferencia(struct Punto * v, int tam, int * pmedio)
{
	float suma1=0;
	float suma2=0;
	for(int i=0; i<tam; i++)
	{
		suma1 = suma1 + v[i].x;
		suma2 = suma2 + v[i].y;
	}
	(*pmedio)=((suma1)/2,(suma2)/2);
}

void ordenarvector(struct Punto * v, int tam)
{
	struct Punto aux;
    for(int i=0; i<tam-1; i++)
    {
   	   for(int j=i+1; j<tam; j++)
   	   {
          if(v[i].x < v[j].x)
          {
          	aux=v[i];
          	v[i]=v[j];
          	v[j]=aux;
          }
   	   }
    }
}

float distanciapuntos(struct Punto * p1, struct Punto * p2)
{
	return sqrt(((*p1).x-(*p2).x)*((*p1).x-(*p2).x)+((*p1).y-(*p2).y)*((*p1).y-(*p2).y));
}
