#include <stdio.h>
#include <stdlib.h>
#include <string.h>//funciones para manipular cadenas
int main()
{
    int len;
    char palabra[1024];
        printf("Ingrese nombre y apellido: ");
        //scanf("%[^\n]",palabra);//mascara que especifica que se lea el espacio. \n significa espacio.
        fgets(palabra,30,stdin);//El fgets tiene un caracter de mas(\n).Sirve para leer desde un archivo. pero si le ponemos stdin lee desde el buffer de entrada.
        //gets(palabra);//Sirve para escribir con espacios. Solo funciona para windows.
        //strncpy(palabra,"hola",4);//escribe en el string//es peligroso pq puede desbordar si no se le agrega el N es una funcion distinta.El 4 (si el otro array tiene 5) es para que solo copie lo que entra en el array y no desborde.
        printf("%s",palabra);
        //len=strlen(palabra);//strlen mide la longitud.
        //strcmp(var/const,var/const)//compara strings//devuelve un entero(0 cuand son iguales)(1 o -1 si son distintos)
        //stricmp()//ignora el case sensitive
        //strupr(char*(palabra))La pone toda en mayuscula
        //strlwr(palabra)//lo pone todo en minuscula
        //strcat(palabra1,palabra2)concatena
        printf ("\n\n%d",len);
        return 0;
}
