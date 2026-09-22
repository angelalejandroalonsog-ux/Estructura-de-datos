#include <stdio.h>

int main(){
    float total,resultado,descuento;
    printf("ingresa el precio de tu compra:");
    scanf("%f",&total);
    descuento= total*0.15;
    resultado= total-descuento;
    printf("Tu total a pagar es de $%.2f",resultado);


    return 0;
}