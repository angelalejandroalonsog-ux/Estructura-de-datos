#define MAX 10
#include <iostream>
using namespace std;

template <class T>
class Pila {
private:
    T EspacioPila[MAX];
    int Tope;

public:
    Pila();
    void Push(T Dato);
    void Pop(T *Dato);
    int PilaLlena();
    int PilaVacia();
};

template <class T>
Pila<T>::Pila() {
    Tope = -1;
}

template <class T>
void Pila<T>::Push(T Dato) {
    cout << "dato: " << Dato << endl;
    cout << "tope: " << Tope << endl;
    EspacioPila[++Tope] = Dato;
    cout << "Nuevo tope: " << Tope << endl;
}

template <class T>
void Pila<T>::Pop(T *Dato) {
    cout << "dato: " << *Dato << endl;
    cout << "Tope actual: " << Tope << endl;
    *Dato = EspacioPila[Tope--];
    cout << "nuevo tope: " << Tope << endl;
    cout << "nuevo dato: " << *Dato << endl;
}

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


int main() {
    Pila<int> ObjPila;
    int Valor = 0;


    while (ObjPila.PilaLlena() != 1)
        ObjPila.Push(Valor++);

    if (ObjPila.PilaVacia() != 1) {

        ObjPila.Pop(&Valor);
    }
}
