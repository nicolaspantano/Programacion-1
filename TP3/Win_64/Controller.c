#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path, LinkedList* pArrayListEmployee)
{
    FILE* miArchivo;
    if(path!=NULL&&pArrayListEmployee!=NULL)
    {
        miArchivo=fopen(path,"r");
        parser_EmployeeFromText(miArchivo,pArrayListEmployee);
        fclose(miArchivo);
    }
    return 1;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path, LinkedList* pArrayListEmployee)
{

    FILE* miArchivo;

    if(path != NULL && pArrayListEmployee != NULL)
    {
        controller_loadFromText("data.csv",pArrayListEmployee);
        controller_saveAsBinary(path,pArrayListEmployee);

        miArchivo = fopen(path, "rb");
        parser_EmployeeFromBinary(miArchivo, pArrayListEmployee);
        fclose(miArchivo);

    }
    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    Employee* unEmpleado=employee_new();

    unEmpleado->id=ll_len(pArrayListEmployee)+1;

    printf("Ingrese el nombre: ");
    scanf("%s",unEmpleado->nombre);

    printf("Ingrese las horas trabajadas: ");
    scanf("%d",&(unEmpleado->horasTrabajadas));
    while(unEmpleado->horasTrabajadas<0)
    {
        printf("No existen horas negativas. Ingrese las horas trabajadas: ");
        scanf("%d",&(unEmpleado->horasTrabajadas));
    }

    printf("Ingrese el sueldo: ");
    scanf("%d",&(unEmpleado->sueldo));
    while(unEmpleado->sueldo<0)
    {
        printf("No existe un sueldo negativo.Ingrese el sueldo: ");
        scanf("%d",&(unEmpleado->sueldo));
    }

    ll_add(pArrayListEmployee,unEmpleado);


    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    int id;
    int opcion;
    Employee* empleado;
    printf("Ingrese el id del empleado que desea modificar: ");
    scanf("%d",&id);
    empleado=ll_get(pArrayListEmployee,id);
    if(empleado!=NULL)
    {
        do
        {
            printf("1.Nombre\n2.Horas trabajadas\n3.Sueldo\n4.Salir\nQue desea modificar?");
            scanf("%d",&opcion);

            switch(opcion)
            {
            case 1:
                printf("Ingrese el nuevo nombre: ");
                scanf("%s",empleado->nombre);
                break;
            case 2:
                printf("Ingrese las nuevas horas trabajadas: ");
                scanf("%d",&(empleado->horasTrabajadas));
                break;

            case 3:
                printf("Ingrese el nuevo sueldo: ");
                scanf("%d",&(empleado->sueldo));
                break;
            case 4:
                break;
            default:
                printf("Opcion invalida\n");
                break;
            }
        }
        while(opcion!=4);

    }
    else
    {
        printf("No existe un empleado con ese ID");
    }
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    int id;
    printf("Ingrese el ID del empleado que desea eliminar: ");
    scanf("%d",&id);

    ll_remove(pArrayListEmployee,id);

    printf("Empleado eliminado\n");





    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    int i;
    Employee* aux;
    for(i=1; i<ll_len(pArrayListEmployee); i++)
    {
        aux=ll_get(pArrayListEmployee,i);
        printf("%4d %15s %3d %6d\n",aux->id,aux->nombre,aux->horasTrabajadas,aux->sueldo);
    }
    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    int (*pFunc)(Employee*,Employee*);
    pFunc=employee_sort;
    ll_sort(pArrayListEmployee,pFunc,1);
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path, LinkedList* pArrayListEmployee)
{
    int i;
    Employee* aux;
    FILE* miArchivo;

    if(path!=NULL)
    {
        miArchivo=fopen(path,"w");
        fprintf(miArchivo,"id,nombre,horasTrabajadas,sueldo\n");
        for(i=0; i<ll_len(pArrayListEmployee); i++)
        {
            aux=ll_get(pArrayListEmployee,i);

            fprintf(miArchivo,"%d,%s,%d,%d\n",aux->id,aux->nombre,aux->horasTrabajadas,aux->sueldo);
        }


        fclose(miArchivo);
    }
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path, LinkedList* pArrayListEmployee)
{
    int i;
    Employee* aux;
    FILE* miArchivo;
    if(path!=NULL)
    {
        miArchivo=fopen(path,"wb");

        for(i=0; i<ll_len(pArrayListEmployee); i++)
        {
            aux=ll_get(pArrayListEmployee,i);
            fwrite(aux,sizeof(Employee),1,miArchivo);

        }


        fclose(miArchivo);
    }
    return 1;
}

