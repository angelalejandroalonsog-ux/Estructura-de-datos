#include <iostream>
using namespace std; 
void cambiar(int* c){
    
    *c=10;

}


int main(){
    //los punteros podemos usarlos, por ejemplo, con funciones que no retornan nada y necesitan modificar alguna variable de main.
    int num=67;
    cout <<"Numero antes de ser cambiado: "<<num<<endl;
    cambiar(&num);

    cout <<"Numero después de ser cambiado: " << num <<endl;

    return 0;
}