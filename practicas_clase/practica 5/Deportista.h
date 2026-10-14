#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <string>

class Deportista
{
public:
    Deportista(int = 0, std::string = "", int = 0, std::string = "");

    void establecerNumeroDeSocio(int);
    int obtenerNumeroDeSocio() const;

    void establecerNombre(std::string);
    std::string obtenerNombre() const;

    void establecerEdad(int);
    int obtenerEdad() const;

    void establecerDeporte(std::string);
    std::string obtenerDeporte() const;

private:
    int numeroDeSocio;
    char nombre[15];
    int edad;
    char deporte[15];
};

#endif