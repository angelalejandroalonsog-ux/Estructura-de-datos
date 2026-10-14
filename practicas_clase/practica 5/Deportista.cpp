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