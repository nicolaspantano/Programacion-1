
#include <stdlib.h>
#include "Empleado.h"

#define T 6


int menuDeOpciones(char[]);


int main()
{


    int indice;
    int opcion;
    float sueldoMaximo;
    int empleadosCarlos;

    eEmpleado lista[T];
    inicializarEmpleados(lista,T);


    hardcodearDatosEmpleados(lista,T);
    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Informar\n6.Salir\nElija una opcion: ");
        switch(opcion)
        {
        case 1:
            cargarEmpleado(lista,  T);

            break;
        case 3:
            modificarDatos(lista,T);
            break;
        case 4:
            mostrarListaEmpleados(lista,T);
            break;
        case 5:
            mostrarEmpleadosMax(lista,T);

            empleadosCarlos=buscarEmpleado(lista,T);
            printf("%d se llaman carlos y ganan mas de 2000\n",empleadosCarlos);
            break;
        }
        system ("pause");
        system("cls");
    }
    while(opcion!=6);



    //inicializarEmpleados(lista, T);




    return 0;
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}
