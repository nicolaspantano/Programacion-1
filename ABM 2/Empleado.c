
#include "Empleado.h"

#include "string.h"

void cargarEmpleado(eEmpleado lista[], int tam, eSector sectores[],int ts)
{
    int i;

    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);
        printf("Ingrese cantidad de horas: ");
        scanf("%d", &lista[i].cantidadHoras);
        printf("Ingrese sector: \n");
        mostrarDescripcionSectores(sectores,ts);
        scanf("%d",&lista[i].idSector);
        lista[i].sueldoBruto = sectores[lista[i].idSector].valor*lista[i].cantidadHoras;
        lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;

        lista[i].estado = OCUPADO;

    }
    else
    {
        printf("No hay espacio");
    }



}

void mostrarListaEmpleados(eEmpleado lista[], int tam, eSector sectores[], int ts)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i], sectores, ts);
        }

    }
}
void mostrarEmpleado(eEmpleado unEmpleado, eSector sectores[], int ts)
{

    char descripcionSector[20];
    int i;

    for(i=0; i<ts; i++)
    {
        if(unEmpleado.idSector==sectores[i].idSector)
        {
            strcpy(descripcionSector, sectores[i].descripcion);
            break;
        }
    }

    printf("%4d %10s %c %4.2f %4.2f   %s\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto,descripcionSector);






}
int buscarLibre(eEmpleado lista[], int tam)
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
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

void hardcodearDatosEmpleados(eEmpleado lista[], int tam,eSector sectores[])
{
    int i;
    int legajos[]= {1,8,9,7,2,4};
    char nombres[][50]= {"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]= {'M','F','M','M','M','M'};
    //float sueldosBruto[]= {22000,22000,15000,4000,21000,6000};
    int sector[]={0,1,2,0,1,1};
    int cantHoras[]={120,128,128,116,114,130};

    eFecha unaFecha = {22,04,2019};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].idSector = sector[i];
        lista[i].cantidadHoras = cantHoras[i];
        lista[i].sueldoBruto = sectores[lista[i].idSector].valor*lista[i].cantidadHoras;
        lista[i].sueldoNeto = lista[i].sueldoBruto * 0.85;
        lista[i].estado = OCUPADO;




    }




}
void modificar(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {


            printf("Ingrese un nuevo sueldo bruto: ");
            scanf("%f", &lista[i].sueldoBruto);

            lista[i].sueldoNeto = lista[i].sueldoBruto*0.85;


            loEncontro = 1;
            break;//modifcar
        }

    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }





}

void borrarEmpleado(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {

            lista[i].estado = LIBRE;


            loEncontro = 1;
            break;//modifcar
        }

    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }

}

float buscarSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int flag = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(flag==0 || lista[i].sueldoBruto>maximo)
            {
                maximo = lista[i].sueldoBruto;
                flag = 1;
            }
        }

    }



    return maximo;

}
void mostrarEmpleadosSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int i;

    maximo = buscarSueldoMaximo(lista, tam);

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO && maximo == lista[i].sueldoBruto)
        {
            //mostrarEmpleado(lista[i]);

        }
    }

}

int contarCarlos(eEmpleado lista[], int tam)
{
    int contadorCarlos = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(stricmp(lista[i].nombre,"carlos")==0 && lista[i].sueldoBruto>20000)
            {
                contadorCarlos++;
            }
        }
    }

    return contadorCarlos;
}



int buscarLegajo(eEmpleado lista[], int tam, int legajo)
{

}
void mostrarDescripcionSectores(eSector sectores[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrarDescripcionSector(sectores[i]);

    }
}
void mostrarDescripcionSector(eSector sector)
{


    printf("%d.%s\n",sector.idSector,sector.descripcion);


}
void mostrarSectores(eSector sectores[], int ts,eEmpleado empleados[],int tam)
{
    int i;
    for(i=0; i<ts; i++)
    {
                mostrarSector(sectores[i],empleados,tam);
    }
}
void mostrarSector(eSector sector,eEmpleado empleados[],int tam)
{
    int i;
    mostrarDescripcionSector(sector);
    for(i=0;i<tam;i++)
    {
        if(empleados[i].idSector==sector.idSector)
        {
            printf("%s\n",empleados[i].nombre);
        }
    }
}
void mostrarSueldosSectores(eSector sectores[], int ts,eEmpleado empleados[],int tam)
{
    int i;
    for(i=0; i<ts; i++)
    {
                mostrarSueldoSector(sectores[i],empleados,tam);
    }
}
void mostrarSueldoSector(eSector sector,eEmpleado empleados[],int tam)
{
     int i;
     float totalSueldos=0;
    mostrarDescripcionSector(sector);
    for(i=0;i<tam;i++)
    {
        if(empleados[i].estado==OCUPADO)
        {


        if(empleados[i].idSector==sector.idSector)
        {
            totalSueldos+=empleados[i].sueldoBruto;
        }
        }
    }
    printf("El total de sueldos es: %.2f\n",totalSueldos);
}
void mostrarSectorMasEmpleados(eSector sectores[],int ts,eEmpleado empleados[],int tam)
{
    int i=0;
    int j=0;
    int empleadosMax;
    char sectorMax[30];
    int flag=0;
    int cantEmpleados=0;
    for(i=0;i<ts;i++)
    {
        for(j=0;j<tam;j++)
        {
            if(empleados[j].estado==OCUPADO)
            {
                if(empleados[j].idSector==sectores[i].idSector)
                {
                    cantEmpleados++;
                }
            }

        }

        if(flag==0||cantEmpleados>empleadosMax)
        {
            strcpy(sectorMax,sectores[i].descripcion);
            empleadosMax=cantEmpleados;
            flag=1;
            cantEmpleados=0;
        }
    }
    printf("El sector con mayor empleados es: %s\n",sectorMax);
}
