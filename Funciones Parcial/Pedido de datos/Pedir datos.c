#include "Pedir datos.h"

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
char pediChar(char texto[])
{
    char unChar;
        printf("%s",texto[]);
        scanf("%c",unChar);

        return unChar;
}

