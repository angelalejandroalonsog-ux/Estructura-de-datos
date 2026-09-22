#include<stdio.h>
int main(){
    int i,j,k,numero;
    printf("ingrese numero:");
    scanf("%d",&numero);
    for(i=1;i<=numero;i++)
    {
        printf("\n");
        for(k=i;k<=numero;k++)
        {
            printf("\t");
        }  
        for(j=1;j<=i;j++){
            printf("\t\t");
            printf("*");
        }
    }
}