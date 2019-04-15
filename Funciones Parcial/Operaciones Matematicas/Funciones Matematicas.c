#include "Funciones Matematicas.h"

float sumarNumeros(float numeroA, float numeroB)
{
    float resultado=numeroA+numeroB;
    return resultado;
}
float restarNumeros(float numeroA, float numeroB)
{
    float resultado=numeroA-numeroB;
    return resultado;
}
float dividirNumeros(float numeroA,float numeroB)
{
    float resultado=numeroA/numeroB;
    return resultado;
}
float multiplicarNumeros(float numeroA,float numeroB)
{
    float resultado=numeroA*numeroB;
    return resultado;
}
int factorial(int numero)
{ int resultado;
    if(numero==0||numero==1)
    {
        resultado=1;
    }
    else
    {
        resultado=numero*factorial(numero-1);
    }

  return resultado;
}
