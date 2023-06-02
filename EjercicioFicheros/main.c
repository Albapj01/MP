#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{

	if(argc != 2)
	{
		printf("Error en linea de argumentos, el programa debe recibir el nombre de un fichero.\n");
		exit(-1);
	}

	char * nombreFichero = argv[1];
	struct producto c;
	char codigo;
	struct producto * v;

	mostrarFichero(nombreFichero);

	printf("Introduce el codigo a buscar en el fichero: \n");
    printf("Codigo: ");
	scanf("%s",c.codigo);

    int encontrado = buscarproducto(nombreFichero, c);

	if(encontrado==1)
	{
	 	printf("El producto se encuentra en el fichero.\n");
	}
	else
	{
		printf("El producto no se encuentra en el fichero\n");
	}

    anadirFichero(nombreFichero, c);

	printf("Introduce el codigo a buscar en el fichero: \n");
    printf("Codigo: ");
    scanf("%s",codigo);
	borrarDatosFichero(nombreFichero, codigo);
	mostrarFichero(nombreFichero);

    int cantidad = numeroProductos(nombreFichero);
    printf("Hay %d productos en el fichero \n", cantidad);

    fichavector(nombreFichero, v);

    mostrarvec(v);

	return 0;
}
