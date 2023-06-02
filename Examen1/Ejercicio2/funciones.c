#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


void mostrarfichero(char * nombrefichero)
{
	FILE * fich = NULL;
	fich = fopen(nombrefichero, "rb");
	if(fich == NULL)
	{
		printf("Error no se ha encontrado el fichero");
		exit(-1);
	}

	struct discos d;
	while(fread(&d, sizeof(struct discos), 1, fich))
	{
		pritnf("Codigo: %d\n" d.cod);
		pritnf("Nombre: %s\n" d.nombre);
		pritnf("Autor: %s\n" d.autor);
		pritnf("Unidades: %d\n" d.unidades);
	}

	fclose(fich);
}

int numdiscos(char * nombrefichero)
{
	FILE * fich = NULL;
	fich = fopen(nombrefichero, "rb");
	if(fich == NULL)
	{
		printf("Error no se ha encontrado el fichero");
		exit(-1);
	}

	struct discos d;

	fseek(fich,0,SEEK_END);

	double bytes = ftell(fich);

	int tam = bytes / sizeof(struct discos);

	fclose(fich);

	return tam;
}

void add(char * nombrefichero)
{
	FILE * fich = NULL;
	fich = fopen(nombrefichero, "ab");
	if(fich == NULL)
	{
		printf("Error no se ha encontrado el fichero");
		exit(-1);
	}

	struct discos d;

	fwrite(&d, sizeof(struct discos), 1, fich);

	fclose(fich);

}

struct discos * reservarmemoria(int tam)
{
	struct discos * v = NULL;
	v = (struct discos *)malloc(sizeof(struct discos)*tam);
	if(v==NULL)
	{
		printf("Error en reserva memoria.\n");
		exit(-1);
	}
	return v;
}

void ficheroAvector(char * nombrefichero,struct discos * v)
{
	FILE * fich = NULL;
	fich = fopen(nombrefichero,"r");
	if(fich==NULL)
	{
		printf("Error...\n");
		exit(-1);
	}

	int i = 0;
	struct discos d;
	while(fscanf(&d, sizeof(struct discos),fich))
	{
		v[i] = d;
		i++;
	}

	fclose(fich);
}

int ascendente(int a, int b)
{
	if(a>b)
		return 1;
	else
		return 0;
}

int descendente(int a, int b)
{
	if(a<b)
		return 1;
	else
		return 0;
}

void ordenar(int *v,int tam,int (*funcion)(int a, int b))
{
	int aux;
	for (int j = 0; j < tam-1; ++j)
	{
		for (int i = 0; i < tam-1; ++i)
		{
			if((*funcion)(v[i],v[i+1]))
			{
				aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
			}
		}
	}
}

void imprimirVectorRecur(int * v, int tam, int i)
{
	if(i<tam)
	{
		printf("%d\n",v[i]);
		i++;
		imprimirVectorRecur(v,tam,i);
	}
}

void liberarMemoria(struct discos * * v)
{
	free(*v);
	(*v)=NULL;
}
