#include<stdio.h>

int main(){

    int n,m,i;
    printf("ingresa N y M: ");
    scanf("%i %i",&n,&m);
    i=n;
    while (i<=m)
    {
        if (i%2==0)
        {
            printf("%i,",i);
        }
        
        i++;
    }



    return 0;
}