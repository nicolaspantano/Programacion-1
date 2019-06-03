#include "Employee.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
Employee* employee_new()
{
    Employee* unEmpleado=(Employee*)malloc(sizeof(Employee));
    return unEmpleado;
}

int employee_setId(Employee* this,int id)
{
    int estado=0;
    if(this!=NULL)
    {
        this->id=id;
        estado=1;
    }

    return estado;
}
int employee_getId(Employee* this,int* id)
{

    *id=this->id;
    return id;



}
int employee_setNombre(Employee* this,char* nombre)
{
    int estado=0;
    if(this!=NULL)
    {
        strcpy(this->nombre,nombre);
        estado=1;
    }

    return estado;

}
int employee_getNombre(Employee* this,char* nombre)
{

}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    int estado=0;
    if(this!=NULL)
    {
        this->horasTrabajadas=horasTrabajadas;
        estado=1;
    }

    return estado;
}
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{

}

int employee_setSueldo(Employee* this,int sueldo)
{
    int estado=0;
    if(this!=NULL)
    {
        this->sueldo=sueldo;
        estado=1;
    }

    return estado;
}
int employee_getSueldo(Employee* this,int* sueldo)
{

}



