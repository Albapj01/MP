#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char * * argv)
{

	if(argc!=2)
	{
		printf("ERROR en linea de argumentos. Se debe introducir el tamano del vector obligatoriamente,\n");
		printf("por ejemplo, %s 3\n",argv[0]);
		exit(-1);
	}

    struct monomio * v = NULL;
	int tam=atoi(argv[1]);
	float x, valor;

	v = reservaMemoria(tam);

    printf("Procedemos a rellenar el vector...\n");
	introducePolinomio(v, tam);

    printf("El vector contiene: \n");
    muestraPolinomio(v, tam);

    printf("Introduzca el valor de la incognita para obtener el resultado del polinomio: \n");
    scanf("%f", &x);
    valor=valorPolinomio(v, tam, x);
    printf("El valor del polinomio es %f \n", valor);

    printf("El polinomio ordenado descendentemente es: \n");
    ordenarPolinomio(v, tam);
    muestraPolinomio(v, tam);

	liberaMemoria(&v);

	return 0;
}