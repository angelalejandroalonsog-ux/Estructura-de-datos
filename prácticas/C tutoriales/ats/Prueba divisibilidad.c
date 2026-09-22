//se vienen los if's, lesgooooooo
//Prueba de divisibilidad
#include <stdio.h>

int main(){
    int dividendo, divisor;

    printf("Dame dos números, dividendo y divisor: ");
    scanf("%i %i",&dividendo, &divisor);

    if (dividendo % divisor == 0){
        printf("Numero  %i  es divisible entre %i.",dividendo, divisor);
    }
    else{
        printf("Numero %i NO divisible entre %i.", dividendo, divisor);
    }

    return 0;

}