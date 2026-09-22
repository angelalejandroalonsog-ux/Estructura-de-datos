#include <iostream>
#include <cstring>

using namespace std;

template <class T>
class Pila
{
private:
    T Datos[2];
    int Tope;

public:
    Pila();
    bool PilaVacia();
    bool PilaLlena();
    void operator+(T);
    void operator-(T*);
};

template <class T>
Pila<T>::Pila()
{
    Tope = -1;
}

template <class T>
bool Pila<T>::PilaVacia()
{
    return Tope == -1;
}

template <class T>
bool Pila<T>::PilaLlena()
{
    return Tope == 1;
}

template <class T>
void Pila<T>::operator+(T Elemento)
{
    Tope++;
    Datos[Tope] = Elemento;
}

template <class T>
void Pila<T>::operator-(T *Elemento)
{
    *Elemento = Datos[Tope];
    Tope--;
}

// Clase Cheque

class Cheque
{
private:
    int Numero, CuentaADepositar;
    char Banco[10];
    double Monto;

public:
    Cheque();
    Cheque(int, char[], int, double);
    ~Cheque();
    void ImprimeDatos();
};

Cheque::Cheque()
{
}

Cheque::Cheque(int NumCta, char *NomBco, int Cta, double Mon)
{
    Numero = NumCta;
    CuentaADepositar = Cta;
    Monto = Mon;
    strcpy(Banco, NomBco);
}

Cheque::~Cheque()
{
}

void Cheque::ImprimeDatos()
{
    cout << "\nNumero de cheque: " << Numero;
    cout << "\nDel banco: " << Banco;
    cout << "\nDepositado en la cuenta: " << CuentaADepositar;
    cout << "\nMonto: " << Monto << endl;
}

// Clase ChequeRechazado

class ChequeRechazado : public Cheque
{
private:
    double Cargo;

public:
    ChequeRechazado();
    ChequeRechazado(int, char[], int, double);
    ~ChequeRechazado();
    void ImprimeDatos();
};

ChequeRechazado::ChequeRechazado()
{
}

ChequeRechazado::ChequeRechazado(int NumCta, char *NomBco, int Cta, double Mon)
    : Cheque(NumCta, NomBco, Cta, Mon)
{
    Cargo = Mon * 0.10;
}

ChequeRechazado::~ChequeRechazado()
{
}

void ChequeRechazado::ImprimeDatos()
{
    Cheque::ImprimeDatos();
    cout << "\nCargo por rechazo: " << Cargo << endl;
}

// Clase Banco

class Banco
{
private:
    Pila<Cheque> Cheques;
    Pila<ChequeRechazado> ChequesRe;

public:
    Banco();
    ~Banco();

    void ProcesarCheque();
    void ProcesarChequeR();
    void RegistroCheque(Cheque);
    void RegistroChequeR(ChequeRechazado);
};

Banco::Banco()
{
}

Banco::~Banco()
{
}

void Banco::ProcesarCheque()
{
    Cheque ChequeCli;

    if (!Cheques.PilaVacia())
    {
        Cheques - &ChequeCli;

        cout << "\n\nCheque eliminado correctamente:";
        ChequeCli.ImprimeDatos();
    }
    else
    {
        cout << "\n\nLa pila de cheques se encuentra vacia.\n";
    }
}

void Banco::ProcesarChequeR()
{
    ChequeRechazado ChequeCli;

    if (!ChequesRe.PilaVacia())
    {
        ChequesRe - &ChequeCli;

        cout << "\n\nCheque rechazado eliminado correctamente:";
        ChequeCli.ImprimeDatos();
    }
    else
    {
        cout << "\n\nLa pila de cheques rechazados se encuentra vacia.\n";
    }
}

void Banco::RegistroCheque(Cheque ChequeCli)
{
    if (!Cheques.PilaLlena())
    {
        cout << "\n\nRegistrando el cheque:";
        ChequeCli.ImprimeDatos();

        Cheques + ChequeCli;
    }
    else
    {
        cout << "\n\nNo se pudo registrar el cheque por falta de espacio.\n";
    }
}

void Banco::RegistroChequeR(ChequeRechazado ChequeCli)
{
    if (!ChequesRe.PilaLlena())
    {
        cout << "\n\nRegistrando el cheque rechazado:";
        ChequeCli.ImprimeDatos();

        ChequesRe + ChequeCli;
    }
    else
    {
        cout << "\n\nNo se pudo registrar el cheque rechazado por falta de espacio.\n";
    }
}

// Funcion principal

int main()
{
    int opcion;

    Banco banco;

    int numCta, cta;
    char nomBco[10];
    double mon;

    do
    {
        cout << "\n\n============================================";
        cout << "\n   MENU - SISTEMA ADMINISTRADOR DE CHEQUES";
        cout << "\n============================================";
        cout << "\n1. Insertar Cheque";
        cout << "\n2. Eliminar Cheque";
        cout << "\n3. Insertar Cheque Rechazado";
        cout << "\n4. Eliminar Cheque Rechazado";
        cout << "\n5. Salir";
        cout << "\n\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            cout << "\nIngrese el numero de cheque: ";
            cin >> numCta;

            cout << "Ingrese el nombre del banco: ";
            cin >> nomBco;

            cout << "Ingrese la cuenta a depositar: ";
            cin >> cta;

            cout << "Ingrese el monto: ";
            cin >> mon;

            Cheque cheque(numCta, nomBco, cta, mon);

            banco.RegistroCheque(cheque);

            break;
        }

        case 2:
        {
            banco.ProcesarCheque();

            break;
        }

        case 3:
        {
            cout << "\nIngrese el numero de cheque rechazado: ";
            cin >> numCta;

            cout << "Ingrese el nombre del banco: ";
            cin >> nomBco;

            cout << "Ingrese la cuenta a depositar: ";
            cin >> cta;

            cout << "Ingrese el monto: ";
            cin >> mon;

            ChequeRechazado chequeR(numCta, nomBco, cta, mon);

            banco.RegistroChequeR(chequeR);

            break;
        }

        case 4:
        {
            banco.ProcesarChequeR();

            break;
        }

        case 5:
        {
            cout << "\nSaliendo del programa...\n";

            break;
        }

        default:
        {
            cout << "\nOpcion invalida. Intente nuevamente.\n";

            break;
        }
        }

    } while (opcion != 5);

    return 0;
}