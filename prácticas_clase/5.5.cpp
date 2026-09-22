/*
Primer implementación independiente de cola. Código puramente sacado de mis sesos (con algunos momentos donde revise el código 5.4)
Tiene y tuvo sus fallos. No sirve para implementarlo como .h Lo dejo como referencia.
*/
#include <iostream>
#include <windows.h>
using namespace std;
#define max 10

template <class T>
class cola{
    private: 
        T espacioCola[max];
        int frente,final;
    public:
        cola();
        int operator+(T);
        int operator-();
        int colaLlena();
        int colaVacia();
        void mostrar();

};
template<class T>
int cola<T>::colaVacia(){
    if (frente==-1)
    {
        return 1;
    }
    else {
    return 0;
    }
}
template<class T>
int cola<T>::operator+(T dato){
    int res=0;
    espacioCola[++final]=dato;
    if(final==0){
        frente=0;
        res=1;
    } 
    return res;
}
template<class T>
int cola<T>::operator-(){
    int res=0;
    cout<<"Dato a ser eliminado: "<<espacioCola[frente]<<"."<<endl;
    cout<<"frente actual: "<<frente<<endl;
    Sleep(2000);
    if (frente==final)
        {
        frente=-1;
        final=-1;
        }
    else{
        frente++;
        res=1;
    }
    return res;
}
template <class T>
cola<T>::cola(){
    frente=-1;
    final=-1;
}
template <class T>
int cola<T>::colaLlena(){
    if (final==max-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
template<class T>
void cola<T>::mostrar(){
    system("cls");
    if (colaVacia()!=1)
    {
        cout<<"Cola actual: "<<final<<endl;
        for (int i = frente; i<=final; i++){
            
            cout<<"\npos num."<<i<<": "<<espacioCola[i]<<endl;
        }
        system("pause");
    }
    else{
        cout<<"Cola Vacia..."<<endl;
        system("pause");
    }       
}

int main(){
    int valor;
    char opc;
    cola<int> objCola;

    do{
        system("cls");
        cout<<"Ingresa un valor: \n1. Ingresar a cola.\n2. Sacar de la cola\n3. Mostrar cola\n0. Salir"<<endl;
        cin>>opc;
        cin.ignore();

        switch (opc)
        {
        case '1':
            system("cls");
            if(objCola.colaLlena()!=1){
                cout<<"Ingresa valor a entrar en cola: "<<endl;
                cin>>valor;
                cin.ignore();
                objCola + (valor);
            }
            else{
                system("cls");
                cout<<"Cola Llena"<<endl;
                Sleep(2000);
            }
            break;
        case '2':
            if(objCola.colaVacia()!=1){
                system("cls");
                objCola.operator-();
            }
            else{
                cout<<"Cola vacía..."<<endl;
                Sleep(2000);
            }
            break;
        case '3':
            objCola.mostrar();
            break;
        case '0':
            system("cls");
            cout<<"Gracias por usar el programa!!..."<<endl;
            cout<<"saliendo..."<<endl;
            Sleep(2000);
            break;
        default:
            system("cls");
            cout<<"\t\t\n\nVALOR INCORRECTO..."<<endl;
            Sleep(2000);
            break;
        }
    }
    while(opc!='0');
    return 0;
}