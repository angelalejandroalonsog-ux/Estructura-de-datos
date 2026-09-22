//Entradas y salidas.
#include <stdio.h> 

int main(){
    /*int a;
    float b;
    char c;
    printf("\ndigita el valor de la variable a:");
    scanf("%i",&a);
    printf("\nUsted ha digitado: %i",a);
    printf("\ndigita el valor de la variable b:");
    scanf("%f",&b);
    printf("\nUsted ha digitado: %f",b);
    printf("\ndigita el valor de la variable c:"); //al guardar con char siempre me da problemas, chigao
    scanf("%c",&c);
    printf("\nUsted ha digitado: %c",c);
    */

    char x[50];
    printf("Digite su nombre: ");
    gets(x);
    printf("\nSu nombre es:%s",x);
    return 0;
}