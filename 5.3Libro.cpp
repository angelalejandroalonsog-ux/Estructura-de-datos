/* Se presenta un modelo simplificado de un banco el cual recibe
cheques, los registra (almacenándolos temporalmente en pilas), y
posteriormente los procesa. Se usan las clases Cheque,
ChequeRechazado, Banco y Pila (esta última no se define sino que se
incluye en la biblioteca PlanPila.h). */

#include "PlanPila.h"

/* Definición de la clase Cheque. */
class Cheque {
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

/* Constructor por omisión */
Cheque::Cheque() {}

/* Constructor con parámetros */
Cheque::Cheque(int NumCta, char *NomBco, int Cta, double Mon) {
    Numero = NumCta;
    CuentaADepositar = Cta;
    Monto = Mon;
    strcpy(Banco, NomBco);
}

/* Destructor */
Cheque::~Cheque() {}

/* Método que imprime los datos */
void Cheque::ImprimeDatos() {
    cout << "\nNúmero de cheque: " << Numero;
    cout << "\nDel banco: " << Banco;
    cout << "\nDepositado en la cuenta: " << CuentaADepositar;
    cout << "\nMonto: " << Monto << endl;
}

/* Clase derivada ChequeRechazado */
class ChequeRechazado : public Cheque {
private:
    double Cargo;

public:
    ChequeRechazado();
    ChequeRechazado(int, char[], int, double);
    ~ChequeRechazado();
    void ImprimeDatos();
};

/* Constructor por omisión */
ChequeRechazado::ChequeRechazado() {}

/* Constructor con parámetros */
ChequeRechazado::ChequeRechazado(int NumCta, char *NomBco, int Cta, double Mon)
    : Cheque(NumCta, NomBco, Cta, Mon) {
    Cargo = Mon * 0.10;
}

/* Destructor */
ChequeRechazado::~ChequeRechazado() {}

/* Método que imprime datos */
void ChequeRechazado::ImprimeDatos() {
    Cheque::ImprimeDatos();
    cout << "\nCargo por rechazo: " << Cargo << endl;
}

/* Clase Banco */
class Banco {
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

/* Constructor */
Banco::Banco() {}

/* Destructor */
Banco::~Banco() {}

/* Procesar cheque */
void Banco::ProcesarCheque() {
    Cheque ChequeCli;
    if (!Cheques.PilaVacia()) {
        Cheques -- ChequeCli;
        cout << "\n\nCheque procesado: ";
        ChequeCli.ImprimeDatos();
    } else
        cout << "\n\nNo hay cheques por procesar.\n\n";
}

/* Procesar cheque rechazado */
void Banco::ProcesarChequeR() {
    ChequeRechazado ChequeCli;
    if (!ChequesRe.PilaVacia()) {
        ChequesRe -- ChequeCli;
        cout << "\n\nCheque rechazado procesado: ";
        ChequeCli.ImprimeDatos();
    } else
        cout << "\n\nNo hay cheques rechazados por procesar.\n\n";
}

/* Registrar cheque */
void Banco::RegistroCheque(Cheque ChequeCli) {
    if (!Cheques.PilaLlena()) {
        cout << "\n\nRegistrando el cheque: ";
        ChequeCli.ImprimeDatos();
        Cheques ++ ChequeCli;
    } else
        cout << "\n\nNo se pudo registrar el cheque por falta de espacio.\n\n";
}

/* Registrar cheque rechazado */
void Banco::RegistroChequeR(ChequeRechazado ChequeCli) {
    if (!ChequesRe.PilaLlena()) {
        cout << "\n\nRegistrando el cheque rechazado: ";
        ChequeCli.ImprimeDatos();
        ChequesRe ++ ChequeCli;
    } else
        cout << "\n\nNo se pudo registrar el cheque rechazado por falta de espacio.\n\n";
}

/* Función principal */
int main() {
    Cheque Uno(1718, "Banamex", 14418, 18000.00);
    Cheque Dos(1105, "Bancomer", 13200, 12319.62);
    ChequeRechazado Tres(1816, "Banorte", 12850, 14000.00);
    ChequeRechazado Cuatro(1905, "Bancomer", 13468, 50000.00);

    Banco MiBanco;

    MiBanco.RegistroCheque(Uno);
    MiBanco.RegistroCheque(Dos);
    MiBanco.RegistroChequeR(Tres);
    MiBanco.RegistroChequeR(Cuatro);

    MiBanco.ProcesarCheque();
    MiBanco.ProcesarChequeR();
    MiBanco.ProcesarCheque();
    MiBanco.ProcesarChequeR();

    MiBanco.ProcesarCheque();
    MiBanco.ProcesarChequeR();

    return 0;
}
