#ifndef FUNCIONES_H
#define FUNCIONES_H

struct monomio
{
	float coeficiente;
    int exponente;
};

struct monomio * reservaMemoria(int tam);

void liberaMemoria(struct monomio **v);

void introducePolinomio(struct monomio * v, int tam);

void muestraPolinomio(struct monomio * v, int tam);

float valorPolinomio(struct monomio * v, int tam, float x);

void ordenarPolinomio(struct monomio * v, int tam);

#endif