#include "file.h"

void write(FILE* miArchivo,eEmpleado* unEmpleado)
{
    miArchivo=fopen("datos","w");
    fprintf(miArchivo,"%d--%s--%f",unEmpleado->legajo,unEmpleado->nombre,unEmpleado->sueldo);
    fclose(miArchivo);
}

void read(FILE* miArchivo)
{
    char texto[50];
    miArchivo=fopen("datos","r");
    while(!feof(miArchivo))
    {
        fgets(texto,60,miArchivo);
        printf("%s",texto);
    }

    fclose(miArchivo);
}
void bwrite(FILE* miArchivo,char texto[])
{
    miArchivo=fopen("bdatos","wb");
    fwrite(texto,sizeof(char)*20,20,miArchivo);
    fclose(miArchivo);
}

void bread(FILE* miArchivo)
{
    char texto[50];
    miArchivo=fopen("bdatos","rb");
    while(!feof(miArchivo))
    {
        fread(texto,sizeof(char)*50,50,miArchivo);
        printf("%s",texto);
    }

    fclose(miArchivo);
}
