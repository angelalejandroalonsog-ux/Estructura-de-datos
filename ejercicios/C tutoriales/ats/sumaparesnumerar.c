#include<stdio.h>

int main(){

    int i,n,bandera=0,suma=0;
    printf("seleccione n: ");
    scanf("%i",&n);

    for (i=1;i<=n; i++)
    {

        if (i%2==0)
        {
            bandera++;
            suma+=i;
            printf("%i+",i);
        }
        
    }
    printf("=%i,",suma);
    printf("fueron %i numeros pares",bandera);

    return 0;
}