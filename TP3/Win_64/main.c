#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option;
    LinkedList* listaEmpleados = ll_newLinkedList();
    ll_add(listaEmpleados,&option);


    do
    {
        printf("Ingrese opcion: ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            controller_loadFromText("data.csv",listaEmpleados);
            printf("Carga exitosa");
            break;
        case 2:
            break;
        case 3:
            controller_addEmployee(listaEmpleados);
            printf("Empleado a�adido exitosamente\n");
            break;
        case 4:
            controller_editEmployee(listaEmpleados);
            printf("Edicion exitosa\n");
            break;
        case 5:
            controller_removeEmployee(listaEmpleados);
            break;
        case 6:
            controller_ListEmployee(listaEmpleados);
            break;
        case 7:
            controller_sortEmployee(listaEmpleados);
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            ll_deleteLinkedList(listaEmpleados);
            break;
        default:
            printf("Opcion invalida");
            break;
        }
    system("pause");
    system("cls");
    }
    while(option != 10);

    return 0;
}
