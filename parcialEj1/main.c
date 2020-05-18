#include <stdio.h>
#include <stdlib.h>

float aplicarDescuento(float num);

int main()
{
    float precio;

    printf("Ingresar Precio: ");
    scanf("%f", &precio);

    printf("Precio sin descuento: %.2f\n", precio);

    precio=aplicarDescuento(precio);

    printf("Precio con descuento: %.2f\n\n", precio);


    return 0;
}

float aplicarDescuento(float num){
    return num - (num*0.05);
}
