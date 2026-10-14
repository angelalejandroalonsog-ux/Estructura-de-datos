//11.3 numeroTelefonico.h
//Definición de la clase NumeroTelefonico
#ifndef NUMEROTELEFONICO_H
#define NUMEROTELEFONICO_H
#include <iostream>
using namespace std;
using std::ostream;
using std::istream;
#include<string>
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