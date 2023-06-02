#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	printf("\n\n");

	struct persona  v [] = {{"persona 3",10,50.5},{"persona 1",5,19},{"persona 2",50,70.2}};

	ordenar(v,3,&nombre);
	printf("El vector ordenado por nombre queda así:\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("Nombre: %s\tEdad: %d anios\tPeso: %fkg\n",v[i].nombre,v[i].edad,v[i].peso);
	}

	printf("\n\n");

	ordenar(v,3,&edad);
	printf("El vector ordenado por edad queda así:\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("Nombre: %s\tEdad: %d anios\tPeso: %fkg\n",v[i].nombre,v[i].edad,v[i].peso);
	}

	printf("\n\n");

	ordenar(v,3,&peso);
	printf("El vector ordenado por peso queda así:\n");
	for (int i = 0; i < 3; ++i)
	{
		printf("Nombre: %s\tEdad: %d anios\tPeso: %fkg\n",v[i].nombre,v[i].edad,v[i].peso);
	}

	printf("\n\n");
}