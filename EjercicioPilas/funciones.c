#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

struct nodo * reservaMemoriaNodo()
{
	struct nodo * nuevo = NULL;
	nuevo = (struct nodo *)malloc(sizeof(struct nodo));
	if(nuevo==NULL)
	{
		printf("Error al reservar memoria para un nodo.\n");
		exit(-1);
	}
	return nuevo;
}

void insertarDelante(struct nodo * *cabeza, float dato)
{
	struct nodo * nuevo = reservaMemoriaNodo();

	nuevo->dat = dato;

	if((*cabeza)==NULL)
	{
		nuevo->sig = NULL;
	}
	else
	{
		nuevo->sig = (*cabeza);
	}

	(*cabeza) = nuevo;

}

void insertarDetras(struct nodo ** cabeza, float dato)
{
	struct nodo * nuevo = reservaMemoriaNodo();

	nuevo->dat = dato;
	nuevo->sig = NULL;

	if((*cabeza)==NULL)
	{
		(*cabeza) = nuevo;
	}
	else
	{
		struct nodo * aux = (*cabeza);

		while(aux->sig != NULL)
		{
			aux = aux->sig;
		}

		aux->sig = nuevo;
	}
}

void imprimirLista(struct nodo * cabeza)
{
	struct nodo * aux = cabeza;

	while(aux!=NULL)
	{
		printf("%f\n",aux->dat);
		aux = aux->sig;
	}
}

void mediaDatosLista(struct nodo * cabeza, float * media)
{
	struct nodo * aux = cabeza;

	int suma = 0;
	int cont = 0;

	while(aux!=NULL)
	{
		suma = suma + aux->dat;
		aux = aux->sig;
		cont++;
	}

	(*media)= suma/cont;
}

void mayorMenorElemLista(struct nodo * cabeza, float * mayor, float * menor)
{
	struct nodo * aux = cabeza;
	(*mayor)=0;
	(*mayor)=0;

	int suma = 0;
	int cont = 0;

	while(aux!=NULL)
	{
		if((*mayor) < aux->dat)
		{
			(*mayor)=aux->dat;
		}
		if((*menor) > aux->dat)
		{
			(*menor)=aux->dat;
		}
	}

}

void borrarLista(struct nodo * * cabeza)
{
	struct nodo * aux = (*cabeza);
	struct nodo * siguiente;

	while(aux != NULL)
	{
		siguiente = aux->sig;
		free(aux);
		aux = siguiente;
	}

	(*cabeza) = NULL;
}