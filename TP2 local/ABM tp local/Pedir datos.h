/** \brief Pide un numero int
 *
 * \param texto[] char Texto que va a indicar que se pide
 * \return int El int que ingreso el usuario
 *
 */
int pedirEntero(char texto[]);
/** \brief Pide un numero float
 *
 * \param texto[] char Texto que va a indicar que se pide
 * \return float El float que ingreso el usuario
 *
 */
float pedirFloat(char texto[]);
/** \brief Pide un char
 *
 * \param texto[] char Texto que va a indicar que se pide
 * \return char El char que ingreso el usuario
 *
 */
char pedirChar(char texto[]);
/** \brief Pide una cadena y la valida
 *
 * \param mensaje[] char Mensaje que indica que se pide. "Ingrese (...)
 * \param cadena[] char cadena donde se va a guardar
 * \param tam int tamaño de la cadena donde se va a guardar
 * \return void
 *
 */
void pedirCadena(char mensaje[],char cadena[],int tam);
void validarTamCadena(char mensajeError[],char cadena[],int tam);
int validarEnteroPositivo(int);
float validarFloatPositivo(float);
