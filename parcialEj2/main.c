#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarCaracteres(char cadena[], char caracter);

int main()
{
    char cadena[20];
    char caracter;
    int cantidad;

    printf("Ingrese una palabra: ");
    gets(cadena);
    printf("Ingrese un caracter: ");
    scanf("%c", &caracter);

    cantidad=contarCaracteres(cadena, caracter);

    printf("El caracter %c en la palabra %s aparece %d veces\n\n", caracter,cadena,cantidad);

    return 0;
}

int contarCaracteres(char cadena[], char caracter){
    int indice=0;
    int contador=0;

    while(cadena[indice]!='\0'){
        if(cadena[indice]==caracter){
            contador++;
        }
        indice++;
    }

    return contador;
}
