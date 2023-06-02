#include <stdio.h>
#include "funcionesc.h"

int main()
{
	Conejo * v = NULL;
	int tam;
	float media;
	int codigo;

	printf("Introduzca el numero de conejos: ");
	scanf("%d",&tam);

	v = reservarMemoria(tam);

    printf("Procedemos a rellenar el vector...\n");
	void rellenarVector(v, tam);

    printf("El vector contiene: \n");
    void mostrarVector(v, tam);

    printf("Introduzca un codigo para ver si el conejo se encuentra aqui:");
    scanf("%d", &codigo);
    if(bool buscar(v, tam, codigo) == true)
    {
        printf("El conejo se ha encontrado");
    }
    else
    {
    	printf("El conejo no se ha encontrado");
    }

    int mayorymenor = int mayme(Conejo * v, int tam);
    printf("El mayor y el menor de los conejos es: %d", &v[i]);

    int edad = int edad(v, tam, codigo);
    printf("La edad del conejo es: %d", &v[i].edad);

    media = float mediaPeso(v, tam);
    printf("La media de los pesos de los conejos es: %f",v[i].peso);

	liberarMemoria(&v);
}