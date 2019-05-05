
#include <stdlib.h>
#include "Empleado.h"
#include "Pedir datos.h"

#define T 10




int main()
{
    eEmployee lista[T];
    initEmployees(lista,T);
    int opcion;
    int flag=0;

    do{
    opcion=menuDeOpciones("Sectores: 1-Contabilidad,2-Sistemas,3-RRHH\n1.Alta\n2.Modificar\n3.Baja\n4.Informar\n5.Salir\nElija una opcion: ");
    switch(opcion)
    {

        case 1:
                addEmployee(lista,T);
                flag=1;
                break;

        case 2:
                if(flag==1)
                {
                    modificar(lista,T);
                }
                else
                {
                    printf("Se debe ingresar al menos un empleado primero\n");
                }
                break;

        case 3:
                if(flag==1)
                {
                removeEmployee(lista,T);
                }
                else
                {
                    printf("Se debe ingresar al menos un empleado primero\n");
                }
                break;

        case 4:
                if(flag==1)
                {
                sortEmployees(lista,T);
                printEmployees(lista,T);
                calcularSalarios(lista,T);
                }
                else
                {
                    printf("Se debe ingresar al menos un empleado primero\n");
                }
                break;

        case 5:
                break;


        default:
                printf("Opcion incorrecta");
                break;




        }


system("pause");
system("cls");



    }while(opcion!=5);

    return 0;
}

