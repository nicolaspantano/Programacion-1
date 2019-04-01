
#include "Funciones vectores.h"
void cargarVector(int vector[],int tam)
{
    int i;
      for(i=0;i<tam;i++)
    {
      printf("Ingrese un valor: ");
        scanf("%d",&vector[i]);

    }

}
void mostrarVector(int vector[],int tam)
{
    int i;
     for(i=0;i<tam;i++)
    {
      printf("%d\n",vector[i]);
    }




}


int buscarMaximo(int vector[],int tam)
{
    int i;
    int flag=0;
    int maximo;
    for(i=0;i<tam;i++)
    {
        if(flag==0||vector[i]>maximo)
        {
            maximo=vector[i];
            flag=1;
        }
    }
    return maximo;

}


int buscarValor(int vector[],int tam,int valor)
{
    int i;
    int posicion=-1;
        for(i=0;i<tam;i++)
        {
            if(vector[i]==valor)
            {
                posicion=i;
            }

        }

    return posicion;

}

