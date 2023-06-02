#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funciones.h"

void mostrarfichero(char * nombrefichero)
{
   FILE * fich = NULL;
   fich = fopen(nombrefichero, "r");
   if(fich==NULL)
   {
   	   printf("Error el fichero %s no se ha poddido abrir \n", nombrefichero);
   	   exit(-1);
   }

   struct jugador j;
   while(fscanf(fich, "%d %d %f", &j.dorsal, &j.goles, &j.kmsRecorridos)==3)
   {
   	  printf("Dorsal: %d\n", j.dorsal);
   	  printf("Goles: %d\n", j.goles);
   	  printf("KmsRecorridos: %f\n", j.kmsRecorridos);
   }

   fclose(fich);
}

int buscarjugador(char * nombrefichero, int dorsal)
{
   FILE * fich = NULL;
   fich = fopen(nombrefichero, "r");
   if(fich==NULL)
   {
   	   printf("Error el fichero %s no se ha poddido abrir \n", nombrefichero);
   	   exit(-1);
   }

   struct jugador j;
   while(fscanf(fich, "%d %d %f", &j.dorsal, &j.goles, &j.kmsRecorridos)==3)
   {
       if(j.dorsal==dorsal)
       {
       	  fclose(fich);
       	  return 1;
       }
   }

   fclose(fich);
   return 0;
}

void modificarjugador(char * nombrefichero, int dorsal)
{
   FILE * fich = NULL;
   fich = fopen(nombrefichero, "w");
   if(fich==NULL)
   {
   	   printf("Error el fichero %s no se ha poddido abrir \n", nombrefichero);
   	   exit(-1);
   }

   FILE * fich2 = NULL;
   fich2 = fopen("ejemplo.txt", "w");
   if(fich2==NULL)
   {
   	   printf("Error el fichero %s no se ha poddido abrir \n", nombrefichero);
   	   fclose(fich);
   	   exit(-1);
   }

   struct jugador j;
   while(fscanf(fich, "%d %d %f", &j.dorsal, &j.goles, &j.kmsRecorridos)==3)
   {
   	   if(j.dorsal==dorsal)
   	   {
          fprintf(fich2, "%d %d %f", j.dorsal, j.goles, j.kmsRecorridos);
   	   }
   	   else
   	   {
   	   	  fprintf(fich2, "%d %d %f", j.dorsal, j.goles, j.kmsRecorridos);
   	   }
   }

   fclose(fich);
   fclose(fich2);

   remove(nombrefichero);
   rename("ejemplo.txt", nombrefichero);
}

void borrarjugador(char * nombrefichero, int dorsal)
{
   FILE * fich = NULL;
   fich = fopen(nombrefichero, "w");
   if(fich==NULL)
   {
   	   printf("Error el fichero %s no se ha poddido abrir \n", nombrefichero);
   	   exit(-1);
   }

   FILE * fich2 = NULL;
   fich2 = fopen("ejemplo.txt", "w");
   if(fich2==NULL)
   {
   	   printf("Error el fichero %s no se ha poddido abrir \n", nombrefichero);
   	   fclose(fich);
   	   exit(-1);
   }

   struct jugador j;
   while(fscanf(fich, "%d %d %f", &j.dorsal, &j.goles, &j.kmsRecorridos)==3)
   {
   	   if(j.dorsal!=dorsal)
   	   {
          fprintf(fich2, "%d %d %f", j.dorsal, j.goles, j.kmsRecorridos);
   	   }
   }

   fclose(fich);
   fclose(fich2);

   remove(nombrefichero);
   rename("ejemplo.txt", nombrefichero);
}

float kmstotales(char * nombrefichero)
{
   FILE * fich = NULL;
   fich = fopen(nombrefichero, "w");
   if(fich==NULL)
   {
   	   printf("Error el fichero %s no se ha poddido abrir \n", nombrefichero);
   	   exit(-1);
   }

   struct jugador j;
   float suma=0;
   while(fscanf(fich, "%d %d %f", &j.dorsal, &j.goles, &j.kmsRecorridos)==3)
   {
   	   suma = suma + j.kmsRecorridos;
   }
   return suma;
}

