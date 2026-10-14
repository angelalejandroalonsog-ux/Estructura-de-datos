#ifndef DATOSCLIENTE_H
#define DATOSCLIENTE_H

#include <string>

class DatosCliente
{
public:
    DatosCliente(int = 0, std::string = "", std::string = "", double = 0.0); //inicializa con valores predeterminados en los atributos

    void establecerNumeroCuenta(int);
    int obtenerNumeroCuenta() const;

    void establecerApellidoPaterno(std::string);
    std::string obtenerApellidoPaterno() const;

    void establecerPrimerNombre(std::string);
    std::string obtenerPrimerNombre() const;

    void establecerSaldo(double);
    double obtenerSaldo() const;

private:
    int numeroCuenta;
    char apellidoPaterno[15];
    char primerNombre[10];
    double saldo;
};

#endif