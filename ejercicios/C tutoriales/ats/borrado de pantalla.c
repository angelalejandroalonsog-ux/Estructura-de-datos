//no chancha
#include<stdio.h>
#include<stdlib.h>

int main(){

    char a;
    printf("PROGRAMA DE BORRADO DE PANTALLA!\n\n");
    printf("-----------------------------------------");
    printf("\n\ningrese el número 1: ");
    scanf("%c",&a);

    if(a=='1'){
        stystem("cls");
    }
    else{
        printf("No la hiciste, bro, intenta de nuevo...");
    }

    return 0;
}