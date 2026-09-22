//calcular áreas de trapecios

#include <stdio.h>

int main(){

    int a,b,h,r;

    printf("Base mayor:");
    scanf("%i",&a);
    printf("Base menor:");
    scanf("%i",&b);
    printf("Altura: ");
    scanf("%i",&h);
    r=((a+b)*h)/2;
    printf("El área del trapecio es:%i ",r);

    return 0;
}