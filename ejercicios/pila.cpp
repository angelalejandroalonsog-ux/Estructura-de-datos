#include <iostream>
#define max 10
using namespace std;
/*EL PROGRAMA ORIGINAL USA PREINCREMENTO PUES INICIALIZA EL TOPE EN EL -1, AHORA QUE TOPE INICIA EN 0 LO MODIFIQUÉ PARA QUE HAGA UN POSTINCREMENTO.
    Esto dejó el siguiente vestigio de comentaro: 
    espacioPila es nuestro array, suma el tope
    actual, que es -1 y hace un preincremento, volviendo un 0 para fines de la función, el 
    preincrementento, recordemos que aumento en 1 la variable afectada, pero lo hace antes 
    de poder trabajar con ella.
    Al final, en esa posición del arreglo (un 0 en el primer push), se añadirá el objeto dato.
    */
template <class T>
class pila{
    private: 
    T espacioPila[max]; //es un arreglo de T tipo, que almacena hasta MAX. podemos ingresarle unicamente elementos del tipo T
    //el elemento que le ingresamos está determinado al crear el objeto. (creo)
    int tope; //el tope es nuestro indice, nos indica en qué posición de la pila nos encontramos. se le llama tope pues una pila es vertical.
    public:
    pila();
    void push(T dato);
    void pop(T *dato);
    int pilaLlena();
    int pilaVacia();

};

template <class T>
pila<T>::pila(){
    tope= -1; //es donde inicia nuestro array, al tener 10 elementos tenemos desde el [[0],[1]...[9]]
}
template <class T>
//al momento de querer ingresar algo a la pila:
void pila<T>::push(T dato){
    
    //al arreglo de pila le llamamos espacioPila para diferenciarlo.
    cout <<"------------------------------------" <<endl;
    cout<<"pisicion en la pila(tope pre incremento): [" <<tope<<"]"<<endl; 
    cout <<"Dato ingresado en la posicion anterior: "<<espacioPila[tope]<<endl;
    espacioPila[++tope]=dato;
    cout<<"pisicion en la pila(post incremento): [" <<tope<<"]"<<endl; 
    cout <<"Dato ingresado en la posicion actual: "<<dato<<endl;
    cout <<"Dato ingresado al arreglo pero sacandolo de la pila: "<< espacioPila[tope-1]<<endl; //debe ir un -1 pues tope es nuestro siguiente espacio, no el actual
    cout <<"------------------------------------" <<endl;
    /*
    espacioPila es nuestro array, suma el tope
    actual, que es 0 y hace un postincremento, volviendo a tope en 1 para fines de la función, el 
    post incremento, recordemos que aumenta en 1 la variable afectada, pero lo hace después 
    de trabajar con la variable..
    Al final, en esa posición del arreglo (un 0 en el primer push), se añadirá el objeto dato.
    */
    system("pause");

}

template <class T>
void pila<T>::pop(T *dato){//recibimos la dirección de memoria de Valor gracias a que como parametro tenemos declarado un puntero llamado *dato
    cout <<"CODIGO CON PRE-DECREMENTO"<<endl;
    cout <<"Tope actual: " << tope <<endl;
    cout <<"dato a eliminar con pop: "<< espacioPila[tope]<<endl;
    cout <<"actual numero en valor: "<< *dato<<endl;

    *dato= espacioPila[tope--]; 
    //nuevo tope debería ser 9...
    /*
                            aquí *dato(puntero) está accediendo a la información que aloja su dirección
                            de memoria, dato accede a la dirección de Valor pero
                            gracias a que usamos un asterisco nuevamente en el puntero,
                            podremos acceder a la  memoria de la variable a la que apunta y modificarla.
                            */
    cout <<"Nuevo tope: "<<tope<<endl;
    cout <<"nuevo *dato:  "<< *dato<<endl; //¿Por qué me hace falta guardar el valor que había en el tope antes del pop?
    //espacioPila[tope]=0; //borrado del elemento en la posición 9 del arreglo
    cout <<"nuevo dato en la cima (extraido de la pila):  "<< espacioPila[tope]<<endl; //
    cout <<"tope de la cima (debería estar vacío):  "<< espacioPila[tope+1]<<endl;
}

template <class T>
int pila<T>::pilaLlena(){
    if (tope==max-1)
    {
        return 1;
    }
    else {
        return 0;
    }
}
template <class T>
int pila<T>::pilaVacia(){
    if (tope==-1)
        return 1;

    else
        return 0;
    
}
pila<int> objPila;
int valor=1; //esta unidad en realidad es el siguiente espacio en el arreglo, al encontrarse con tope ya no sube más, decrementa en su lugar.



int main(){
    

    while (objPila.pilaLlena()==0){
        
        objPila.push(valor++);
    }
    if (objPila.pilaVacia()!=1)
    {
        objPila.pop(&valor); //mandamos la dirección del espacio de memoria VALOR como parametro, recibido por un puntero que apunta a su espacio de memoria.
        cout <<"Al tope llegar a 9, cumplirá la regla donde debe ser max-1: "<<max<< endl;
        cout <<"Lo que nos interesa aquí, es que hemos llenado el arreglo. "<< endl;
    }
    


    return 0;
}