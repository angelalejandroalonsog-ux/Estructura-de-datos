#include<stdio.h>


void buenavenida(char nombre[20], int edad){

    printf("\n\nnombre: %s, edad: %d",nombre, edad);
}


int main(){

    int a;
    char b[20];
    printf("Ingresa tu nombre: ");
    scanf("%s",&b);
    printf("\ningresa tu edad: ");
    scanf("%d",&a);
    
    buenavenida(b,a);

    return 0;
}