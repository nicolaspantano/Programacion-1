#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    char id[100],nombre[100], horasTrabajadas[100], sueldo[100];
    Employee* aux;
    fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id,nombre,horasTrabajadas,sueldo);
    while(!feof(pFile))
    {
        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id,nombre,horasTrabajadas,sueldo);

        aux=employee_newParametros(id,nombre,horasTrabajadas,sueldo);

        ll_add(pArrayListEmployee,aux);
    }

    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{
    Employee* aux;


    while(!feof(pFile))
    {
        fread(aux,sizeof(Employee),1,pFile);
        aux=employee_new();
        ll_add(pArrayListEmployee,aux);
    }

    return 1;
}
