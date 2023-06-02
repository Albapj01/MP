#include "funcionesc.h"
#include <stdio.h>
#include <stdlib.h>

Conejo * reservarMemoria(int tam)
{
	Conejo * v = NULL;

	v = (Conejo *)malloc(sizeof(Conejo)*tam);

	if(v==NULL)
	{
	   printf("Error al reservar memoria.\n");
	   exit(-1);
	}
	return v;
}

void liberarMemoria(Conejo * * v)
{
	free(*v);
	(*v) = NULL;
}

void rellenarVector(Conejo * v, int tam)
{
	for(int i=0; i<tam; i++)
	{
		printf("Introduzca el codigo: ");
		scanf("%d",&v[i].codigo);
		printf("Introduzca la edad: ");
		scanf("%d",&v[i].edad);
		printf("Introduzca el peso: ");
		scanf("%f",&v[i].peso);
	}
}

void mostrarVector(Conejo * v, int tam)
{
	for(int i=0; i<tam; i++)
	{
		printf("El conejo %d tiene codigo %d, edad %d y tiene un peso de %.1f\n",i+1,v[i].codigo,v[i].edad, v[i].peso);
	}
}

bool buscar(Conejo * v, int tam, int codigo)
{
	for(int i=0; i<tam; i++)
	{
		if(codigo==&v[i].codigo)
		{
			return true;
		}
	}
	return false;
}

float mediaPeso(Conejo * v, int tam)
{
	float suma=0;
	float media;
	for(int i=0; i<tam; i++)
	{
		suma=suma+&v[i].peso;
	}
	media=suma/tam;
	return media;
}

int mayme(Conejo * v, int tam)
{
	int ma = &v[0];
	int me = &v[0];
	int * v[1];
	for(int i=0; i<tam; i++)
	{
		if(ma<&v[i])
		{
			ma=&v[i];
		}
	}
	for(int i=0; i<tam; i++)
	{
		if(me>&v[i])
		{
			me=&v[i];
		}
	}
	&v[0]=ma;
	&v[1]=me;
	return *v;
}

int edad(Conejo * v, int tam, int codigo)
{
	for(int i=0; i<tam; i++)
	{
		if(bool buscar(v, tam, codigo)==true)
		{
			return &v[i].edad;
		}
	}
	return 0;
}








