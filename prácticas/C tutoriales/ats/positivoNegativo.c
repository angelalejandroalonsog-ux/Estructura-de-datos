#include <stdio.h>

int main(){

    int digito;

    printf("ingresa un número: ");
    scanf("%i",&digito);

    if(digito<0){
        printf("Su número es negativo");
    }
    else{
        printf("Su número es positivo");
    }

    return 0;
}