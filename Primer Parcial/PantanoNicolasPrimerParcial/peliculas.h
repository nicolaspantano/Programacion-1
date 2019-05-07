#include <stdio.h>
#define OCUPADO 1
#define LIBRE 0
typedef struct
{
    int id;
    int descripcion;
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
void agregarPelicula(ePelicula[],int,eGenero[],int);
void pedirFecha(char[],eFecha);
void hardcodearDatosGenero(eGenero lista[], int tam);
void mostrarDescripcionGeneros(eGenero lista[],int tam);
void mostrarDescripcionGenero(eGenero);
