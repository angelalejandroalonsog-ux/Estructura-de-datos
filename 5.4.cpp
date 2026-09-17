#include <iostream>
#define max 10
using namespace std;

template <class T>
class cola {
    private:
        T espacioCola[max];
        int frente, final;
    public: 
        cola();
        void insertarCola(T);
        void eliminarCola(T*);
        int colaLlena();
        int colaVacia();
};

template <class T>
cola<T>::cola(){
    frente=-1;
    final=-1;
}
template <class T>
void cola<T>::insertarCola(T dato){
    espacioCola[++final]=dato;
    if (final==0){
        frente=0;
    }
}

template <class T>
void cola<T>::eliminarCola(T *dato){
    *dato=espacioCola[frente];
    if (frente==final)
    {
        frente=-1;
        final=-1;
    }
    else{
        frente++;
    }
}
template <class T>
int cola<T>::colaLlena(){
    if (final==max)
    {
        return 1;
    }
    else
        return 0;    
}
template <class T>
int cola<T>::colaVacia(){
    if (frente==-1)
    {
        return 1;
    }
    else {
        return 0;
    }
}


int main(){
    cola<int> objCola;
    int valor;
    if(objCola.colaLlena()!=1){
        objCola.insertarCola(5);
    }
    else{
        cout<<"Cola llena."<<endl;

    }
    if (objCola.colaVacia()!=1)
    {
        objCola.eliminarCola(&valor);
        cout<<valor<<endl;
    }
    else{
        cout<<"Cola vacía"<<endl;
    }
    
    return 0;
}