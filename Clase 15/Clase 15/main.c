#include <stdio.h>
#include <stdlib.h>

#define T 5
int main()
{
    int* pNumeros;
    int* auxpInt;
    int i;

    pNumeros=malloc(sizeof(int)*T);

    if(pNumeros!=NULL)
    {
        for(i=0; i<T; i++)
        {
            //*(pNumeros+i)=i+1;
            printf("Ingrese un numero: ");
            scanf("%d",pNumeros+i);
        }
        for(i=0; i<T; i++)
        {
            printf("%d\n",*(pNumeros+i));
        }

    }

  auxpInt=pNumeros;

  if(auxpInt=realloc(auxpInt,sizeof(int)*(T+5)!=NULL))
     {
         pNumeros=realloc(pNumeros,sizeof(int)*(T+5));
     }
     else
    {
        printf("No hay espacio");

    }


    if(pNumeros!=NULL)
    {
        for(i=T; i<T+5; i++)
        {
            //*(pNumeros+i)=i+1;
            printf("Ingrese un numero: ");
            scanf("%d",pNumeros+i);
        }
        for(i=0; i<T+5; i++)
        {
            printf("%d\n",*(pNumeros+i));
        }
    }









    /*pNumero=(int*)malloc(sizeof(int));//Si no encuentra espacio devuelve NULL
    *pNumero=99;
    printf("Heap->pNumero: %p\n",pNumero);
    printf("Stack->&pNumero: %d\n",&pNumero);
    printf("Valor:*pNumero: %i\n",*pNumero);
    free(pNumero);
    printf("Luego del free: \n");
    printf("Heap->pNumero: %p\n",pNumero);
    printf("Stack->&pNumero: %d\n",&pNumero);
    printf("Valor:*pNumero: %i\n",*pNumero);
    */

    return 0;
}
