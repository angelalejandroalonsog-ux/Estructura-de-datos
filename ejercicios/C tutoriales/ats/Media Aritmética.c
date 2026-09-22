//calcular la media aritmética de 3 numersos cualquiera.
#include <stdio.h>

int main(){
    float a,b,c,r;
    printf("ingresa el valor de los numeros a sacar media: ");
    scanf("%f %f %f",&a, &b, &c);
    r=(a+b+c)/3;
    printf("\n\nLa media aritmética es: %.2f",r);

    return 0;
}