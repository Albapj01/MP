#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{

    struct nodo * cabeza = NULL;
    int num;

    struct nodo * reservaMemoriaNodo();

    insertarDetras(&cabeza,num);
    
    ordenlista(cabeza);

    mostrarlista(cabeza);
    


	return 0;
}
