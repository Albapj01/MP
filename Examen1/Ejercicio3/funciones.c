#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


void bintotext(char * nombrefichero)
{
	FILE * fich = NULL;
	fich = fopen(nombrefichero, "rb");
	if(fich == NULL)
	{
		printf("Error no se ha podido abrir el fichero \n");
		exit(-1);
	}

	FILE * fich2 = NULL;
	fich2 = fopen("actores.txt", "w");
	if(fich2 == NULL)
	{
		printf("Error no se ha podido abrir el fichero \n");
		fclose(fich);
		exit(-1);
	}

    struct actores a;
	while(fread(&a, sizeof(struct actores), 1, fich))
	{
		fprintf(fich, "%s %f %d %s", a.nombre, a.sueldo, a.humano, a.color);
	}

    fclose(fich);
    fclose(fich2);
}

int registros(char * nombrefichero)
{
	FILE * fich = NULL;
	fich = fopen(nombrefichero, "r");
	if(fich == NULL)
	{
		printf("Error no se ha podido abrir el fichero \n");
		exit(-1);
	}

    struct discos d;
    while(fscanf())

}



