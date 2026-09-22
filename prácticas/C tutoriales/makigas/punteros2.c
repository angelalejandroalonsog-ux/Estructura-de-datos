#include<stdio.h>

void cosa(int* x){
    int y= *x; //se supone que con esto recuperamos el valor al que apunta el puntero x, que es la dirección de memoria de la variable x en main, y lo guardamos en la variable y.
    y= 20; //esto unicamente cambia el valor de la variable y dentro de la función cosa, no cambia el valor de la variable x en main pues no hemos editado el valor al que apunta el puntero x
    
    *x=y; //esto cambia el valor de la variable x en main, ya que estamos editando el valor al que apunta el puntero x

    //de esta forma, al mandar la dirección de memoria de la variable x en main a la función cosa, podemos modificar el valor de la variable x en main desde dentro de la función cosa.
}

int main(){

    int x=10;

    /*al trabajar con funciones y mandar una variable como parámetro, se manda una copia de la variable,
    por lo que si se modifica el valor de la variable dentro de la función, no se modifica el valor de la variable original.
    Para evitar esto, se puede mandar la dirección de memoria de la variable como parámetro,
    y así modificar el valor de la variable original.
    cosa(&x); //al mandar la dirección de memoria de la variable x,
    se puede modificar el valor de la variable original dentro de la función cosa,
    ya que se está trabajando con la dirección de memoria de la variable x,
    y no con una copia de la variable.*/
    printf("x antes de mandarlo a cosa= %d",x);
    cosa(&x);
    printf("x después de mandarlo a cosa= %d",x);
    return 0;
}