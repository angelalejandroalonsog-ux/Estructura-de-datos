//11.3 numeroTelefonico.h
//Definición de la clase NumeroTelefonico
#ifndef NUMEROTELEFONICO_H //en vez de #ifndef mejor usar #pragma once, ifndef es más clásico.
#define NUMEROTELEFONICO_H
#include <iostream>
using std::ostream;
using std::istream;
#include<string>
using std::string;
class numeroTelefonico{
    private:
        string codigoArea;
        string intercambio;
        string linea;
    public:
        friend ostream &operator<<(ostream&, const numeroTelefonico&);
        friend istream &operator>>(istream&, numeroTelefonico&);
};

#endif