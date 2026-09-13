#include <iostream>
#define max 10
using namespace std;

template <class T>
class pila{

    private:
        T espacioPila[max];
        int tope;
    public:
        pila();
        void operator+(T );
        void operator-(T*);
        int pilaLlena();
        int pilaVacia();

};

template <class T>
pila<T>::pila():tope(-1){} //constructor con lista de inicialización

template <class T>
int pila<T>::pilaLlena(){
    if (tope==max-1)
        return 1;
    else 
        return 0;
}
template <class T>
int pila<T>::pilaVacia(){
    if (tope==-1)
        return 1;
    else 
        return 0;
}
template <class T>
void pila<T>::operator-(T *valor){
    *valor=espacioPila[tope];
    tope--;
}
template <class T>
void pila<T>::operator+(T valor){
    tope++;
    espacioPila[tope]=valor;
}

int main(){
    pila<int> objPila;
    int indice;
    if (objPila.pilaVacia()){
        for ( indice = 0; indice < max; indice++)
        {
            objPila + (indice);
        }        
    }
    while (!objPila.pilaVacia())
    {
        objPila - (&indice);
        cout <<indice<<endl;
    }
    
    
}