#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
}eEmpleado;

int main()
{
    eEmpleado empleado1={10,"Martin",'m',15000, 12000};
    eEmpleado empleado2;

    printf("Ingrese legajo: ");
    scanf("%d",&empleado1.legajo);
    printf("Ingre nombre: ");
    gets(empleado1.nombre);
    printf("Ingrese el sexo");
    fflush(stdin);
    scanf("%c",empleado1.sexo);
    printf("Ingrese el sueldo bruto");
    scanf("%f",empleado1.sueldoBruto);
    empleado1.sueldoNeto=empleado1.sueldoBruto*0.85;

    empleado2=empleado1;



    printf("%d--%s--%c--%f--%f",empleado1.legajo,empleado1.nombre,empleado1.sexo,empleado1.sueldoBruto,empleado1.sueldoNeto);
    printf("%d--%s--%c--%f--%f",empleado2.legajo,empleado2.nombre,empleado2.sexo,empleado2.sueldoBruto,empleado2.sueldoNeto);
    return 0;
}
