#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main(int argc, char ** argv)
{
	if(argc != 2)
	{
		printf("Error debe introducir el nombre del fichero\n");
		exit(-1);
	}

	char * nombrefichero = argv[1];

	bintotext(nombrefichero);
}

