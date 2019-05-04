
#include <stdlib.h>
#include "Empleado.h"

#define T 10


int menuDeOpciones(char[]);

/*
Informes:

1- EL/LOS Empleados con mayor sueldo.
2- Cantidad de empleados que se llamen carlos y ganen mas de 20000
*/

int main()
{
    eEmployee lista[T];
    initEmployees(lista,T);
    int opcion;

    hardcodearDatosEmpleados(lista,4);
    do{
    opcion=menuDeOpciones("Sectores: 1-Contabilidad,2-Sistemas,3-RRHH\n1.Alta\n2.Modificar\n3.Baja\n4.Informar\n5.Salir\nElija una opcion: ");
    switch(opcion)
    {

        case 1:
                addEmployee(lista,T);
                break;

        case 2:
                modificar(lista,T);
                break;

        case 3:
                removeEmployee(lista,T);
                break;

        case 4:
                sortEmployees(lista,T);
                printEmployees(lista,T);
                calcularSalarios(lista,T);
                break;


        default:
                printf("Opcion incorrecta");
                break;




        }


system("pause");
system("cls");



    }while(opcion!=5);
/*
    int indice;
    int opcion;

    eEmpleado lista[T];
    inicializarEmpleados(lista,T);


hardcodearDatosEmpleados(lista,6,sectores);
    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Informar\n10.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                cargarEmpleado(lista,  T,sectores,3);

            break;
            case 2:
                borrarEmpleado(lista, T, 3);
                break;
            case 3:

                modificar(lista, T, 3);
            break;

            case 4:
                mostrarListaEmpleados(lista, T, sectores, 3);
                break;
            case 5:

                mostrarEmpleadosSueldoMaximo(lista,T);
                printf("La cantidad de carlos es: %d\n", contarCarlos(lista,T));
                mostrarSectores(sectores,3,lista,T);
                mostrarSueldosSectores(sectores,3,lista,T);
                mostrarSectorMasEmpleados(sectores,3,lista,T);

                break;


        }
    }while(opcion!=10);



    //inicializarEmpleados(lista, T);*/




    return 0;
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}
