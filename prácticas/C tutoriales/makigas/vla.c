//vlas son las siglas de: variable-length array. (IA) es decir, arreglo de longitud variable, este tipo de arreglos se pueden declarar con un tamaño que no sea constante, es decir, que se pueda cambiar en tiempo de ejecución.

#include<stdio.h>

int main(){

    int n, edades[n]; //esto es un VLA, pues estamos, en vez de declarar el tamaño del array dentro del array, le damos una variable [n].

    printf("ingresa el tamaño del arreglo: ");
    scanf("%d",&n);
    printf("ingresa las edades de los alumnos: ");
    for(int i=0; i<n;i++){
        scanf("%d",&edades[i]);
    }
    for(int i=0; i<n;i++){
        printf("edades: %d\n",edades[i]);
    }

    return 0;

}