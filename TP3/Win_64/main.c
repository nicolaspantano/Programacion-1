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
    FILE* miArchivo;
    miArchivo=fopen("data.csv","r");
    LinkedList* listaEmpleados = ll_newLinkedList();
    ll_add(listaEmpleados,&option);


    do
    {
        printf("Ingrese opcion: ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            parser_EmployeeFromText(miArchivo,listaEmpleados);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            fclose(miArchivo);
            ll_deleteLinkedList(listaEmpleados);
            break;
        default:
            break;
        }
    }
    while(option != 10);

    return 0;
}
