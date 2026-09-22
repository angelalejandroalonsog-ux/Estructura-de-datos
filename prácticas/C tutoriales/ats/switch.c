
#include<stdio.h>

int main(){

    /*
    int numero;
    printf("digita un número entre 1 y 3: ");
    scanf("%i",&numero);
    switch(numero){

        case 1: printf("Es el número 1");break;
        case 2: printf("Es el número 2");break;
        case 3: printf("Es el número 3");break;
        default: printf("No ha digitado un número válido");
    }
    */
   char vocal;
   printf("ingresa una vocal: ");
   scanf("%c",&vocal);
   
   switch(vocal){

    case 'a': printf("\nVocal a"); break;
    case 'e': printf("\nVocal e"); break;
    case 'i': printf("\nVocal i"); break;
    case 'o': printf("\nVocal o"); break;
    case 'u': printf("\nVocal u"); break;
    default: printf("\nERROR.");

   }
    return 0;
}