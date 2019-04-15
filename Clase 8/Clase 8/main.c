#include <stdio.h>
#include <stdlib.h>
#define T 3
#define LIBRE 0
#define OCUPADO 1
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
    int estado;
}eEmpleado;

void mostrarEmpleados(eEmpleado[],int);
void cargarEmpleados (eEmpleado[],int);
void mostrarUnEmpleado(eEmpleado);
void inicializarEmpleados(eEmpleado[],int);
int buscarLibre(eEmpleado[],int);
int pedirEntero(char texto[]);
int buscarUno(eEmpleado[],int,int);
int borrarUno(eEmpleado[],int,int);

int main()
{
    char seguir='s';
    int opcion;
    eEmpleado lista[T];





do
    {
        printf("Elija una opcion\n");

        printf("1.Inicializar empleados\n");
        printf("2.Cargar empleados\n");
        printf("3.Mostrar empleados\n");
        printf("4.Salir\n");

        opcion=pedirEntero("Ingrese una opcion: ");
            switch(opcion)
                {
                case 1:
                        inicializarEmpleados(lista,T);
                        break;
                case 2:
                        cargarEmpleados(lista,T);
                        break;
                case 3:
                        mostrarEmpleados(lista,T);
                        break;
                case 4:
                        seguir='n';
                        break;

                default:
                        printf("No ingreso una opcion correcta\n");
                        break;

                }
    system("pause");
    system("cls");
    fflush(stdin);


    }while(seguir=='s');

return 0;
}
int borrarUno(eEmpleado miEmpleado[],int tam,int legajo)
{
    int posicion;
    posicion=buscarUno(miEmpleado,tam,legajo);
    if(posicion==-1)
    {
        return 0;
    }
    else
    {
        miEmpleado[posicion].estado=LIBRE;
    return 1;
    }

}

int buscarUno(eEmpleado miEmpleado[],int tam,int legajo)
{
    int i;
    int posicion=-1;
        for(i=0;i<tam;i++)
        {
            if(miEmpleado[i].legajo==legajo)
            {
                posicion=i;
            }

        }

    return posicion;

}


int pedirEntero(char texto[])
{
    int unEntero;
    printf("%s",texto);
    scanf("%d",&unEntero);

    return unEntero;
}
int buscarLibre(eEmpleado empleados[],int tam)
{   int i;
    int primerLibre=-1;
    for(i=0;i<tam;i++)
    {
        if(empleados[i].estado==LIBRE)
        {
            primerLibre=i;
            break;
        }
    }
    return primerLibre;
}

void inicializarEmpleados(eEmpleado empleados[],int tam)
{
    int i;
    for (i=0;i<tam;i++)
    {
        empleados[i].estado=LIBRE;

    }
}

void mostrarUnEmpleado(eEmpleado miEmpleado)
{
    printf("%d--%s--%c--%.2f--%.2f\n",miEmpleado.legajo,miEmpleado.nombre,miEmpleado.sexo,miEmpleado.sueldoBruto,miEmpleado.sueldoNeto);
}

void mostrarEmpleados(eEmpleado miEmpleado[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
        {
    mostrarUnEmpleado(miEmpleado[i]);

    }
}

void cargarEmpleados(eEmpleado miEmpleado[],int tam)
{
    int i;
    int libre;
       for(i=0;i<tam;i++)
    {
        libre=buscarLibre(miEmpleado,tam);

    printf("Ingrese legajo: ");
    scanf("%d",&miEmpleado[libre].legajo);
    printf("Ingre nombre: ");
    fflush(stdin);
    gets(miEmpleado[libre].nombre);
    printf("Ingrese el sexo: ");
    fflush(stdin);
    scanf("%c",&miEmpleado[libre].sexo);
    printf("Ingrese el sueldo bruto: ");
    scanf("%f",&miEmpleado[libre].sueldoBruto);
    miEmpleado[libre].sueldoNeto=miEmpleado[libre].sueldoBruto*0.85;
    miEmpleado[libre].estado=OCUPADO;

    }
}
