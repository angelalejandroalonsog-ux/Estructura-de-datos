//imprimir letras minusculas del alfabeto
#include<stdio.h>
int main(){
    char letra = 'a'; //61h

    do{
        printf("%c.\n", letra);
        letra++;
    }while(letra <= 'z');

    return 0;
}