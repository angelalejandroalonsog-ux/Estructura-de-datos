#include <iostream>
#include <cstring>
using namespace std;
#include "planPila.h"

class cheque{
    private:
        int numero, cuentaDepositar;
        char banco[10];
        double monto;
    public:
        cheque();
        cheque(int, char[], int, double);
        ~cheque();
        void imprimeDatos();
};

cheque::cheque(){}

cheque::cheque(int numCuenta, char *nomBanco, int cuenta, double _monto){
    numero=numCuenta;
    cuentaDepositar=cuenta;
    monto=_monto;
    strcpy(banco, nomBanco);
}
cheque::~cheque(){}

void cheque::imprimeDatos(){
    cout<<"Numero de cheque: "<<numero<<endl;
    cout<<"Banco: "<<banco<<endl;
    cout<<"cuenta en ser Depositado: "<<cuentaDepositar<<endl;
    cout<<"Monto depositado: "<<monto<<endl;
}

class chequeRechazado: public cheque{ //herencia???
    private: 
        double cargo;
    public:
        chequeRechazado();
        chequeRechazado(int,char[],int,double);
        ~chequeRechazado();
        void imprimeDatos();
};
chequeRechazado::chequeRechazado(){} 
//constructor de clase heredada, clase hija.
chequeRechazado::chequeRechazado(int numCuenta, char *nomBanco, int cuenta, double _monto):cheque(numCuenta,nomBanco,cuenta,_monto){
    cargo =_monto*0.10;
}

chequeRechazado::~chequeRechazado(){}
void chequeRechazado::imprimeDatos(){
    cheque::imprimeDatos();
    cout<<"Cargo por rechazo: "<<cargo<<endl;
}
class banco{
    private:
        pila<cheque> cheques;
        pila<chequeRechazado> chequesRe;
    public:
        banco();
        ~banco();
        void procesarCheque();
        void procesarChequeRe();
        void registroCheque(cheque);
        void registroChequeR(chequeRechazado);
};
banco::banco(){}
banco::~banco(){}

void banco::procesarCheque(){
    cheque chequeCliente
}