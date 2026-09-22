//Tipos de datos.
#include <stdio.h>
#define pi 3.1416


int main(){
    int x=10;
    float z= pi+x;
    printf("\n\nla suma es: %.4f",z);
    char nombre = 'B';
    printf("\n\nEl elemento es: %c",nombre);
    short b= -15;
    printf("\n\n El elemento short es: %i",b);
    int c=1024;
    printf("\n\n El elemnto entero es: %i",c);
    unsigned int d = 128;
    printf("\n\n El elemento unsigned int es:%i",d);
    long e= 123456;
    printf("\n\n El elemento Longo es: %li",e);
    float f=15.678;
    printf("\n\n Elemento flotante:%.3f ",f);
    double g=123123.123123;
    printf("\n\n Elemento double%lf",g);
    return 0;
}