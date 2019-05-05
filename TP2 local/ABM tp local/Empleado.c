
#include "Empleado.h"
#include "string.h"
#include "Pedir datos.h"
#define TRUE 0
#define FALSE 1

void hardcodearDatosEmpleados(eEmployee lista[], int tam)
{
    int i;
    int id[]= {0,1,2,3,4};
    char nombres[][50]= {"Carlos","Maria","Carlos","Pedro","Juan"};
    char apellidos[][50]={"Mendez","Perez","Gomez","Pantano","Rodriguez"};
    float sueldosBruto[]= {22000,22000,15000,40000,10000};
    int sector[]={3,1,2,1,3};

    for(i=0; i<tam; i++)
    {
        lista[i].id = id[i];
        strcpy(lista[i].name, nombres[i]);
        strcpy(lista[i].lastName, apellidos[i]);
        lista[i].sector= sector[i];

        lista[i].salary = sueldosBruto[i];

        lista[i].isEmpty = FALSE;




    }
}

void initEmployees(eEmployee list[], int len)
{
      int i;
    for(i=0; i<len; i++)
    {
        list[i].isEmpty = TRUE;
    }

}

int findFree(eEmployee lista[], int tam)
{
     int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].isEmpty==TRUE)
        {
            index = i;
            break;
        }
    }
    return index;
}


void addEmployee(eEmployee list[],int len)
{
    int i;
    char seguir='s';

   do{
    i=findFree(list,len);
    if(i!=-1)
    {
        list[i].id=i;
        pedirCadena("Ingrese nombre: ", list[i].name,51);
        pedirCadena("Ingrese apellido: ", list[i].lastName,51);
        list[i].salary=pedirFloat("Ingrese salario: ");
        list[i].sector=pedirEntero("Ingrese el sector: ");

        list[i].isEmpty= FALSE;

    }
    else
    {
        printf("No hay espacio");
    }
    seguir=pedirChar("Desea agregar mas empleados? 's'=si, 'n'=no: ");
   }while(seguir=='s');

}

int findEmployeeById(eEmployee list[], int tam,int id)
{
        int i;
    int posicion=-1;
        for(i=0;i<tam;i++)
        {
            if(list[i].id==id)
            {
                posicion=i;
            }

        }

    return posicion;
}

void modificar(eEmployee lista[], int tam)
{
    int id;
    int posicion;
    int opcion;
    id=pedirEntero("Ingrese el id del empleado a modificar: ");
    posicion=findEmployeeById(lista,tam,id);
        if(posicion!=-1)
        {
            opcion=menuDeOpciones("Que desea modificar?\n1.Nombre\n2.Apellido\n3.Salario\n4.Sector\nElija una opcion: ");
            switch(opcion)
            {
            case 1:
                pedirCadena("Ingrese el nuevo nombre: ",lista[posicion].name,tam);
                break;
            case 2:
                pedirCadena("Ingrese el nuevo apellido: ",lista[posicion].lastName,tam);
                break;
            case 3:
                lista[posicion].salary=pedirFloat("Ingrese el nuevo sueldo: ");
                break;
            case 4:
                lista[posicion].sector=pedirEntero("Ingrese el nuevo sector: ");
                break;
            default:
                    printf("Opcion erronea");
                break;
            }
        }
        else
        {
            printf("No hay empleado con ese id");
        }
}

void removeEmployee(eEmployee list[], int tam)
{
     int id;
    int posicion;
    id=pedirEntero("Ingrese el id del empleado a dar de baja: ");
    posicion=findEmployeeById(list,tam,id);
     if(posicion!=-1)
     {
         list[posicion].isEmpty=TRUE;
     }
     else
     {
         printf("No hay un empleado con ese id");
     }
}

void sortEmployeesLastNameAndSector(eEmployee list[],int len)
{
    int i;
    int j;
    char auxCadena[51];
    int auxInt;
    float auxFloat;

    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(list[i].isEmpty==FALSE&&list[j].isEmpty==FALSE&&list[i].sector==list[j].sector)
            {


            if(strcmp(list[i].lastName,list[j].lastName)>0)
            {
                strcpy(auxCadena, list[i].lastName);
                strcpy(list[i].lastName, list[j].lastName);
                strcpy(list[j].lastName, auxCadena);

                auxInt = list[i].sector;
                list[i].sector = list[j].sector;
                list[j].sector = auxInt;

                strcpy(auxCadena, list[i].name);
                strcpy(list[i].name, list[j].name);
                strcpy(list[j].name, auxCadena);

                auxInt = list[i].id;
                list[i].id = list[j].id;
                list[j].id = auxInt;

                auxFloat = list[i].salary;
                list[i].salary = list[j].salary;
                list[j].salary = auxFloat;
            }
        }
        }
    }

}

void sortEmployeesSector(eEmployee list[],int len)
{
    int i;
    int j;
    char auxCadena[51];
    int auxInt;
    float auxFloat;
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
        if(list[i].isEmpty==FALSE&&list[j].isEmpty==FALSE)
        {


            if(list[i].sector>list[j].sector)
            {
                strcpy(auxCadena, list[i].lastName);
                strcpy(list[i].lastName, list[j].lastName);
                strcpy(list[j].lastName, auxCadena);

                auxInt = list[i].sector;
                list[i].sector = list[j].sector;
                list[j].sector = auxInt;

                strcpy(auxCadena, list[i].name);
                strcpy(list[i].name, list[j].name);
                strcpy(list[j].name, auxCadena);

                auxInt = list[i].id;
                list[i].id = list[j].id;
                list[j].id = auxInt;

                auxFloat = list[i].salary;
                list[i].salary = list[j].salary;
                list[j].salary = auxFloat;
            }
        }
        }
    }

}
void sortEmployees(eEmployee list[], int len)
{
    sortEmployeesSector(list,len);

        sortEmployeesLastNameAndSector(list, len);


}

void printOneEmployee(eEmployee aEmployee)
{
    printf("Apellido: %s\nNombre: %s\nSueldo: %.2f\nSector: %d\n",aEmployee.lastName,aEmployee.name,aEmployee.salary,aEmployee.sector);
}

void printEmployees(eEmployee list[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty!=TRUE)
        {
            printOneEmployee(list[i]);
        }

    }
}
void calcularEmpleadosSobrePromedio(eEmployee list[],int len, float promedio)
{
    int i;
    int cantEmpleadosSobrePromedio=0;
        for(i=0;i<len;i++)
        {
            if(list[i].isEmpty==FALSE)
            {
                if(list[i].salary>promedio)
                {
                    cantEmpleadosSobrePromedio++;
                }
            }
        }
        printf("%d empleados superan el sueldo promedio\n",cantEmpleadosSobrePromedio);
}
void calcularSalarios(eEmployee list[], int len)
{
    int i;
    float salarioTotal=0;
    int cantEmpleados=0;
    float promedioSalarios;
        for(i=0;i<len;i++)
        {
            if(list[i].isEmpty==FALSE)
            {
                salarioTotal+=list[i].salary;
                cantEmpleados++;
            }
        }
        promedioSalarios=salarioTotal/cantEmpleados;

        printf("El total de los salarios es: %.2f\n",salarioTotal);
        printf("El salario promedio es: %.2f\n",promedioSalarios);
        calcularEmpleadosSobrePromedio(list,len,promedioSalarios);

}
