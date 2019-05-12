#include <stdio.h>
#define OCUPADO 1
#define LIBRE 0
typedef struct
{
    int id;
    char descripcion[30];
}eGenero;
typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;
typedef struct
{
    int id;
    char nombre[100];
    char pais[40];
}eActor;


typedef struct
{
    int id;
    char titulo[75];
    eFecha estreno;
    int genero;
    int actor;
    int estado;
} ePelicula;

int findFree(ePelicula lista[], int tam);
void inicializarPeliculas(ePelicula[], int);
void agregarPelicula(ePelicula[],int,eGenero[],int,eActor[],int);
void pedirFecha(char[],eFecha);
void hardcodearDatosGenero(eGenero lista[], int tam);
void hardcodearDatosActores(eActor[],int);
void mostrarDescripcionGeneros(eGenero lista[],int tam);
void mostrarDescripcionGenero(eGenero);
void mostrarDescripcionActores(eActor[],int);
void mostrarDescripcionActor(eActor);
void modificarDatos(ePelicula lista[],int tam,eActor actores[],int ta);
int buscarId(ePelicula lista[],int tam,int id);
void hardcodearDatosPeliculas(ePelicula lista[], int tam);
void borrarPelicula(ePelicula lista[],int tam);
void ordenarPeliculasAnio(ePelicula[],int len);
void ordenarActoresPais(eActor[],int len);
void mostrarPeliculas(ePelicula lista[],int tam);
void mostrarUnaPelicula(ePelicula pelicula);





