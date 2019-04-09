#include <stdio.h>
#include <stdlib.h>
#define T 3
void pedirCadena(char[],char[],int);
void validarTamCadena(char[],char[],int);
int main()
{
    int legajos[T];
    float sueldosBrutos [T];
    char sexos[T];
    char nombres[T][20];//[filas][columnas]
    int sueldosNetos[T];
    int auxEnteros;
    float auxFloat;
    char auxChar;
    char auxCadena[100];

    int i;

    for(i=0;i<T;i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d",&legajos[i]);
        printf("Ingrese sueldo bruto: ");
        scanf("%f",&sueldosBrutos[i]);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c",&sexos[i]);
        pedirCadena("nombre: ",nombres[i],20);
        sueldosNetos[i]=sueldosBrutos[i]*0.85;
    }

    for(i=0;i<T-1;i++)
    {
        for(j=i+1;j<T;j++)
        {
            if(legajos[i]>legajos[j])
            {
                auxEnteros=legajos[i];
                legajos[i]=legajos[j];
                legajos[j]=auxEnteros;

                auxFloat=sueldosBrutos[i];
                sueldosBrutos[i]=sueldosBrutos[j];
                sueldosBrutos[j]=auxFloat;

                auxFloat=sueldosNetos[i];
                sueldosNetos[i]=sueldosNetos[j];
                sueldosNetos[j]=auxFloat;

                auxChar=sexos[i];
                sexos[i]=sexos[j];
                sexos[j]=auxChar;
            }
        }
    }



    for(i=0;i<T;i++)
    {
        printf("%d--%s--%.2 f--%c--%d\n",legajos[i],nombres[i],sueldosBrutos[i],sexos[i],sueldosNetos[i]);

    }





    return 0;
}

void pedirCadena(char mensaje[],char cadena[],int tam)
{
    printf("Ingrese %s",mensaje);
    fflush(stdin);
    scanf("%[^\n]",cadena);
    validarTamCadena(mensaje,cadena,tam);
}
void validarTamCadena(char mensajeError[],char cadena[],int tam)
{

    while(strlen(cadena)>tam)
    {
        printf("Reingrese %s",mensajeError);
        fflush(stdin);
        scanf("%[^\n]",cadena);
    }


}

