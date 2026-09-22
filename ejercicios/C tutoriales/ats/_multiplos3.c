//multiplos de 3 hasta n

#include <stdio.h>

int main(){

    int i=1,n=0;


    printf("ingrese n: ");
    scanf("%i",&n);
    
    while (i<n)
    {

        if (i%3==0)
        {

            printf("\n\nnumero:%i",i);

        }
        
        i++;
    }
    



    return 0;
}