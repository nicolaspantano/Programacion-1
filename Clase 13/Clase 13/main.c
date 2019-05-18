#include <stdio.h>
#include <stdlib.h>

#include "biblioteca.h"
#define EXITO 1
#define ERROR 0
#define T 5
int main()
{
    int numeros[T];
    int* pNumeros=NULL;

    pNumeros=numeros;

    if(cargarArray(pNumeros,T)!=EXITO)
    {
        printf("El vector no se pudo cargar");
    }
    if(ordenarArray(pNumeros,T)!=EXITO)
    {
        printf("El vector no se pudo ordenar");
    }
    else
    {
        printf("El vector se ordeno exitosamente\n");
    }
    if(mostrarArray(pNumeros,T)!=EXITO)
    {
        printf("El vector no se pudo mostrar");
    }

    return 0;
}
