#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int nombre(struct persona a, struct persona b)
{
	//PROGRAMA AQUÍ LA FUNCION
	if(strcmp(a.nombre, b.nombre)>0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int edad(struct persona a, struct persona b)
{
	//PROGRAMA AQUÍ LA FUNCION
	if(a.edad>b.edad)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int peso(struct persona a, struct persona b)
{
	//PROGRAMA AQUÍ LA FUNCION
	if(a.peso>b.peso)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


void ordenar(struct persona * v, int tam, int (*tipo_ordenacion)(struct persona a, struct persona b))
{
	//PROGRAMA AQUÍ LA FUNCION
	struct persona aux;
	for(int i=0; i<tam-1; i++)
	{
		for(int j=i+1; j<tam; j++)
		{
			if((*tipo_ordenacion)(v[i],v[j]))
			{
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
}


