#ifndef FUNCIONES_H
#define FUNCIONES_H

struct discos
{
	int cod;
	char nombre[50];
	char autor[50];
	int unidades;
};

void mostrarfichero(char * nombrefichero);

int numdiscos(char * nombrefichero);

void add(char * nombrefichero);

struct discos * reservarmemoria(int tam);

void ficheroAvector(char * nombrefichero,struct discos * v);

int ascendente(int a, int b);

int descendente(int a, int b);

void ordenar(int *v,int tam,int (*funcion)(int a, int b));

void imprimirVectorRecur(int * v, int tam, int i);

void liberarMemoria(struct discos * * v);

#endif