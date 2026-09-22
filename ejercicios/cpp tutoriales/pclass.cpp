/*Acá estaba queriendo hacer una práctica por mi cuenta, lo dejaré sólo para recordar el error que cometí.*/

#include <iostream>
using namespace std;

class clase{
    private:
    int numeros;
    string nombre;
    public:
    clase();
    clase(int num, string nom);

}; 
//class::clase(num,nom) acá cometí el error de, en vez de poner el nombre de la clase, le puse class. Además de no darle tipo a los parametros. 
clase::clase(int num,string nom){

}

int main(){

}