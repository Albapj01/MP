#ifndef FUNCIONES_H
#define FUNCIONES_H

struct persona
{
	char nombre[100];
	int edad; //en años
	float peso; //en kg
};

//Función que ordena el vector ascendentemente de personas según nombre, edad o peso.
int nombre(struct persona a, struct persona b);
int edad(struct persona a, struct persona b);
int peso(struct persona a, struct persona b);
void ordenar(struct persona * v, int tam, int (*tipo_ordenacion)(struct persona a, struct persona b));




#endif