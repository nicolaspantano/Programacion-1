#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "eEmployee.H"
#include "parser.h"

int printEmployee(Employee* this)
{
    int id;
    char* nombre;
    char* empleo;
    int edad;
    int horasTrabajadas;
    float sueldo;

    id=employee_getId(this);
    nombre=employee_getNombre(this);
    empleo=employee_getEmpleo(this);
    edad=employee_getEdad(this);
    horasTrabajadas=employee_getHorasTrabajadas(this);
    sueldo=employee_getSueldo(this);

    if(sueldo==0)
    {
       printf("%4d %15s %15s %4d %6d\n",id,nombre,empleo,edad,horasTrabajadas);
    }
    else
    {
        printf("%4d %15s %15s %4d %6d %8.2f\n",id,nombre,empleo,edad,horasTrabajadas,sueldo);
    }

}
int listEmployee(LinkedList* pArrayListEmployee)
{
    int i;
    Employee* aux;
    for(i=0; i<ll_len(pArrayListEmployee); i++)
    {
        aux=ll_get(pArrayListEmployee,i);
        printEmployee(aux);
    }
    return 1;
}

int sortEmployee(LinkedList* pArrayListEmployee)
{
    ll_sort(pArrayListEmployee,employee_sort,1);
    return 1;
}
