#include "Pedir datos.h"
#include <stdio.h>

int pedirEntero(char texto[])
{
    int unEntero;
    printf("%s",texto);
    scanf("%d",&unEntero);

    unEntero=validarEnteroPositivo(unEntero);

    return unEntero;
}
float pedirFloat(char texto[])
{
    float unFloat;

    printf("%s",texto);
    scanf("%f",&unFloat);

    unFloat=validarFloatPositivo(unFloat);

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
int validarEnteroPositivo(int unEntero)
{
    while(unEntero<0)
    {
        unEntero=pedirEntero("Ingresar un numero positivo: ");
    }
    return unEntero;
}

float validarFloatPositivo(float unFloat)
{
    while(unFloat<0)
    {
        unFloat=pedirFloat("Ingresar un numero positivo: ");
    }
    return unFloat;
}
