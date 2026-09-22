#include <stdio.h>

int main(){

    float horast,valorh,salario;

    printf("horas trabajadas: ");
    scanf("%f",&horast);
    printf("\nvalor por hora?");
    scanf("%f",&valorh);
    salario= valorh*horast;
    printf("\nSalario: $%.2f",salario);

    return 0;
}