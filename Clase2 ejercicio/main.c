#include <stdio.h>
#include <stdlib.h>

int main()
//windows funcion fflush(stdin) limpia el buffer de entrada
{
    int numero;
    char respuesta;

    do{
        printf("Ingrese un numero: ");
        scanf("%d",&numero);
        fflush(stdin);
        printf("Desea continuar?");
        scanf("%c",&respuesta);
        fflush(stdin);

    }while(respuesta!='n');





}
