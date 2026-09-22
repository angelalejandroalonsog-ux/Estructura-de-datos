#include<stdio.h>

int main(){

    int a=0,b=1,c=1,i,n;
    printf("ingresa n: ");
    scanf("%i",&n);
    for (i = 1; i<=n; i++)
    {
        printf("%i,",c);
        c=a+b;
        //printf("%i, ",c);
        a=b;
        b=c;
    }
    

    return 0;
}