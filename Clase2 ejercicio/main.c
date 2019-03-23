#include <stdio.h>
#include <stdlib.h>

int main()
//windows funcion fflush(stdin) limpia el buffer de entrada
{
    int numero;
    char respuesta;
    int cantNumeros=0;
    int cantPares=0;
    int sumaPositivos=0;
    int cantNegativos=0;
    int sumaNegativos=0;
    float promedioNegativos;
    int maximo;
    int minimo;
    int minimoPositivos;
    int maximoNegativo;
    int cantEnRangoDado=0;
    float promedioTotal;
    int flag=0;
    int flagp=0;
    int flagn=0;
    int sumaTotal;



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

            if(numero>0)
                {
                sumaPositivos+=numero;
                if(flagp==0||numero<minimoPositivos)
                    {
                        minimoPositivos=numero;
                        flagp=1;
                    }
                }
            else
                {
                cantNegativos++;
                sumaNegativos+=numero;
                    if(flagn==0||numero>maximoNegativo)
                        {
                            maximoNegativo=numero;
                            flagn=1;
                        }
                }

            if(flag==0||numero<minimo)
                {
                minimo=numero;
                }
            if(flag==0||numero>maximo)
            {
                maximo=numero;
                flag=1;
            }

            if(numero>-10&&numero<50)
            {
                cantEnRangoDado++;
            }


            cantNumeros++;

        printf("Desea continuar?");
        scanf("%c",&respuesta);
        fflush(stdin);

    }while(respuesta!='n');

    sumaTotal=sumaNegativos+sumaPositivos;
    promedioTotal=(float)sumaTotal/cantNumeros;
    promedioNegativos=(float)sumaNegativos/cantNegativos;


printf("Se ingresaron %d numeros", cantNumeros);
printf("\nSe ingresaron %d numeros pares",cantPares);
printf("\nLa suma de los positivos es %d",sumaPositivos);
printf("\nEl promedio de los negativos es %.2f",promedioNegativos);
printf("\nEl maximo ingresado fue %d",maximo);
printf("\nEl minimo ingresado fue %d",minimo);
printf("\nEl positivo mas chico fue %d",minimoPositivos);
printf("\nEl negativo mas grande fue %d",maximoNegativo);
printf("\nSe ingresaron %d numeros entre -10 y 50",cantEnRangoDado);
printf("\nEl promedio total es %.2f",promedioTotal);




}
