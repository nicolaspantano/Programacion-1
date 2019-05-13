#include <stdio.h>
#define OCUPADO 1
#define LIBRE 0
typedef struct
{
    int id;
    char descripcion[30];
}eGenero;
typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;
typedef struct
{
    int id;
    char nombre[100];
    char pais[40];
}eActor;


typedef struct
{
    int id;
    char titulo[75];
    eFecha estreno;
    int genero;
    int actor;
    int estado;
} ePelicula;

/** \brief Busca un lugar libre
 *
 * \param lista[] ePelicula array de peliculas
 * \param tam int tamaño del array
 * \return int indice del lugar disponible/-1 si no hay lugar
 *
 */
int findFree(ePelicula lista[], int tam);
/** \brief Inicializa todos los estados en LIBRE
 *
 * \param ePelicula[] array de peliculas
 * \param int tamaño de la lista
 * \return void
 *
 */
void inicializarPeliculas(ePelicula[], int);
/** \brief
 *
 * \param ePelicula[] array de peliculas
 * \param int tamaño del array de peliculas
 * \param eGenero[] array de generos
 * \param int tamaño del array de generos
 * \param eActor[] array de actores
 * \param int tamaño del array de actores
 * \return void
 *
 */
void agregarPelicula(ePelicula[],int,eGenero[],int,eActor[],int);
/** \brief pide un dato del tipo fecha
 *
 * \param char[] mensaje que indica que se va a pedir
 * \param eFecha variable donde se cargaran los datos pedidos
 * \return void
 *
 */
void pedirFecha(char[],eFecha);
/** \brief harcodea datos de tipo genero
 *
 * \param lista[] eGenero array de generos donde se cargaran los datos
 * \param tam int tamaño del array
 * \return void
 *
 */
void hardcodearDatosGenero(eGenero lista[], int tam);
/** \brief hardcodea un array del tipo eActor
 *
 * \param eActor[] array eActor donde se cargaram los datos
 * \param int tamaño del array
 * \return void
 *
 */
void hardcodearDatosActores(eActor[],int);
/** \brief muestra el id y la descripcion de todos los generos
 *
 * \param lista[] eGenero array de generos a mostrar
 * \param tam int tamaño del array
 * \return void
 *
 */
void mostrarDescripcionGeneros(eGenero lista[],int tam);
/** \brief muestra el id y la descripcion de un genero
 *
 * \param eGenero genero a mostrar
 * \return void
 *
 */
void mostrarDescripcionGenero(eGenero);
/** \brief
 *
 * \param eActor[] muestra el id, descripcion y nacionalidad de todos los actores
 * \param int tamaño del array
 * \return void
 *
 */
void mostrarDescripcionActores(eActor[],int);
/** \brief muestra el id, descripcion y nacionalidad de un actor
 *
 * \param eActor actor a mostrar
 * \return void
 *
 */
void mostrarDescripcionActor(eActor);
/** \brief  permite modificar los datos de una pelicula
 *
 * \param lista[] ePelicula array de peliculas
 * \param tam int tamaño del array
 * \param actores[] eActor array de actores
 * \param ta int tamaño del array
 * \return void
 *
 */
void modificarDatos(ePelicula lista[],int tam,eActor actores[],int ta);
/** \brief usca una pelicula por su id
 *
 * \param lista[] ePelicula array de pelicukas
 * \param tam int tamaño del array
 * \param id int id de la pelicula a buscar
 * \return int subindice del vector donde se encuentra la pelicula/-1 si no existe
 *
 */
int buscarId(ePelicula lista[],int tam,int id);
/** \brief harcodea datos de un array de peliculas
 *
 * \param lista[] ePelicula array de peliculas
 * \param tam int tamaño del array
 * \return void
 *
 */
void hardcodearDatosPeliculas(ePelicula lista[], int tam);
/** \brief  baja logica de una pelicula
 *
 * \param lista[] ePelicula array de peliculas
 * \param tam int tamaño del array
 * \return void
 *
 */
void borrarPelicula(ePelicula lista[],int tam);
/** \brief ordena las peliculas segun el año de estreno
 *
 * \param ePelicula[] array de peliculas
 * \param len int tamaño del array
 * \return void
 *
 */
void ordenarPeliculasAnio(ePelicula[],int len);
/** \brief ordena el array de actores segun su pais de origen
 *
 * \param eActor[] array de actores
 * \param len int tamaño del array
 * \return void
 *
 */
void ordenarActoresPais(eActor[],int len);
/** \brief muestra todo el array de peliculas
 *
 * \param lista[] ePelicula array de peliculas
 * \param tam int tamaño del array
 * \return void
 *
 */
void mostrarPeliculas(ePelicula lista[],int tam);
/** \brief muestra una sola pelicula
 *
 * \param pelicula ePelicula pelicula a mostrar
 * \return void
 *
 */
void mostrarUnaPelicula(ePelicula);
void mostrarPeliculasCompletas(ePelicula[],int,eGenero[],int,eActor[],int);
void mostrarUnaPeliculaCompleta(ePelicula pelicula,eGenero listaGeneros[],int tg,eActor listaActores[],int ta);
void mostrarPeliculasActorEEUU(ePelicula listaPeliculas[],int tam, eActor listaActores[],int ta);
void mostrarPeliculasPorGenero(ePelicula listaPeliculas[],int tam,eGenero listaGeneros[],int tg);
void contarPeliculasPorGenero(ePelicula listaPeliculas[],int tam,eGenero listaGenero[],int tg);
void mostrarGeneroMenosPeliculas(ePelicula listaPeliculas[],int tam,eGenero listaGeneros[],int tg);
