#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"

int main()
{

    FILE* miArchivo;
    eEmpleado* unEmpleado;
    unEmpleado=(eEmpleado*)malloc(sizeof(eEmpleado));
    unEmpleado->legajo=1001;
    strcpy(unEmpleado->nombre,"Nicolas");
    unEmpleado->sueldo=25000;


    write(miArchivo,unEmpleado);

    read(miArchivo);

        return 0;
}
