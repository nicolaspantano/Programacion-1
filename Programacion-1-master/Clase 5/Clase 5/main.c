#include <stdio.h>
#include <stdlib.h>
#include "Funciones vectores.h"
#define T 5//Definicion

int main()
{
    //int const Q=10;/Se usa el define porque no ocupa espacio en memoria
    int numeros[T];
    int maximo;
    int posicion;
    int valor;
    cargarVector(numeros,T);
    mostrarVector(numeros,T);
    maximo=buscarMaximo(numeros,T);
    printf("Ingrese el valor que desea buscar: ");
    scanf("%d",&valor);
    posicion=buscarValor(numeros,T,valor);
    printf("El maximo es: %d \n",maximo);
    printf("El valor se encuentra en la posicion: %d ",posicion);



    return 0;
}
