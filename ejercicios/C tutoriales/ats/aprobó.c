#include <stdio.h>

int main(){

    float calificación;

    printf("Ingresa tu calificación (debe ser mayor a 10.5): ");
    scanf("%f",&calificación);
    
    if(calificación>10.5){
        printf("\n\nusted ha aprobado con %.2f",calificación);
    }
    else {
        printf("\n\nReprobaste, puto.");
    }


    return 0;
}