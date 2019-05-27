#include <stdio.h>
#include <stdlib.h>
#define misDatos "D:\\misdatos.txt"
int main()
{
    FILE* unArchivo;
    char nombre[30]="Nicolas";;
    /*unArchivo=fopen(misDatos,"w");
    fprintf(unArchivo,"Su nombre es:\n%s",nombre);
    fclose(unArchivo);*/
    unArchivo=fopen(misDatos,"r");
    //fgets(nombre,40,unArchivo);
    while(!feof(unArchivo))
    {
        fgets(nombre,40,unArchivo);
        printf("%s",nombre);
    }
    fclose(unArchivo);
    //printf("%s",nombre);

    return 0;
}
