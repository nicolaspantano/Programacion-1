#include <stdio.h>

typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

} eEmployee;



/** \brief Hardcodea empleados
 *
 * \param lista[] eEmployee lista de empleados
 * \param tam int cantidad de empleados a hardcodear
 * \return void
 *
 */
void hardcodearDatosEmpleados(eEmployee lista[], int tam);

/** \brief Establece todos los isEmpty en TRUE
 *
 * \param eEmployee[] lista de empleados
 * \param int tamaño de la lista
 * \return void
 *
 */
void initEmployees(eEmployee[],int);
/** \brief añade empleados
 *
 * \param eEmployee[] lista de empleados
 * \param int tamaño de la lista
 * \return void
 *
 */
void addEmployee(eEmployee[],int);
/** \brief Encuentra un empleado segun su id
 *
 * \param eEmployee[] lista de empleados
 * \param int tamaño de la lista
 * \param int id a encontrar
 * \return int indice donde se encuentra dicho id
 *
 */
int findEmployeeById(eEmployee[],int,int);
/** \brief Baja logica de un empleado
 *
 * \param eEmployee[] lista de empleados
 * \param int tamaño de la lista
 * \return void
 *
 */
void removeEmployee(eEmployee[],int);
/** \brief Ordena empleados segun su sector y apellido
 *
 * \param eEmployee[] lista de empleados
 * \param int tamaño de la lista
 * \return void
 *
 */
void sortEmployees(eEmployee[],int);
/** \brief Ordena los empleados por sector
 *
 * \param eEmployee[] lista de empleados
 * \param int tamaño de la lista
 * \return void
 *
 */
void sortEmployeesSector(eEmployee[],int);
/** \brief Ordena los empleados ordenados por apellido, por cada sector
 *
 * \param eEmployee[] lista de empleados
 * \param int tamaño de la lista
 * \return void
 *
 */
void sortEmployeesLastNameAndSector(eEmployee[],int);
/** \brief Muestra la lista de empleados
 *
 * \param eEmployee[] lista de empleados
 * \param int tamaño de la lista
 * \return void
 *
 */
void printEmployees(eEmployee[], int);
/** \brief Encuentra un espacio libre
 *
 * \param eEmployee[] lista de empleados
 * \param int tamaño de la lista
 * \return int indice del lugar disponible
 *
 */
int findFree(eEmployee[], int);
/** \brief Muestra un empleado
 *
 * \param aEmployee eEmployee Empleado a mostrar
 * \return void
 *
 */
void printOneEmployee(eEmployee aEmployee);
/** \brief modifica los datos de un empleado
 *
 * \param eEmployee[] lista de empleados
 * \param int tamaño de la lista
 * \return void
 *
 */
void modificar(eEmployee[],int);
/** \brief Calcula cuantos empleados estan sobre el sueldo promedio y los muestra
 *
 * \param eEmployee[] lista de empleados
 * \param int tamaño de la lista
 * \param float sueldo promedio
 * \return void
 *
 */
void calcularEmpleadosSobrePromedio(eEmployee[],int,float);
/** \brief calcula el salario promedio y la suma total de salarios
 *
 * \param eEmployee[] lista de empleados
 * \param int tamaño de la lista
 * \return void
 *
 */
void calcularSalarios(eEmployee[],int);




