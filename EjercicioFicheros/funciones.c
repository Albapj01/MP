#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarFichero(char * nombreFichero)
{
	FILE * fich = NULL;
	fich = fopen(nombreFichero,"r");
	if(fich==NULL)
	{
		printf("Error al abrir el fichero %s en la funcion mostrarFichero()\n",nombreFichero);
		exit(-1);
	}

	struct producto a;

	while(fgets(a.nombre,200,fich))
	{
		a.nombre[strlen(a.nombre)-1] = '\0';//elimino el caracter '\n' de la cadena leida

		fscanf(fich,"%s %f\n",a.codigo,&a.precio);//poner \n en el fscanf de después de un fgets

		fscanf(fich, "%d\n", &a.unidades);

		printf("El producto %s tiene codigo %s, precio %f y tenemos %d unidades.\n", a.nombre, a.codigo, a.precio, a.unidades);
	}


	fclose(fich);
}

int buscarproducto(char * nombreFichero, struct producto c)
{
	FILE * fich = NULL;
	fich = fopen(nombreFichero,"r");
	if(fich==NULL)
	{
		printf("Error al abrir el fichero %s en la funcion anadirFichero()\n",nombreFichero);
		exit(-1);
	}

	struct producto c_leido;

	if(c.codigo==c_leido.codigo)
	{
		fclose(fich);
		return 1;
	}

	fclose(fich);
	return 0;
}

void anadirFichero(char * nombreFichero, struct producto c)
{
	FILE * fich = NULL;
	fich = fopen(nombreFichero,"a");
	if(fich==NULL)
	{
		printf("Error al abrir el fichero %s en la funcion anadirFichero()\n",nombreFichero);
		exit(-1);
	}
	fprintf(fich, "%s %s %f %d \n",c.nombre, c.codigo, c.precio, c.unidades);
	fclose(fich);
}

void borrarDatosFichero(char * nombreFichero, char codigo)
{
	//Abro el fichero original en modo lectura
	FILE * fich1 = NULL;
	fich1 = fopen(nombreFichero,"r");
	if(fich1==NULL)
	{
		printf("Error al abrir el fichero %s en la funcion anadirFichero()\n",nombreFichero);
		exit(-1);
	}

	//Abro el fichero auxiliar.txt en modo escritura
	FILE * fich2 = NULL;
	fich2 = fopen("auxiliar.txt","w");
	if(fich2==NULL)
	{
		printf("Error al abrir el fichero %s en la funcion anadirFichero()\n",nombreFichero);
		fclose(fich1);
		exit(-1);
	}

	//Recorro el fichero original, leyendo las fracciones que haya en el
	struct producto c;

	while( fscanf(fich1,"%s %s %f %d \n",c.nombre, c.codigo, c.precio, c.unidades) == 4 )
	{
		if( c.codigo != codigo)
		{
			fprintf(fich2,"%s %s %f %d \n",c.nombre, c.codigo, c.precio, c.unidades);
		}
	}

	//Cerramos los ficheros
	fclose(fich1);
	fclose(fich2);

	//Eliminamos el fichero original
	remove(nombreFichero);

	//Cambiamos el nombre del fichero auxiliar
	rename("auxiliar.txt",nombreFichero);
}

int numeroProductos(char * nombreFichero)
{
	//Abro el fichero original en modo lectura
	FILE * fich1 = NULL;
	fich1 = fopen(nombreFichero,"r");
	if(fich1==NULL)
	{
		printf("Error al abrir el fichero %s en la funcion anadirFichero()\n",nombreFichero);
		exit(-1);
	}

    struct producto c;
    int cantidad=0;
    while( fscanf(fich1,"%s %s %f %d \n",c.nombre, c.codigo, c.precio, c.unidades) == 4 )
	{
		cantidad++;
	}

	fclose(fich1);
	return cantidad;
}

void fichavector(char * nombreFichero, int * v)
{
	//Abro el fichero original en modo lectura
	FILE * fich1 = NULL;
	fich1 = fopen(nombreFichero,"r");
	if(fich1==NULL)
	{
		printf("Error al abrir el fichero %s en la funcion anadirFichero()\n",nombreFichero);
		exit(-1);
	}
    
    struct producto c;
    int tam;
    while( fscanf(fich1,"%s %s %f %d \n",c.nombre, c.codigo, c.precio, c.unidades) == 4 )
	{
		for(int i=0; i<tam; i++)
		{
			v[i] = c;
		}
	}

	fclose(fich1);
}

void mostrarvec(struct producto * v)
{
	int tam;
	for(int i=0; i<tam; i++)
	{
	   printf("Nombre: %s , Codigo: %s , Precio: %f , Unidades: %i", v[i].nombre, v[i].codigo, v[i].precio, v[i].unidades)
	}
}





