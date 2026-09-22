#include <stdio.h>

int main(){

    int ne,par=0,impar=0,n,i=1,sf;

    printf("ingresa n");
    scanf("%i",&n);

    while (i<=n)
    {
        if (i%2==0)
        {
            ne=i*(-1);
            par+=ne;
        }
        else
        {
            impar+=i;
        }
        i++;
    }
    printf("\n\nPar: %i. Impar: %i",par,impar);
    sf=impar+par;
    printf("\n\nResultado: %i",sf);
    
    return 0;
}
/*
QUÉ PUTO BOBO
ME EQUIVOQUÉ CON LAS VARIABLES POR HACERLO A LA RÁPIDA
SÉ HACERLO, PERO ALEJANDRO, DETENTE A PENSAR UN JODIDO SEGUNDO!!!
*/