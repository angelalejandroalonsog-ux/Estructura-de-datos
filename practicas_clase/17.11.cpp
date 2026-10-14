#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <cstdlib>
using std::exit;
using std::cerr;
using std::endl;
using std::ios;
using std::fstream;
#include "17.10.h"

DatosCliente::DatosCliente(
    int valorNumeroCuenta,
    std::string valorApellidoPaterno,
    std::string valorPrimerNombre,
    double valorSaldo)
{
    establecerNumeroCuenta(valorNumeroCuenta);
    establecerApellidoPaterno(valorApellidoPaterno);
    establecerPrimerNombre(valorPrimerNombre);
    establecerSaldo(valorSaldo);
}

int DatosCliente::obtenerNumeroCuenta() const
{
    return numeroCuenta;
}

void DatosCliente::establecerNumeroCuenta(int valorNumeroCuenta)
{
    numeroCuenta = valorNumeroCuenta;
}

std::string DatosCliente::obtenerApellidoPaterno() const
{
    return apellidoPaterno;
}

void DatosCliente::establecerApellidoPaterno(std::string cadenaApellidoPaterno)
{
    const char* valorApellidoPaterno = cadenaApellidoPaterno.data();

    int longitud = cadenaApellidoPaterno.size();
    longitud = (longitud < 15 ? longitud : 14);

    strncpy(apellidoPaterno, valorApellidoPaterno, longitud);
    apellidoPaterno[longitud] = '\0';
}

std::string DatosCliente::obtenerPrimerNombre() const
{
    return primerNombre;
}

void DatosCliente::establecerPrimerNombre(std::string cadenaPrimerNombre)
{
    const char* valorPrimerNombre = cadenaPrimerNombre.data();

    int longitud = cadenaPrimerNombre.size();
    longitud = (longitud < 10 ? longitud : 9);

    strncpy(primerNombre, valorPrimerNombre, longitud);
    primerNombre[longitud] = '\0';
}
double DatosCliente::obtenerSaldo() const {
    return saldo;
}
void DatosCliente::establecerSaldo(double valorSaldo){
    saldo = valorSaldo;
}

int main(){
    std::ofstream creditoSalida("credito.dat", ios::out | ios::binary);

    if (!creditoSalida)
    {
        cerr<<"No se pudo abrir el archivo."<<endl;
    }
    DatosCliente clienteEnBlanco;

    for (int i = 0; i < 100; i++)
    {
        creditoSalida.write(reinterpret_cast < const char * >( &clienteEnBlanco),
        sizeof(DatosCliente));
    }
    return 0;
}

    
    

  