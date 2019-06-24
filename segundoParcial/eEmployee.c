#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "eEmployee.H"

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
int employee_getId(Employee* this)
{
    return this->id;


}

int employee_setEmpleo(Employee* this,char* empleo)
{
    int estado=0;
    if(this!=NULL)
    {
        strcpy(this->empleo,empleo);
        estado=1;
    }

    return estado;

}
int employee_getEmpleo(Employee* this)
{
    return this->empleo;
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
int employee_getNombre(Employee* this)
{
    return this->nombre;
}

int employee_setEdad(Employee* this,int edad)
{
    int estado=0;
    if(this!=NULL)
    {
        this->edad=edad;
        estado=1;
    }

    return estado;
}
int employee_getEdad(Employee* this)
{
    return this->edad;

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
int employee_getHorasTrabajadas(Employee* this)
{
    return this->horasTrabajadas;
}
int employee_setSueldo(Employee* this,float sueldo)
{
    int estado=0;
    if(this!=NULL)
    {
        this->sueldo=sueldo;
        estado=1;
    }
    return estado;
}
float employee_getSueldo(Employee* this)
{
    return this->sueldo;
}
Employee* employee_newParametros(char* idStr,char* nombreStr,char* empleoStr,char* edadStr,char* horasTrabajadasStr,char* sueldoStr)
{
    Employee* unEmpleado=(Employee*)malloc(sizeof(Employee));

    employee_setId(unEmpleado,atoi(idStr));
    employee_setNombre(unEmpleado,nombreStr);
    employee_setEmpleo(unEmpleado,empleoStr);
    employee_setEdad(unEmpleado,atoi(edadStr));
    employee_setHorasTrabajadas(unEmpleado,atoi(horasTrabajadasStr));
    employee_setSueldo(unEmpleado,atof(sueldoStr));


    return unEmpleado;
}
int employee_sort(Employee* e1,Employee* e2)
{
    return strcmp(employee_getNombre(e1),employee_getNombre(e2));
}
int laQueMapea(Employee* this)
{
    int estado=0;
    float horasTrabajadas;
    horasTrabajadas=employee_getHorasTrabajadas(this);
    if(this!=NULL)
    {
        employee_setSueldo(this,horasTrabajadas*300);
        estado=1;
    }



    return estado;
}
