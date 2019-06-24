#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "eEmployee.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{
    char id[100],nombre[100], horasTrabajadas[100], empleo[100], edad[100];
    char sueldo[2]="0";
    Employee* aux;
    if(pFile!=NULL)
    {
        while(!feof(pFile))
        {
            fscanf(pFile, "%[^,],%[^,],%[^,],%[^,],%[^\n]\n", id,nombre,empleo,edad,horasTrabajadas);

            aux=employee_newParametros(id,nombre,empleo,edad,horasTrabajadas,sueldo);

            ll_add(pArrayListEmployee,aux);
        }
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
int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee)
{

    if(pFile != NULL && pArrayListEmployee != NULL)
    {
        while(!feof(pFile)-1)
        {
            Employee* aux = employee_new();
            fread(aux, sizeof(Employee), 1, pFile);
            ll_add(pArrayListEmployee, aux);
        }
    }

    return 1;
}
