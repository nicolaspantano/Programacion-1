#include <stdio.h>
typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;

}eEmpleado;

void write(FILE*,eEmpleado*);
void read(FILE*);
