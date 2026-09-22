#include<stdio.h>

int main(){

    int suma; 
    /*for (int i=1;i<=10;i++)
    {
        if (i%2==0)
        {
            suma+=i;
            printf("%i",i);
        }   
    }
    printf("suma de pares: %i",suma);
    */
   for (int i= 0; i <11; i+=2)
   {
    printf("%i",i);
    suma+=i;
    
   }
   printf("suma de pares: %i",suma);

    return 0;
}