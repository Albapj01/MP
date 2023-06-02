#ifndef FUNCIONES_H
#define FUNCIONES_H

int ** reservaMemoria(int nFil,int nCol);

void liberaMemoria(int ***m, int nFil);

void rellenarMatriz(int **m, int nFil, int nCol);

void mostrarMatriz(int **m, int nFil, int nCol);

int * reservarMemoriaVector(int tam);

void liberarMemoriaVector(int **v);

void mayorFilas(int **m, int nFil, int nCol, int * mayores);

void mostrarVector(int * v, int tam);

#endif