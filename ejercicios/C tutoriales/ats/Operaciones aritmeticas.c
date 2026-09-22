//Operaciones aritmeticas
#include <stdio.h>

int main(){
    /*
    int a, b, suma, resta, multiplicacion, division;
    printf("\n\nElige los dos numeros: ");
    scanf("%i %i",&a,&b);
    suma=a+b;
    resta= a-b;
    division= a/b;
    multiplicacion= a*b;
    printf("\n\nLa suma de ambos numeros es: %i",suma);
    printf("\n\nLa resta de ambos numeros es: %i",resta);
    printf("\n\nLa división de ambos numeros es: %i",division);
    printf("\n\nLa multiplicación de ambos numeros es: %i",multiplicacion);
    */
   float celsius, farenheit;
   printf("\n\ningresa los grados celsius: ");
   scanf("%f",&celsius);
   farenheit=celsius*1.8+32;
   printf("\n\nGrados Celsius a Farenheit:\nC:%.2f  F:%.2f",celsius,farenheit);

    return 0;
}