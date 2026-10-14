#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::cin;
using std::string;

//Header: ClaseDeportista
class datosDeportista{
    private:
        int numeroCuenta;
        string nombreDeportista; //puede ser char[x]
        int edad;
        string deporte; //recuerda que los miembros se inicializan en el orden en que fueron declarados en la clase, no en el orden que escribas en la lista.
    public:
    datosDeportista(int, string, int, string);
    void establecerNumCuenta(int numCuenta){
        numeroCuenta=numCuenta;
    }
    int obtenerNumCuenta()const{
        return numeroCuenta;
    }
    void establecerNombre(string nomD){
        nombreDeportista = nomD;
    }
    string obtenerNombre()const{
        return nombreDeportista;
    }
    void establecerEdad(int _edad){
        edad=_edad;
    }
    int obtenerEdad() const{
        return edad;
    }
    void establecerDeporte(string _deporte){
        deporte=_deporte;
    }
    string obtenerDeporte()const{
        return deporte;
    }
};
//lista de inicialización
datosDeportista::datosDeportista(
    int _numeroCuenta,
    string _nombreDeportista,
    int _edad,
    string _deporte)
    //No podemos hacer una lista usando los métodos, deben ser los atributos
    :   numeroCuenta(_numeroCuenta),
        nombreDeportista(_nombreDeportista),
        edad(_edad),
        deporte(_deporte){}
