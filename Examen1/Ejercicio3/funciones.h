#ifndef FUNCIONES_H
#define FUNCIONES_H

struct actores
{
	char * nombre[50];
	float sueldo;
	int humano;
	char * color[15];
};

void bintotext(char * nombrefichero);

#endif