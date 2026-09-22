#include<stdio.h>

int main(){

    int i,n,contador=0;

    printf("ingresa n: ");
    scanf("%i",&n);

    for (i = 1; i <=n; i++)
    {
        if(n%i==0){
            contador++;
        }
    }
    if (contador>2)
        {
            printf("el numero no es primo");
        }
        else{
            printf("el numero es primo");
        }
    



    return 0;
}