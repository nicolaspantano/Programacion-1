#include "empleado.h"
#include <stdlib.h>
#include <string.h>

eEmpleado* add_eEmpleado()
{
    eEmpleado* unEmpleado;
    unEmpleado=(eEmpleado*)malloc(sizeof(eEmpleado));
    return unEmpleado;
}

void set_legajo(eEmpleado* this,int legajo)
{
    this->legajo=legajo;
}
void set_nombre(eEmpleado* this,char nombre[])
{
    strcpy(this->nombre,nombre);
}
void set_sueldo(eEmpleado* this,float sueldo)
{
    this->sueldo=sueldo;
}
