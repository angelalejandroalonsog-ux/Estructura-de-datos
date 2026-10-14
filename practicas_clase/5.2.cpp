/* Se define la plantilla de la clase
Pila usando sobrecarga de
operadores en los métodos de inserción y eliminación. */

#include <iostream>
using namespace std;
#define MAX 10

template <class T>
class Pila {
private:
    T EspacioPila[MAX];
    int Tope;

public:
    Pila();
    void operator+(T );
    void operator-(T*);
    int PilaLlena();
    int PilaVacia();
};

template <class T>
Pila<T>::Pila() : Tope(-1) {}

template <class T>
int Pila<T>::PilaLlena() {
    if (Tope == MAX - 1)
        return 1;
    else
        return 0;
}


template <class T>
int Pila<T>::PilaVacia() {
    if (Tope == -1)
        return 1;
    else
        return 0;
}

/* Operador ++ sobrecargado: inserta un elemento en la pila */
template <class T>
void Pila<T>::operator+(T Valor) {
    Tope++;
    EspacioPila[Tope] = Valor;
}

/* Operador -- sobrecargado: elimina un elemento de la pila */
template <class T>
void Pila<T>::operator-(T *Valor) {
    *Valor = EspacioPila[Tope];
    Tope--;
}

int main(){
    Pila<int> ObjPila;
    int Indice;
    /* Si la pila está vacía se le agregan MAX elementos */
    if (ObjPila.PilaVacia()){
        for (Indice = 0; Indice < MAX; Indice++)
            ObjPila +(Indice * 2);
            }
    /* Mientras la pila no se vacíe, se quita un elemento y se imprime */
    while (!ObjPila.PilaVacia()) {
        ObjPila -(&Indice);
        cout <<Indice<<endl;
    }
}
