#include <stdio.h>
#include <stdlib.h>
#include "peliculas.h"
#include "Pedir datos.h"

#define T 1000//tamaño array de peliculas
#define TG 5//tamaño array de generos
#define TA 10//tamaño array de actores

int main()
{
  int opcion;
  int opcionDos;

  ePelicula listaPeliculas[T];
  eGenero listaGeneros[TG];
  eActor listaActores[TA];

  inicializarPeliculas(listaPeliculas,T);

hardcodearDatosGenero(listaGeneros,TG);
hardcodearDatosActores(listaActores,TA);
hardcodearDatosPeliculas(listaPeliculas,21);

  do{
    opcion=menuDeOpciones("1.Alta\n2.Modificacion\n3.Baja\n4.Listar\n5.Informar\n6.Salir\nElija una opcion: ");

        switch(opcion){

    case 1:
        agregarPelicula(listaPeliculas,T,listaGeneros,TG,listaActores,TA);
        break;
    case 2:
        modificarDatos(listaPeliculas,T,listaActores,TA);
        break;
    case 3:
        borrarPelicula(listaPeliculas,T);
        break;
    case 4:
        ordenarPeliculasAnio(listaPeliculas,T);
        mostrarPeliculas(listaPeliculas,T);
        ordenarActoresPais(listaActores,TA);
        mostrarDescripcionActores(listaActores,TA);
        break;
    case 5:
        do{
        opcionDos=menuDeOpciones("1.Peliculas con genero y actor\n2.Peliculas con actor estadounidense\n3.Peliculas ordenadas por genero\n4.Cantidad de peliculas por genero\n5.El/los generos con menos peliculas\n6.Salir del menu informes\nQue desea informar?: ");
        switch(opcionDos)
            {
            case 1:
                mostrarPeliculasCompletas(listaPeliculas,T,listaGeneros,TG,listaActores,TA);
                break;
            case 2:
                mostrarPeliculasActorEEUU(listaPeliculas,T,listaActores,TA);
                break;
            case 3:
                mostrarPeliculasPorGenero(listaPeliculas,T,listaGeneros,TG);
                break;
            case 4:
                contarPeliculasPorGenero(listaPeliculas,T,listaGeneros,TG);
                break;
            case 5:
                mostrarGeneroMenosPeliculas(listaPeliculas,T,listaGeneros,TG);
                break;
            case 6:
                break;
            default:
                printf("Opcion invalida\n");
            }
            system("pause");
            system("cls");
        }while(opcionDos!=6);
        break;
    case 6:
        break;
    default:
        printf("Opcion invalida\n");
        break;


        }

system("pause");
system("cls");

  }while(opcion!=6);
  return 0;
}
