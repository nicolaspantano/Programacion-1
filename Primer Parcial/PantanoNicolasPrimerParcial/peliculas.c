#include "peliculas.h"
#include "string.h"
#include "Pedir datos.h"
#define LIBRE 0
#define OCUPADO 1


void inicializarPeliculas(ePelicula lista[], int tam)
{
      int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }

}

void agregarPelicula(ePelicula list[],int tam,eGenero generos[],int tg)
{
    int i;
    char seguir='s';

   do{
    i=findFree(list,tam);
    if(i!=-1)
    {
        list[i].id=i+1000;
        pedirCadena("Ingrese el titulo: ", list[i].titulo,75);
        pedirFecha("Ingrese la fecha de estreno: ",list[i].estreno);
        mostrarDescripcionGeneros(generos,tg);
         list[i].genero=pedirEntero("Ingrese el genero: ");
         validarEnteroPositivoRango(list[i].genero,1,5);

         list[i].actor=pedirEntero("Ingrese el actor: ");
            validarEnteroPositivoRango(list[i].actor,1,10);
        list[i].estado= OCUPADO;

    }
    else
    {
        printf("No hay espacio");
    }
    seguir=pedirChar("Desea agregar mas peliculas? 's'=si, 'n'=no: ");
   }while(seguir=='s');

}

int findFree(ePelicula lista[], int tam)
{
     int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
void pedirFecha(char mensaje[], eFecha fecha)
{
    fecha.dia=pedirEntero("Ingrese el dia");
     validarEnteroPositivoRango(fecha.dia,1,31);
    fecha.mes=pedirEntero("Ingrese el mes");
     validarEnteroPositivoRango(fecha.mes,1,12);
    fecha.anio=pedirEntero("Ingrese el año");
     validarEnteroPositivoRango(fecha.anio,1,2025);

}
void hardcodearDatosGenero(eGenero lista[], int tam)
{
    int i;
    int ids[]= {1,2,3,4,5};
    char nombres[][50]= {"Accion","Comedia","Drama","Romance","Terror"};
    for(i=0; i<tam; i++)
    {
        lista[i].id = ids[i];
        strcpy(lista[i].descripcion, nombres[i]);
    }
}
void hardcodearDatosActores(eActor lista[], int tam)
{
    int i;
    int ids[]= {1,2,3,4,5,6,7,8,9,10};
    char nombres[][70]= {"Scarlett Johansson","Robert  Downey Jr","Mark Ruffalo","Chris Evans","Chris Hemsworth","Samuel Jackson","Gwyneth Paltrow","Paul Rudd","Bradley Cooper","Josh Brolin"};
    char nacionalidades[][50]={"Argentina","EEUU","Canada","EEUU","Argentina","EEUU","Canada","Argentina","EEUU","Canada"};

    for(i=0; i<tam; i++)
    {
        lista[i].id = ids[i];
        strcpy(lista[i].nombre, nombres[i]);
        strcpy(lista[i].pais, nacionalidades[i]);
    }
}
void mostrarDescripcionGeneros(eGenero lista[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrarDescripcionGenero(lista[i]);

    }
}
void mostrarDescripcionGenero(eGenero genero)
{
    printf("%d.%s\n",genero.id,genero.descripcion);
}
