#include <stdio.h>
#include <string.h>
#include "empleado.h"
#include "file.h"

int main()
{
    eEmpleado* unEmpleado;
    FILE* miArchivo;

    unEmpleado=add_eEmpleado();
    set_legajo(unEmpleado,1001);
    set_nombre(unEmpleado,"Nicolas");
    set_sueldo(unEmpleado,25000);

    write(miArchivo,unEmpleado);
    //read(miArchivo);

    //bwrite(miArchivo,"Nicolas Pantano");
    //bread(miArchivo);



    return 0;
}
