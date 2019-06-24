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
/** \brief Valida que el tamaño de la cadena no colapse
 *
 * \param mensajeError[] char mensaje que se mostrara si la cadena colapsa
 * \param cadena[] char cadena a validar
 * \param tam int tamaño que debe respetar la cadena
 * \return void
 *
 */
void validarTamCadena(char mensajeError[],char cadena[],int tam);
/** \brief Valida que el entero sea positivo
 *
 * \param int entero a validar
 * \return int entero validado
 *
 */
int validarEnteroPositivo(int);
/** \brief Valida que el float sea positivo
 *
 * \param float float a validar
 * \return float float validado
 *
 */
float validarFloatPositivo(float);
/** \brief Valida que el char sea 'n' o 's'
 *
 * \param char el char a validar
 * \return char el char validado
 *
 */
char validarCharSeguir(char);
/** \brief Menu de opciones
 *
 * \param char[] Mensaje que mostrara el menu (opciones)
 * \return int opcion elegida
 *
 */
int menuDeOpciones(char[]);

