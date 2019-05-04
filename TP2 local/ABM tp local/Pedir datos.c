#include "Pedir datos.h"
#include <stdio.h>

int pedirEntero(char texto[])
{
    int unEntero;
    printf("%s",texto);
    scanf("%d",&unEntero);

    return unEntero;
}
float pedirFloat(char texto[])
{
    float unFloat;

    printf("%s",texto);
    scanf("%f",&unFloat);


    return unFloat;
}
char pedirChar(char texto[])
{
    char unChar;
        printf("%s",texto);
        scanf("%c",&unChar);

        return unChar;
}
void pedirCadena(char mensaje[],char cadena[],int tam)
{
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%[^\n]",cadena);
    validarTamCadena(mensaje,cadena,tam);
}
void validarTamCadena(char mensajeError[],char cadena[],int tam)
{

    while(strlen(cadena)>tam)
    {
        printf("Reingrese %s",mensajeError);
        //fflush(stdin);
        scanf("%[^\n]",cadena);
    }


}
