#include "biblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#define EXITO 1
#define ERROR 0

int cargarArray(int* pVector,int tam)
{
    int i;
    int estado=ERROR;
    if(pVector!=NULL)
    {


        for(i=0; i<tam; i++)
        {
            printf("Ingrese un numero distinto a 0: ");
            scanf("%d",pVector+i);
            while(*pVector==0)
            {
                printf("Error. Ingrese un numero distinto a 0: ");
                scanf("%d",pVector+i);
            }

        }
        estado=EXITO;
    }
    return estado;
}

int mostrarArray(int* pVector,int tam)
{
    int i;
    int estado=ERROR;
    if(pVector!=NULL)
    {


        for(i=0; i<tam; i++)
        {
            printf("%d\n",*(pVector+i));

        }
        estado=EXITO;
    }
    return estado;
}

int ordenarArray(int* pVector,int tam)
{
    int i;
    int j;
    int auxInt;
    int estado=ERROR;
    if(pVector!=NULL)
    {
        for(i=0; i<tam-1; i++)
        {
            for(j=i+1; j<tam; j++)
            {
                if(*(pVector+i)>*(pVector+j))
                {
                    auxInt=*(pVector+i);
                    *(pVector+i)=*(pVector+j);
                    *(pVector+j)=auxInt;

                }
            }


        }
        estado=EXITO;
    }
    return estado;
}
int buscarMax(int* pVector,int tam)
{
    int max=0;
    int i;
    int flagNull=0;

    if(pVector!=NULL)
    {

        for(i=0;i<tam;i++)
        {
            if(i==0)
            {
                max=*(pVector+i);
            }
            else if(*(pVector+i)>max)
            {
                max=*(pVector+i);
            }
        }
    }


    return max;
}
float sacarPromedio(int* pVector,int tam)
{
    int i;
    float promedio=0;
    int acumulador=0;


    if(pVector!=NULL)
    {
        for(i=0;i<tam;i++)
        {
            acumulador+=*(pVector+i);

        }
        promedio=(float)acumulador/i;
    }


    return promedio;
}
int borrarUnNumero(int* pVector,int tam)
{
    int i;
    int estado=ERROR;
    int numero;
    if(pVector!=NULL)
    {
        printf("Que numero desea borrar del vector?");
        scanf("%d",&numero);
        for(i=0;i<tam;i++)
        {
            if(*(pVector+i)==numero)
            {
                *(pVector+i)=0;
            }
        }
        estado=EXITO;
    }



    return estado;
}
