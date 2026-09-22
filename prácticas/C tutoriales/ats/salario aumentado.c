#include <stdio.h>

int main(){

    float salario, nuevoS, aumento;

    printf("Ingresa tu salario:");
    scanf("%f",&salario);
    aumento= salario*0.25;
    nuevoS=salario+aumento;
    printf("\n\nNuevo salario es:%.2f ",nuevoS);

    return 0;
}