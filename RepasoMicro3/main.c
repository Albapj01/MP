#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(int argc, char * * argv)
{
  
    if(argc!=3)
	{
		printf("ERROR en linea de argumentos. Se debe introducir el numero de filas y columnas de la matriz,\n");
		printf("por ejemplo, %s 3\n",argv[0]);
		exit(-1);
	}

    int * * m = NULL;
	int nFil, nCol;
	int * v = NULL;
	int tam;
	int * mayores;

	m = reservaMemoria(nFil, nCol);

	printf("Introduzca los elementos de la matriz:\n");
    rellenarMatriz(m, nFil, nCol);

    printf("Los elementos de la matriz son:\n");
    mostrarMatriz(m, nFil, nCol);

    v=* reservarMemoriaVector(tam);

    printf("Los elementos más grandes de cada fila se guardan en un vector\n");
    mayorFilas(m, nFil, nCol, mayores);

    printf("Los elementos del vector son:\n");
    mostrarVector(v, tam);

	liberaMemoria(&m, nFil);
	liberarMemoriaVector(&v);

	return 0;
}