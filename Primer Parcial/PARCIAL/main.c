#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"
#include "Pedir datos.h"

#define T 25

int main()
{
  int opcion;

  ePelicula listaPeliculas[T];
  eGenero listaGeneros[5];
  eActor listaActores[10];

  inicializarPeliculas(listaPeliculas,T);

hardcodearDatosGenero(listaGeneros,5);
hardcodearDatosActores(listaActores,10);
hardcodearDatosPeliculas(listaPeliculas,21);

  do{
    opcion=menuDeOpciones("1.Alta\n2.Modificacion\n3.Baja\n4.Listar\n5.Salir\nElija una opcion: ");

        switch(opcion){

    case 1:
        agregarPelicula(listaPeliculas,T,listaGeneros,5,listaActores,10);
        break;
    case 2:
        modificarDatos(listaPeliculas,T,listaActores,10);
        break;
    case 3:
        borrarPelicula(listaPeliculas,T);
        break;
    case 4:
        ordenarPeliculasAnio(listaPeliculas,T);
        mostrarPeliculas(listaPeliculas,T);
        ordenarActoresPais(listaActores,10);
        mostrarDescripcionActores(listaActores,10);
        break;
    case 5:
        break;
    default:
        printf("Opcion invalida\n");
        break;


        }

system("pause");
system("cls");

  }while(opcion!=5);
  return 0;
}
