//figura 11.4 NumeroTelefonico.cpp
//operadores de incersión de flujo y de extracción de flujo sobrecargados...
//para la clase numeroTelefonico.
#include <iomanip>
#include <iostream>
#include "numeroTelefonico.h"
using std::setw;
using std::cout;
using std::cin;
using std::endl; //wtf qué es todo esto


ostream &operator<<(ostream &salida,const numeroTelefonico &numero){
    salida<<"("<<numero.codigoArea<<")"<<numero.intercambio<<"-"<<numero.linea;
    return salida;
}
istream &operator>>(istream &entrada, numeroTelefonico &numero){
    entrada.ignore();
    entrada>>setw(3)>>numero.codigoArea;
    entrada.ignore(2);
    entrada>>setw(3)>>numero.intercambio;
    entrada.ignore();
    entrada>>setw(4)>>numero.linea;
    return entrada;
}
/*
Fig 11.5: fig 11.05.cpp
demostración de los operadores de la inserción de flujo y de extracción
de flujo sobrecargados de la clase numeroTelefonico
*/
int main(){
    numeroTelefonico telefono;
    cout<<"Escriba el numero telefonico en la forma (123) 456-7890: "<<endl;
    cin>>telefono;
    cout<<"El numero telefonico introducido fue: "<<telefono<<endl;
    return 0;
}