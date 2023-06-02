#ifndef FUNCIONES_H
#define FUNCIONES_H

struct conejo
{
	int codigo;
	int edad;
	float peso;
};

typedef struct conejo Conejo;

Conejo * reservarMemoria(int tam);

void liberarMemoria(Conejo * * v);

void rellenarVector(Conejo * v, int tam);

void mostrarVector(Conejo * v, int tam);

bool buscar(Conejo * v, int tam, int codigo);

float mediaPeso(Conejo * v, int tam);

int mayme(Conejo * v, int tam);

int edad(Conejo * v, int tam, int codigo);

#endif