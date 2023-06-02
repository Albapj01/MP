#ifndef FUNCIONES_H
#define FUNCIONES_H

struct nodo
{
	float dat; //la pelotita
	struct nodo * sig; //la flecha
};

struct nodo * reservaMemoriaNodo();

void insertarDelante(struct nodo * *cabeza, float dato);

void insertarDetras(struct nodo ** cabeza, float dato);

void imprimirLista(struct nodo * cabeza);

void mediaDatosLista(struct nodo * cabeza, float * media);

void mayorMenorElemLista(struct nodo * cabeza, float * mayor, float * menor);

void borrarLista(struct nodo * * cabeza);

#endif