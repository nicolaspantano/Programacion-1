#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 50
#define XX 20
int main()
{
    char nombre[L];
    char apellido[XX];
    char nombreModificado[L];
    char apellidoModificado[XX];
    char aux;

    /*printf("Ingrese su/s nombre/s: ");
    fgets(nombre,50,stdin);
    printf("Ingrese su/s apellido/s: ");
    fgets(apellido,20,stdin);*/
    printf("Ingrese su/s nombre/s: ");
    scanf("%[^\n]",nombre);
    printf("Ingrese su/s apellido/s: ");
    fflush(stdin);
    scanf("%[^\n]",apellido);



    strncpy(nombreModificado,nombre,L);
    strncpy(apellidoModificado,apellido,XX);
    strlwr(nombreModificado);
    strlwr(apellidoModificado);


    printf("%s, %s, %c",apellidoModificado,nombreModificado,aux);




    return 0;
}
