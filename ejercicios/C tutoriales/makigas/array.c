#include<stdio.h>

int main(){

    int edades[5]={0}; //una forma alternativa de inicializar es int edades[5]={0,0,0,0,0}; con esto podremos darle un valor especifico a cada posición del arreglo.
    //si asignamos valores sólo a algunas posiciones del arreglo, las demás se inicializan en 0, por ejemplo: int edades[5]={10,20}; edades[0]=10, edades[1]=20, edades[2]=0, edades[3]=0, edades[4]=0.
    //(desconocía que esto era posible)gracias a la inicialización de 0, todas las posiciones del arreglo edades se inicializan en 0, es decir, edades[0]=0, edades[1]=0, edades[2]=0, edades[3]=0, edades[4]=0. 
    //array de 5 enteros, donde podemos guardar edades, visualizalo de esta manera [0][1][2][3][4].
    //a este tipo de arreglos se les llama vector, ya que solo tiene una dimension, a diferencia de las matrices que tienen dos dimensiones.
    printf("ingresa las edades de los alumnos: ");

    for(int i=0; i<5;i++){
        
        scanf("%d", &edades[i]);
        //(IA)aquí uso una iteración para guardar las edades de los alumnos, en cada iteración se guarda la edad en la posición i del arreglo edades, es decir, en la primera iteración se guarda en edades[0], en la segunda en edades[1], y así sucesivamente.
    }
    for(int i=0; i<5;i++){
        printf("la edad del alumno %d es: %d\n",i+1,edades[i]);
    }
    return 0;
}