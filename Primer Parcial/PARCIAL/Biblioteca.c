#include "Biblioteca.h"
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

void agregarPelicula(ePelicula list[],int tam,eGenero generos[],int tg,eActor actores[],int ta)
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
        mostrarDescripcionActores(actores,ta);
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
    printf("%s\n",mensaje);
    fecha.dia=pedirEntero("Ingrese el dia: ");
     fecha.dia=validarEnteroPositivoRango(fecha.dia,1,31);
    fecha.mes=pedirEntero("Ingrese el mes: ");
     fecha.mes=validarEnteroPositivoRango(fecha.mes,1,12);
    fecha.anio=pedirEntero("Ingrese el anio: ");
     fecha.anio=validarEnteroPositivoRango(fecha.anio,1,2019);

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
    printf("Generos: \n");
    for(i=0; i<tam; i++)
    {
        mostrarDescripcionGenero(lista[i]);

    }
}
void mostrarDescripcionGenero(eGenero genero)
{
    printf("%d.%s\n",genero.id,genero.descripcion);
}
void mostrarDescripcionActores(eActor lista[],int tam)
{
    int i;
    printf("Actores: \n");
    for(i=0;i<tam;i++)
        {
            mostrarDescripcionActor(lista[i]);
        }
}
void mostrarDescripcionActor(eActor actor)
{
        printf("%d.%s,%s\n",actor.id,actor.nombre,actor.pais);
}

void modificarDatos(ePelicula lista[],int tam,eActor actores[],int ta)
{
    int id;
    int index;
    int opcion;
    id=pedirEntero("Ingrese el id de la pelicula a modificar: ");
    id=validarEnteroPositivoRango(id,1000,2000);
    index=buscarId(lista,tam,id);
    if(index==-1)
    {
        printf("No existe una pelicula con ese id");
    }
    else
    {
    do{
        opcion=menuDeOpciones("Que desea modificar?\n1.Titulo\n2.Actor\n3.Fecha de estreno\n4.Salir\n");
        switch(opcion)
        {   case 1:
                    pedirCadena("Ingrese el nuevo titulo: ",lista[index].titulo,75);
                    break;
            case 2:
                    mostrarDescripcionActores(actores,ta);
                    lista[index].actor=pedirEntero("Ingrese el nuevo actor: ");
                    lista[index].actor=validarEnteroPositivoRango(lista[index].actor,1,10);
                    break;
            case 3:
                    pedirFecha("Ingrese la nueva fecha de estreno: ",lista[index].estreno);
                    break;
            case 4:
                    break;
            default:
                    printf("No ingreso una opcinon valida\n");

                    break;

        }
    }while(opcion!=4);
    }
}

int buscarId(ePelicula lista[],int tam,int id)
{
    int i;
    int posicion=-1;
        for(i=0;i<tam;i++)
        {
            if(lista[i].id==id)
            {
                posicion=i;
            }

        }

    return posicion;
}
void hardcodearDatosPeliculas(ePelicula lista[], int tam)
{
    int i;
    char titulos[][70]= {"Avengers EndGame","Thor","Cellular","Men in Black 4","IronMan","13 Going on 30","Lucy","Nace una estrella","¿Dime con cuantos?","Guardianes de la galaxia","A perfect murder","La isla","Que paso ayer","Home Alone 3","Deadpool","Sherlock Holmes","Men in Black 3","Avengers infinity war","Grandes esperanzas","SWAT","XxX"};
    int dias[21]={20,10,2,10,5,7,9,8,4,20,6,3,5,6,7,5,2,6,8,20,11};
    int meses[21]={4,6,5,7,9,5,2,3,4,5,8,10,2,10,12,6,5,4,12,2,5};
    int anios[21]={2019,2013,2004,2019,2012,2004,2014,2018,2010,2014,1995,2005,2013,1997,2015,2011,2010,2017,1995,1998,1992};
    int actores[21]={2,5,4,5,2,3,1,9,4,9,7,1,9,1,10,2,10,10,7,6,6};
    int generos[21]={1,1,1,1,1,4,1,4,4,1,3,3,2,2,1,1,1,1,4,1,1};


    for(i=0; i<tam; i++)
    {
        lista[i].id =i+1000;
        strcpy(lista[i].titulo, titulos[i]);
        lista[i].estreno.dia=dias[i];
        lista[i].estreno.mes=meses[i];
        lista[i].estreno.anio=anios[i];
        lista[i].actor=actores[i];
        lista[i].genero=generos[i];
        lista[i].estado=OCUPADO;
    }
}
void borrarPelicula(ePelicula lista[],int tam)
{
    int id;
    int index;

    id=pedirEntero("Ingrese el id de la pelicula que desea borrar: ");
    id=validarEnteroPositivoRango(id,1000,20000);
    index=buscarId(lista,tam,id);
        if(index!=-1)
        {
            lista[index].id=LIBRE;
            printf("Pelicula eliminada\n");

        }
        else
        {
            printf("No hay una pelicula con ese id\n");
        }
}

void ordenarPeliculasAnio(ePelicula list[],int len)
{
    int i;
    int j;
    ePelicula auxPelicula;
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
        if(list[i].estado==OCUPADO&&list[j].estado==OCUPADO)
        {


            if(list[i].estreno.anio>list[j].estreno.anio)
            {
                auxPelicula=list[i];
                list[i]=list[j];
                list[j]=auxPelicula;
            }
        }
        }
    }
}
void ordenarActoresPais(eActor list[],int len)
{
    int i;
    int j;
    eActor auxActor;
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(strcmp(list[i].pais,list[j].pais)>0)
            {
                auxActor=list[i];
                list[i]=list[j];
                list[j]=auxActor;
            }
        }
    }
}

void mostrarPeliculas(ePelicula lista[],int tam)
{
    int i;
    printf("Peliculas: \n");
    for(i=0;i<tam;i++)
    {
     if(lista[i].estado==OCUPADO)
     {


        mostrarUnaPelicula(lista[i]);
     }
    }
}

void mostrarUnaPelicula(ePelicula pelicula)
{
    printf("%s,%d\n",pelicula.titulo,pelicula.estreno.anio);
}
