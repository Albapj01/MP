#include "funciones.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int ** reservaMemoria(int nFil,int nCol)
{
	int ** m = NULL;

	m = (int **)malloc(sizeof(int *)* nFil);

	if(m==NULL)
	{
		printf("ERROR al reservar memoria para las filas de la matriz.\n");
		exit(-1);
	}

	for (int i = 0; i < nFil; ++i)
	{
		m[i] = NULL;

		m[i] = (int *)malloc(sizeof(int)*nCol);

		if(m[i] == NULL)
		{
			printf("ERROR al reservar memoria para las columnas de la fila %d de la matriz.\n",i);
			exit(-1);
		}
	}

	return m;

}

void rellenarMatriz(int **m, int nFil, int nCol)
{
	for (int i = 0; i < nFil; ++i)
	{
		for(int j=0;j<nCol; j++)
		{
			printf("Introduzca el elemento m[%d][%d]: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
}

void mostrarMatriz(int **m, int nFil, int nCol)
{
	for (int i = 0; i < nFil; ++i)
	{
		for(int j=0;j<nCol; j++)
		{
			printf("%d ",m[i][j]);
		}

		printf("\n");
	}
}

int * reservarMemoriaVector(int tam)
{
	int * v = NULL;

	v = (int *)malloc(sizeof(int)*tam);

	if(v==NULL)
	{
	   printf("Error al reservar memoria.\n");
	   exit(-1);
	}
	return v;
}

void liberarMemoriaVector(int **v)
{
	free(*v);
	(*v) = NULL;
}

void mayorFilas(int **m, int nFil, int nCol, int * mayores)
{
	int cont=0;
	for(int i=0; i<nFil; i++)
	{
		for(int j=0; j<nCol; j++)
		{
			if(m[i][j]<m[i][j++])
			{
                mayores[cont]=m[i][j++];
			}
			cont++;
		}
	}
}

void mostrarVector(int * v, int tam)
{
    for(int i=0; i<tam; i++)
	{
		printf("%d\n",v[i]);
	}
}

void liberaMemoria(int ***m, int nFil)
{
	for (int i = 0; i < nFil; ++i)
	{
		free((*m)[i]);

		(*m)[i] = NULL;
	}

	free(*m);

	(*m) = NULL;
}

