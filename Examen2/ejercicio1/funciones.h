#ifndef FUNCIONES_H
#define FUNCIONES_H

struct nodo
{
	int dato; //la pelotita
	struct nodo * sig; //la flecha
};


void mostrarlista(struct nodo * cabeza);

struct nodo * reservaMemoriaNodo();

void insertarDetras(struct nodo ** cabeza,int num);

void ordenlista(struct nodo * cabeza);

#endif