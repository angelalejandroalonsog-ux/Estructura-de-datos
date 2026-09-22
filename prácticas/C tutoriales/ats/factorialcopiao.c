#include <stdio.h>

int main(){

    int i, factorial=1, n;

    printf("ingresa n: ");
    scanf("%i",&n);

    for (i = 1; i <=n; i++)
    {
        factorial*=i;
    }
    
    printf("factorial de %i es: %i",n,factorial);
    


    return 0;
}