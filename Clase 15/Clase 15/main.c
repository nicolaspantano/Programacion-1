#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pNumeros;
    int i;
    pNumeros=malloc(sizeof(int)*5);

    if(pNumeros!=NULL)
    {
        for(i=0;i<5;i++)
        {
          //*(pNumeros+i)=i+1;
            printf("Ingrese un numero");
            scanf("%d",pNumeros+i);
        }
        for(i=0;i<5;i++)
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
