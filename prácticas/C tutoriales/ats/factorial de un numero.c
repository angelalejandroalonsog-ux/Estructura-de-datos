#include<stdio.h>

int main(){

    int i,n,m,x,a,suma;
    printf("ingresa el numero a sactar factorial: ");
    scanf("%i",&n);
    x=n;
    for(i=1;i<n;i++){
        printf("\ni= %i\n",i);
        m=n-i;
        a=x*m;
        printf("%i x %i=%i",x,m,a);
        suma+=a;
        x=a;
    }
    printf("\n\nsuma final factorial de %i: %i",n,suma);

    return 0;
}