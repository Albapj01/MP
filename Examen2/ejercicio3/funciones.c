#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


void fichtovec(char * nombrefichero)
{
	FILE * fich = NULL;
	fich = sizeof(nombrefichero, "rb");
	if(fich==NULL)
	{
		printf("Error no se ha podido abrir el fichero.\n");
		exit(-1);
	}

    int i=0;
    struct enteros d;
    struct enteros * v;
	while(fread(&d, sizeof(struct enteros), 1, fich))
	{
        printf("%d %d", d.num, d.num2);
        d=v[i];
        i++;
	}
	fclose(fich);
}

int registros()

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
void escribeVector(int * v, int tam)
{
	for(int i=0; i<tam; i++)
	{
		printf("%d\n", v[i]);
	}
}
void liberarmemoria(int ** v)
{
	free(*v);
	(*v)=NULL;
}