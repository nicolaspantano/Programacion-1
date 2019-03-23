#include <stdio.h>
#include <stdlib.h>

int main()
//windows funcion fflush(stdin) limpia el buffer de entrada
{
    int numero;
    char respuesta;
    int cantNumeros;
    int cantPares;
    int sumaPositivos;
    int cantNegativos;
    int sumaNegativos;
    float promedioNegativos;
    int maximo;
    int minimo;
    int minimoPositivos;
    int maximoNegativo;
    int cantEnRangoDado;
    int promedioTotal;



    do{
        printf("Ingrese un numero: ");
        scanf("%d",&numero);
            while(numero==0)
                {
                    printf("El numero no puede ser 0. Ingrese un numero");
                    scanf("%d",&numero);
                }
        fflush(stdin);
            if(numero%2==0)
            {
                cantPares++;
            }













            cantNumeros++;
        printf("Desea continuar?");
        scanf("%c",&respuesta);
        fflush(stdin);

    }while(respuesta!='n');





}
