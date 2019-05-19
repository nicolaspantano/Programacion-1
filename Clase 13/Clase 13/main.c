#include <stdio.h>
#include <stdlib.h>

#include "biblioteca.h"
#define EXITO 1
#define ERROR 0
#define T 5

int menuDeOpciones(char[]);


int main()
{
    int numeros[T];
    int* pNumeros=NULL;
    int max;
    int opcion;
    float promedio;
    pNumeros=numeros;

    do
    {
        opcion=menuDeOpciones("1.Cargar vector\n2.Mostrar vector\n3.Ordenar vector\n4.Buscar max\n5.Sacar promedio\n6.Borrar las ocurrencias de un numero\n7.Salir\nElija una opcion: ");
        switch(opcion)
        {
        case 1:
            if(cargarArray(pNumeros,T)!=EXITO)
            {
                printf("El vector no se pudo cargar");
            }
            break;
        case 2:
            if(mostrarArray(pNumeros,T)!=EXITO)
            {
                printf("El vector no se pudo mostrar");
            }
            break;
        case 3:
            if(ordenarArray(pNumeros,T)!=EXITO)
            {
                printf("El vector no se pudo ordenar");
            }
            else
            {
                printf("El vector se ordeno exitosamente\n");
            }
            break;
        case 4:
            max=buscarMax(pNumeros,T);
            if(max==0)
            {
                printf("El puntero era nulo");
            }
            else
            {
                printf("El numero maximo es: %d\n",max);
            }
            break;
        case 5:
            promedio=sacarPromedio(pNumeros,T);
            if(promedio==0)
            {
                printf("El puntero era nulo");
            }
            else
            {
                printf("El promedio es: %.2f\n",promedio);
            }
            break;
        case 6:
            if(borrarUnNumero(pNumeros,T)!=EXITO)
            {
                printf("El numero no se pudo borrar");
            }
            else
            {
                printf("El numero se borro correctamente en todas sus ocurrencias\n");
            }
            break;
        case 7:
            break;
        default:
            printf("Opcion invalida");
            break;
        }
        system("pause");
        system("cls");
    }
    while(opcion!=7);

    return 0;
}





int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}
