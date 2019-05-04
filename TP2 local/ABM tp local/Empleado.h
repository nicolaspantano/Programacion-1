#include <stdio.h>

#define LIBRE 0
#define OCUPADO 1



typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

} eEmployee;



void hardcodearDatosEmpleados(eEmployee lista[], int tam);

void initEmployees(eEmployee[],int);
void addEmployee(eEmployee[],int);
int findEmployeeById(eEmployee[],int,int);
void removeEmployee(eEmployee[],int);
void sortEmployees(eEmployee[],int);
void sortEmployeesSector(eEmployee[],int);
void sortEmployeesLastName(eEmployee[],int);
void printEmployees(eEmployee[], int);
int findFree(eEmployee[], int);
void printOneEmployee(eEmployee aEmployee);
void modificar(eEmployee[],int);

/*void mostrarEmpleado(eEmpleado, eSector[], int);
void cargarEmpleado(eEmpleado[], int, eSector[],int);
void mostrarListaEmpleados(eEmpleado[], int, eSector[], int);

int buscarLibre(eEmpleado[], int);
void inicializarEmpleados(eEmpleado[], int);
void hardcodearDatosEmpleados(eEmpleado[], int,eSector[]);
void modificar(eEmpleado[], int, int);
int buscarLegajo(eEmpleado[], int, int);
void borrarEmpleado(eEmpleado[], int, int);

float buscarSueldoMaximo(eEmpleado[],int);
void mostrarEmpleadosSueldoMaximo(eEmpleado[],int);
int contarCarlos(eEmpleado[],int);

void mostrarDescripcionSectores(eSector[],int);
void mostrarDescripcionSector(eSector);

void mostrarSectores(eSector[],int,eEmpleado[],int);
void mostrarSector(eSector,eEmpleado[],int);

void mostrarSectorMasEmpleados(eSector[],int,eEmpleado[],int);*/





