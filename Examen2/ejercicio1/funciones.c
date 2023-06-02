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

void insertarDetras(struct nodo ** cabeza,int num)
{
	struct nodo * nuevo = reservaMemoriaNodo();

	nuevo->dato = num;
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

void mostrarlista(struct nodo * cabeza)
{
	struct nodo * aux = cabeza;
	while(aux!=NULl)
	{
		printf("%d\n",aux->dato);
		aux = aux->sig;
		mostrarlista(cabeza);
	}
}

void ordenlista(struct nodo * cabeza)
{
	struct lista *aux;
	struct lista *aux1;
	struct lista *minimo;
	int * minimo_n;
	int * maximo_n;
	aux = cabeza;

	while(aux->sig != NULL)
	{ 	
		aux1 = aux->sig;
		(*minimo) = aux;
		while(aux1 != NULL)
		{
			if (aux1->n < (*minimo)->n)
			{
				(*minimo) = aux1; 
			}
			aux1 = aux1->sig;
		}
	}
	while(aux->sig != NULL)
	{ 	
		aux1 = aux->sig;
		(*maximo) = aux;
		while(aux1 != NULL)
		{
			if (aux1->n < (*maximo)->n)
			{
				(*maximo) = aux1; 
			}
			aux1 = aux1->sig;
		}
	}
}

