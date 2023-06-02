#ifndef FUNCIONES_H
#define FUNCIONES_H

struct jugador
{
	int dorsal;
	int goles;
	float kmsRecorridos;
};

void mostrarfichero(char * nombrefichero);

int buscarjugador(char * nombrefichero, int dorsal);

void modificarjugador(char * nombrefichero, int dorsal);

void borrarjugador(char * nombrefichero, int dorsal);

float kmstotales(char * nombrefichero);

#endif