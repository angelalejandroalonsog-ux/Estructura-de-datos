#include <iostream>
#include <string>
using namespace std;
#include "planPila.h"

class cheque{
    private:
        int numero, cuentaDepositar;
        string banco;
        double monto;
    public:
        cheque();
        cheque(int, string, int, double);
        ~cheque();
        void imprimeDatos();
};

cheque::cheque(){}

cheque::cheque(int numCuenta, string nomBanco, int cuenta, double _monto){
    numero=numCuenta;
    cuentaDepositar=cuenta;
    monto=_monto;
    banco=nomBanco;
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
        chequeRechazado(int,string,int,double);
        ~chequeRechazado();
        void imprimeDatos();
};
chequeRechazado::chequeRechazado(){} 
//constructor de clase heredada, clase hija.
chequeRechazado::chequeRechazado(int numCuenta, string nomBanco, int cuenta, double _monto):cheque(numCuenta,nomBanco,cuenta,_monto){
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
    cheque chequeCli;
    if (!cheques.pilaVacia())
    {
        cheques - &chequeCli;
        cout<<"Cheque procesado:"<<endl;
        chequeCli.imprimeDatos();
        system("pause");
    }
    else
    {
        cout<<"no hay cheques por procesar..."<<endl;
        system("pause");
    }
}
void banco::procesarChequeRe(){
    chequeRechazado chequeCliR;
    if (!chequesRe.pilaVacia())
    {
        chequesRe - &chequeCliR;
        cout <<"Cheque rechazado Procesado..."<<endl;
        chequeCliR.imprimeDatos();

    }
    else 
    {
        cout <<"No hay cheques rechazados por procesar..."<<endl;
        system("pause");
    }
}

void banco::registroCheque(cheque chequeCli){
    if (!cheques.pilaLlena())
    {
        cout <<"Registrando cheque:"<<endl;
        chequeCli.imprimeDatos();
        cheques + chequeCli;
    }
    
}
void banco::registroChequeR(chequeRechazado chequeCli){
    if (!chequesRe.pilaLlena())
    {
        cout <<"Registradndo el cheque rechazado: "<<endl;
        chequeCli.imprimeDatos();
        chequesRe + chequeCli;
    }
    else 
        cout<<"No se pudo registrar el cheque rechazado por falta de espacio"<<endl;
}

int main(){
    banco banco;
    int cuenta, cuentaD,opc;
    double monto;
    string nBanco;

    do
    {
        system("cls");
        cout << "\n\tBienvenido a su banco!\n\tIntroduzca una opcion:"<<endl;
        cout <<"\t1. Crear nuevo cheque." <<endl;
        cout <<"\t2. Crear cheque Rechazado."<<endl;
        cout <<"\t3. Eliminar Cheque." <<endl;
        cout <<"\t4. Eliminar cheque Rechazado."<<endl;
        cout <<"\t0. Abandonar programa..."<<endl;
        cin >>opc;
        switch (opc)
        {
        case 1:
        {
            system("cls");
            cout<<"Introduzca su numero de cuenta: "<<endl;
            cin >>cuenta;
            cout<<"Introduzca la cuenta a depositar: "<<endl;
            cin >>cuentaD;
            cout<<"Introduzca el monto a depositar: "<<endl;
            cin >>monto;
            cout<<"introduzca el nombre del banco: "<<endl;
            getline(cin>>ws, nBanco);
            cheque objCheque(cuenta, nBanco, cuentaD,monto);
            banco.registroCheque(objCheque);
            system("pause");
            break;
        }
        case 2: 
        {
            cout<<"MENÚ DE CHEQUE RECHAZADO: "<<endl;
            cout<<"Introduzca su numero de cuenta: "<<endl;
            cin >>cuenta;
            cout<<"Introduzca la cuenta a depositar: "<<endl;
            cin >>cuentaD;
            cout<<"Introduzca el monto a depositar: "<<endl;
            cin >>monto;
            cout<<"introduzca el nombre del banco: "<<endl;
            getline(cin>>ws, nBanco); //MUY IMPORTANTE, USAR EL cin>>ws para no comerse el enter anterior.
            chequeRechazado objChequeRe(cuenta, nBanco, cuentaD,monto);
            banco.registroChequeR(objChequeRe);
            //cout<<"cuenta: "<<cuenta <<" cuentaD: "<<cuentaD<<" monto: "<<monto<<" banco: "<<nBanco<<endl;
            system("pause");
            break;
        }
        case 3:
        {
            banco.procesarCheque();
            break;
        }
        case 4:
        {
            banco.procesarChequeRe();
            break;
        }
        case 0:
            system("cls");
            cout<<"Gracias por usar el programa..."<<endl;
            break;

        default:
            system("cls");
            cout<<"\t\t\nValor incorrecto, intente de nuevo..."<<endl;
            system("pause");
        }
    }
    while (opc!=0);
    

    return 0;
}