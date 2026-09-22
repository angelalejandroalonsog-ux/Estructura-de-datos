#include<iostream>
using namespace std;
#define max 5 //acá no hace falta punto y coma.

class pila{ //clase tipo pila
    private:
    int arregloTipoPila[max]; //nuesra caracteristica de objeto, en este caso, arreglo con estructura de pila (LIFO= last in, first out)
    int topeActual;
    public:
    pila();//constructor de objeto
    void push(int ingreso);
    void pop(int *egreso); //método para sacar elementos y mostrarlos con un puntero
};
pila::pila(){ //las pilas no tienen parametros, lo tiene el arreglo, por eso no tenemos constructor de objeto pila con lista de inicialización (o sí podría?)
    topeActual=0;
}
void pila::push(int ingreso){
    
}
void pila::pop(int *egreso){ //recibimos la dirección de memoria

}

pila objArregloPila();

int main(){
    

    return 0;
}