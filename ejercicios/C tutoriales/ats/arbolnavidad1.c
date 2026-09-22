#include<stdio.h>

int main(){

    for (int i = 1; i<= 5; i++)
    {
        printf("\n");
        for (int j=i;j<=5;j++)
        {
            printf("_");
        }
        for (int k=1;k<i;k++)
        {
            printf("*");
            printf("\t");
        }
        
    }
    


    return 0;
}