#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "eEmployee.H"
#include "parser.h"
#include "pedirDatos.h"
#include "controller.h"

int main()
{
    LinkedList* listaEmpleados;
    listaEmpleados=ll_newLinkedList();
    FILE* miArchivo;
    int opcion;
    int flag=0;


    do
    {
        opcion=menuDeOpciones("1.Cargar empleados\n2.Ordenar y mostrar empleados\n3.Calcular sueldos\n4.Listar con sueldos\n5.Salir\nElija una opcion:");

        switch(opcion)
        {
        case 1:
            if(ll_isEmpty(listaEmpleados)==1)
            {
                miArchivo=fopen("datos.csv","r");
                parser_EmployeeFromText(miArchivo,listaEmpleados);
                fclose(miArchivo);
                printf("Carga exitosa\n");
            }
            else
            {
                printf("La lista ya esta cargada\n");
            }
            break;
        case 2:
            if(ll_isEmpty(listaEmpleados)==0)
            {
                sortEmployee(listaEmpleados);
                listEmployee(listaEmpleados);
            }
            else
            {
                printf("Error. La lista no esta cargada\n");
            }
            break;
        case 3:
            if(ll_isEmpty(listaEmpleados)==0)
            {
                ll_map(listaEmpleados,laQueMapea);
                flag=1;
            }
            else
            {
                printf("Error. La lista no esta cargada\n");
            }
            break;
        case 4:
            if(ll_isEmpty(listaEmpleados)==0&&flag==1)
            {
                listEmployee(listaEmpleados);
            }
            else
            {
                printf("Error. La lista no esta cargada o no se calcularon los sueldos\n");
            }
            break;
        case 5:
            break;
        default:
            printf("Opcion incorrecta\n");
            break;
        }
        system("pause");
        system("cls");
    }
    while(opcion!=5);







    return 0;
}
