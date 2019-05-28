#include "empleado.h"
void write(FILE* miArchivo,eEmpleado* unEmpleado)
{
    miArchivo=fopen("datos","w");
    fprintf(miArchivo,"%d,%s,%f\n",unEmpleado->legajo,unEmpleado->nombre,unEmpleado->sueldo);
    fclose(miArchivo);
}
void read(FILE* miArchivo)
{
    int i;
    char aux;
    eEmpleado* unEmpleado;
    unEmpleado=(eEmpleado*)malloc(sizeof(eEmpleado));
     miArchivo=fopen("datos","r");
    fscanf(miArchivo,"%d",&(unEmpleado->legajo));

    for(i=0;i<20;i++)
    {
        aux=fgetc(miArchivo);
        if(aux!=',')
        {
            unEmpleado->nombre[i]=aux;
        }
        else
        {
            break;
        }
    }
    fscanf(miArchivo,"%f",&(unEmpleado->sueldo));
    fclose(miArchivo);
     printf("%d,%s,%f",unEmpleado->legajo,unEmpleado->nombre,unEmpleado->sueldo);
}
