#include <stdio.h>

int main(){

    int numero;
    do
    {
        system("cls");
        printf("ingresa un numero:");
        scanf("%i",&numero);
        system("cls");
        (numero %2==0) ? printf("el numero es par\n\n") : printf("el numero es impar\n\n");
        system("pause");
        
    } while (numero!=0);
    


    return 0;
}