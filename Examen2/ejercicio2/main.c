#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char ** argv)
{
   if(argc!=2)
   {
   	printf("Error debe introducir el tamaño del vector.");
   	exit(-1);
   }

   int tam = stoi(argv[1]);

   int * v = NULL;

   v = reservarmemoria(tam);

   escribeVector(v, tam);

   leeVector(v, tam);

   ordenar(v, tam);

   liberarmemoria(&v);


}