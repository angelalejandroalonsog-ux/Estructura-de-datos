#include<stdio.h>
#include<math.h>
int main(){

    float a,cu;

    printf("ingresa un valor: ");
    scanf("%f",&a);
    cu=sqrt(a);
    if(cu>0){
        printf("raiz cuadrada de %.2f es: %.2f",a,cu);
    }
    else{
        printf("Raiz cuadrada de %.2f es imaginaria pues da %.2f.",a,cu);
    }
    return 0;
}