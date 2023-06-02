#ifndef FUNCIONES_H
#define FUNCIONES_H

struct producto
{
	char nombre[200];
	char codigo[10];
	float precio;
	int unidades;
};

void mostrarFichero(char * nombreFichero);

int buscarproducto(char * nombreFichero, struct producto c);

void anadirFichero(char * nombreFichero, struct producto c);

void borrarDatosFichero(char * nombreFichero, char codigo);

int numeroProductos(char * nombreFichero);

void fichavector(char * nombreFichero, int * v);

void mostrarvec(struct producto  * v);


#endif