#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(int argc, char ** argv)
{
    if(argc!=3)
    {
    	printf("Error debe introducir el nombre de los dos ficheros.\n");
    	exit(-1);
    }

    char * nombrefichero = argv[1];
    char * nombrefichero2 = argv[2];

    struct enteros * v;

    fichtovec(nombrefichero);
}