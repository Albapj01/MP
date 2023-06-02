#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"


int main(int argc, char **argv)
{
    if(argc!=2)
    {
    	printf("Error debe de introducir el nombre del fichero \n");
    	exit(-1);
    }

    char * nombrefichero = argv[1];

    mostrarfichero(nombrefichero);

    int dorsal;
    printf("Introduzca el dorsal del jugador a buscar : \n");
    scanf("%d", &dorsal);
    int encontrado = buscarjugador(nombrefichero, dorsal);
    if(encontrado == 1)
    {
    	printf("Se ha encontrado el jugador\n");
    }
    else
    {
    	printf("No se ha encontrado el jugador\n");
    }

    printf("Introduzca el dorsal del jugador a buscar : \n");
    scanf("%d", &dorsal);
    modificarjugador(nombrefichero, dorsal);
    mostrarfichero(nombrefichero);

    printf("Introduzca el dorsal del jugador a buscar : \n");
    scanf("%d", &dorsal);
    borrarjugador(nombrefichero, dorsal);

    float total = kmstotales(nombrefichero);
    printf("Los kms totales recorridos son %f", total);

	return 0;
}
