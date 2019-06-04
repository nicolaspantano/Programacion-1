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

    fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id,nombre,horasTrabajadas,sueldo);
    while(!feof(pFile))
    {
        fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id,nombre,horasTrabajadas,sueldo);

        Employee* aux=employee_newParametros(id,nombre,horasTrabajadas,sueldo);

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


    return 1;
}
