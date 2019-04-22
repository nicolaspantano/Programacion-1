
#include "Empleado.h"
#include <string.h>


void cargarEmpleado(eEmpleado lista[], int tam)
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
        printf("Ingrese sueldo bruto: ");
        scanf("%f", &lista[i].sueldoBruto);

        lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;

        lista[i].estado = OCUPADO;

    }
    else
    {
        printf("No hay espacio");
    }



}

void mostrarListaEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i]);
        }

    }
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

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

void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]={1,8,9,7,2,4};
    char nombres[][50]={"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]={'M','F','M','M','M','M'};
    float sueldosBruto[]={22000,22000,15000,4000,21000,6000};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;

    }
}


void modificarDatos(eEmpleado lista[],int tam)
{
    int legajo;
    int index;
    int opcion;
    printf("Ingrese el legajo del empleado que desea modificar: ");
    scanf("%d",&legajo);
    index=buscarLegajo(lista,tam,legajo);
    if(index==-1)
    {
        printf("No existe un empleado con ese legajo");
    }
    else
    {
    do{
        opcion=menuDeOpciones("Que desea modificar?\n1.Nombre\n2.Sexo\n3.Sueldo bruto\n4.Salir\n");
        switch(opcion)
        {   case 1:
                    printf("Ingrese el nuevo nombre: ");
                    fflush(stdin);
                    scanf("%s",lista[index].nombre);
                    break;
            case 2:
                    printf("Ingrese el nuevo sexo: ");
                    fflush(stdin);
                    scanf("%c",&lista[index].sexo);
                    break;
            case 3:
                    printf("Ingrese el nuevo sueldo bruto: ");
                    scanf("%f",&lista[index].sueldoBruto);
                    lista[index].sueldoNeto=lista[index].sueldoBruto*0.85;
                    break;
            case 4:
                    printf("Saliendo...\n");
                    break;
            default:
                    printf("No ingreso una opcinon valida\n");

                    break;

        }
    }while(opcion!=4);
    }
}

int buscarLegajo(eEmpleado lista[],int tam,int valor)
{
    int i;
    int posicion=-1;
        for(i=0;i<tam;i++)
        {
            if(lista[i].legajo==valor)
            {
                posicion=i;
            }

        }

    return posicion;

}

float buscarMaximo(eEmpleado vector[],int tam)
{
    int i;
    int flag=0;
    float maximo;
    for(i=0; i<tam; i++)
    {
        if(vector[i].estado==OCUPADO)
        {


            if(flag==0||vector[i].sueldoBruto >maximo)
            {
                maximo=vector[i].sueldoBruto;
                flag=1;
            }
        }
    }
    return maximo;

}
void mostrarEmpleadosMax(eEmpleado lista[],int tam)
{
    int i;
    int maximo;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(buscarMaximo(lista,tam)==lista[i].sueldoBruto)
            {
                mostrarEmpleado(lista[i]);
            }
        }
    }

}

int buscarEmpleado(eEmpleado lista[],int tam)
{
    int i;
    int cantidad=0;
        for(i=0;i<tam;i++)
        {
            if(stricmp(lista[i].nombre,"carlos")==0&&lista[i].sueldoBruto>20000)
            {
               cantidad++;
            }

        }

    return cantidad;

}
