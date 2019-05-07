#include <stdio.h>
#include <stdlib.h>
#include "peliculas.h"
#include "Pedir datos.h"

#define T 10

int main()
{
    int opcion;

 eGenero listaGeneros[5];
 ePelicula listaPeliculas[T];
 eActor listaActores[10];

 inicializarPeliculas(listaPeliculas,T);
 hardcodearDatosGenero(listaGeneros,5);
        do{
    opcion=menuDeOpciones("Opciones para las peliculas\n1.Alta\n2.Modificar\n3.Baja\Elija una opcion: ");
    switch(opcion)
    {

        case 1:
                agregarPelicula(listaPeliculas,T,listaGeneros,5);
                break;
        case 2:
                break;
        case 3:
                break;
        case 4:
                break;
        case 5:
                break;
        default:
                printf("Opcion incorrecta");
                break;

        }
system("pause");
system("cls");
    }while(opcion!=5);


    return 0;
}
