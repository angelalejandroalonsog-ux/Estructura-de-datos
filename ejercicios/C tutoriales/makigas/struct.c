#include<stdio.h>
    //en caso de estructuras es necesario añadir un ; en el corchete de cierre.
    struct cuenta{ //la forma de definir una estructura, es  con el "struct" y seguido nombre de la estructura.
        //entre corchetes ingresamos los datos que llevará la estructura.
        char nombre[30];
        int saldo;
        int id;
    };
int main(){

    //para crear una variable de tipo estructura, se hace de la siguiente manera:
    struct cuenta c1; //c1 es una variable de tipo estructura, que tiene los datos de la estructura cuenta, es decir, c1 tiene un nombre, un saldo y un id.
    //para modificar los datos de la estructura, se hace de la siguiente manera:
    c1.id=1;
    c1.saldo=1000;
    //también podemos hacer que el usuario introduzca los datos.
    printf("ingresa el nombre del titular de la cuenta: ");
    fgets(c1.nombre,30,stdin); 

    return 0;
}