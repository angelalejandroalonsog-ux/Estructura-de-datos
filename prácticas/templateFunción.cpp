//valor absoluto de un número.
#include<iostream>

using namespace std;

template <class T>
void valorAbsoluto(T &x){ //en esta linea usamos el &x porque queremos que el valor de x se modifique en la función y no solo en la copia de la variable.
    if(x<0){
        x=-x; //también podría ser x*=-1; pero es más claro y entendible usar x=-x;
    }
    //si la función regresara un valor del tipo entero, se tendría que declarar como: T valorAbsoluto(T x) y al final de la función se tendría que poner return x;
    //pero como en este caso es un tipo void, una vez que se modifique el valor de x, no es necesario regresar un valor, ya que la variable original se modificará.
    //modificamos el valor de x, y como es una referencia, el valor original de la variable que se pasó a la función también se modificará.
    //recordemos que la referencia es un alias de la variable original, por lo que cualquier cambio que se haga en la referencia también se reflejará en la variable original.
}

int main(){

    cout<<"Ingrese un número: ";
    int numero;
    cin>>numero;
    valorAbsoluto(numero);
    cout<<"El valor absoluto es: "<<numero<<endl;

    //también podemos usar la función con un número de tipo float, double, etc.
    //actualmente ya no es necesario usar el getchar() para pausar la ejecución del programa, ya que podemos usar el cin.get() para esperar a que el usuario presione una tecla antes de cerrar la consola.
    cin.get();
    //esto es más conveniente, ya que no necesitamos incluir la librería <conio.h> para usar el getchar(), y además es más portable, ya que funciona en cualquier sistema operativo.
    //cin.get() espera a que el usuario presione una tecla, y luego continúa con la ejecución del programa.
    return 0;
}
