#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include "Deportista.h"

using namespace std;

Deportista::Deportista(
    int valorNumeroDeSocio,
    string valorNombre,
    int valorEdad,
    string valorDeporte)
{
    establecerNumeroDeSocio(valorNumeroDeSocio);
    establecerNombre(valorNombre);
    establecerEdad(valorEdad);
    establecerDeporte(valorDeporte);
}

int Deportista::obtenerNumeroDeSocio() const
{
    return numeroDeSocio;
}

void Deportista::establecerNumeroDeSocio(int valorNumeroDeSocio)
{
    numeroDeSocio = valorNumeroDeSocio;
}

string Deportista::obtenerNombre() const
{
    return nombre;
}

void Deportista::establecerNombre(string cadenaNombre)
{
    const char *valorNombre = cadenaNombre.data();
    int longitud = cadenaNombre.size();
    longitud = (longitud < 15 ? longitud : 14);

    strncpy(nombre, valorNombre, longitud);
    nombre[longitud] = '\0';
}

int Deportista::obtenerEdad() const
{
    return edad;
}

void Deportista::establecerEdad(int valorEdad)
{
    edad = valorEdad;
}

string Deportista::obtenerDeporte() const
{
    return deporte;
}

void Deportista::establecerDeporte(string cadenaDeporte)
{
    const char *valorDeporte = cadenaDeporte.data();
    int longitud = cadenaDeporte.size();
    longitud = (longitud < 15 ? longitud : 14);

    strncpy(deporte, valorDeporte, longitud);
    deporte[longitud] = '\0';
}

int main()
{
    int numeroDeSocio;
    char nombre[15];
    int edad;
    char deporte[15];

    ofstream archDeporSalida;
    archDeporSalida.open("deportistas.dat", ios::binary | ios::in | ios::out);

    if (!archDeporSalida)
    {
        cerr << "No se pudo abrir el archivo." << endl;
        exit(1);
    }

    Deportista d;

    cout << "Escriba el num. de socio (De 1 a 100, 0 para terminar la entrada)\n? ";
    cin >> numeroDeSocio;
    d.establecerNumeroDeSocio(numeroDeSocio);

    while (d.obtenerNumeroDeSocio() >= 1 && d.obtenerNumeroDeSocio() <= 100)
    {
        cout << "Teclea nombre, edad y deporte\n? ";
        cin >> setw(15) >> nombre;
        cin >> edad;
        cin >> setw(15) >> deporte;

        d.establecerNombre(nombre);
        d.establecerEdad(edad);
        d.establecerDeporte(deporte);

        archDeporSalida.seekp(
            (d.obtenerNumeroDeSocio() - 1) * sizeof(Deportista)
        );

        archDeporSalida.write(
            reinterpret_cast<const char *>(&d),
            sizeof(Deportista)
        );

        cout << "Escriba el num. de socio (De 1 a 100, 0 para terminar la entrada)\n? ";
        cin >> numeroDeSocio;
        d.establecerNumeroDeSocio(numeroDeSocio);
    }

    archDeporSalida.close();

    return 0;
}