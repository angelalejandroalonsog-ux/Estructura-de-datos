#include <stdio.h>

int main(){

    int n;

    printf("Ingresa un numero: ");
    scanf("%i",&n);

    if(n % 2 == 0){
        printf("\n\nEl numero es par");
    }
    else{
        printf("\n\nEl numero es impar");
    }



    return 0;
}