#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE* miArchivo;
    //int x=4;
    int* x;
    x=(int*)malloc(sizeof(int));
    /*miArchivo=fopen("datos","wb");//fopen("datos.dat","wb");//fopen("datos.bin","wb");
    fwrite(&x,sizeof(int),1,miArchivo);
    fclose(miArchivo);*/

    miArchivo=fopen("datos","rb");
    fread(x,sizeof(int),1,miArchivo);
    printf("%d",*x);
    fclose(miArchivo);

    return 0;
}
