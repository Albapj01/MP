#include "funciones.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct monomio * reservaMemoria(int tam)
{
	struct monomio * v = NULL;

	v = (struct monomio *)malloc(sizeof(struct monomio)*tam);

	if(v==NULL)
	{
	   printf("Error al reservar memoria.\n");
	   exit(-1);
	}
	return v;
}

void liberaMemoria(struct monomio * * v)
{
	free(*v);
	(*v) = NULL;
}

void introducePolinomio(struct monomio * v, int tam)
{
	for(int i=0; i<tam; i++)
	{
		printf("Introduzca el coeficiente del monomio: ");
		scanf("%f",&v[i].coeficiente);
		printf("Introduzca el expoenente del monomio: ");
		scanf("%d",&v[i].exponente);
	}
}

void muestraPolinomio(struct monomio * v, int tam)
{
	for(int i=0; i<tam; i++)
	{
		printf("El polinomio %d tiene coeficiente %f y exponente %.1d\n",i+1,v[i].coeficiente,v[i].exponente);
	}
}

float valorPolinomio(struct monomio * v, int tam, float x)
{
	float suma=0;
	for(int i=0; i<tam; i++)
	{
       suma+=v[i].coeficiente*(pow(x, v[i].exponente));
	}
	return suma;
}

void ordenarPolinomio(struct monomio * v, int tam)
{
	struct monomio aux;
	for(int i=0; i<tam-1; i++)
	{
		for(int j=i+1; j<tam; j++)
		{
           if(v[i].exponente<v[j].exponente)
           {
              aux=v[i];
              v[i]=v[j];
              v[j]=aux;
           }
		}
	}
}







