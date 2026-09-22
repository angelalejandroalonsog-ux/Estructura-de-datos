#include<stdio.h>

int main(){

    int x=10;
    int* dirx=&x; //de esta forma podemos guardar la dirección de memoria de la variable x en un puntero, que es una variable que guarda direcciones de memoria.
    //existe una forma más eficiente de hacer esto, que es usando el operador & directamente en la variable que queremos imprimir su dirección de memoria, sin necesidad de crear un puntero.
    
    printf("x = %d, dirección de x = %p",x,dirx); //La inteligencia artificial me dijo que para imprimir la dirección de memoria de una variable se usa %u, pero en realidad es %p, y si se usa %u no imprime la dirección de memoria correcta.

    return 0;
}