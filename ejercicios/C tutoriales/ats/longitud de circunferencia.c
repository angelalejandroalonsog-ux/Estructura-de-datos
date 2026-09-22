#include <stdio.h>

int main(){

    float pi=3.1416,a, d;

    printf("\n\nIngresa el Diametro del circulo a medir:");
    scanf("%f",&a);
    d=a*pi;
    printf("\n\nLa longitud de la circunferencia es:%.2f",d);

    return 0;
}