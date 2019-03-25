#include <stdio.h>
#include <stdlib.h>

int pedirNota(void);
float sacarPromedio(int suma, int cantidad);
int aprobarMateria(int notaMinima, int nota);
void ejercicioUno(void);

int main()
{
    ejercicioUno();
}
int pedirNota(void)
{
    int nota;

do{

printf("Ingrese la nota: ");
scanf("%d",&nota);

}while(nota>10||nota<0);
return nota;
}

float sacarPromedio(int suma, int cantidad){

float promedio=(float)suma/cantidad;

return promedio;

}

int aprobarMateria(int notaMinima, int nota){
    if (nota>=notaMinima){
        return 1;
    }

        return 0;

}
void ejercicioUno(void){
    int nota;
    int cantAprobados=0;
    int cantDesaprobados=0;
    float promAprobados;
    float promDesaprobados;
    int sumaAprobados=0;
    int sumaDesaprobados=0;
    int i;

    for(i=0;i<5;i++){
        nota=pedirNota();
        if(aprobarMateria(6,nota)){
            cantAprobados++;
            sumaAprobados+=nota;
        }
        else{
            cantDesaprobados++;
            sumaDesaprobados+=nota;
        }
    }
    promAprobados=sacarPromedio(sumaAprobados,cantAprobados);
    promDesaprobados=sacarPromedio(sumaDesaprobados,cantDesaprobados);

    printf("\nCantidad de aprobados: %d",cantAprobados);
    printf("\nPromedio de notas de aprobados: %.2f",promAprobados);
    printf("\nPromedio de notas de desaprobados: %.2f",promDesaprobados);





}

