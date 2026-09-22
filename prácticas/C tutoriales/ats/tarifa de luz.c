#include <stdio.h>

#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(){

    float kwxh, tasa;

    printf("Ingresa el gasto total de energía: ");
    scanf("%f",&kwxh);

    if(kwxh<1000){
        tasa=TARIFA1;
    }
    else if(kwxh>1000 && kwxh<1850){
        tasa=TARIFA2;
    }
    else if(kwxh>1850){
        tasa=TARIFA3;
    }
    else{
        printf("\n\nValor inválido.");
    }
    printf("Su tasa a pagar es de %.2f",tasa);

    return 0;
}