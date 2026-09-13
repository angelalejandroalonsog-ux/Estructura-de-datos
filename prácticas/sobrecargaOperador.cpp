#include <iostream>
using namespace std;

class complexnum{ //creamos nuestra clase complexnum, que representará un número complejo.

    private:  //como Atributos privados, declaramos dos variables de tipo double, una para la parte real y otra para la parte imaginaria del número complejo.
        double realA;
        double imgA;
    
    public: //aquí van nuestros métodos públicos. Las funciones que hará esta clase.

        //constructor
        complexnum(double realP, double imgP) : /*a partir de aquí*/realA(realP), imgA(imgP) {} //(Lista de inicialización)}
        //inicializamos las variables privadas con los valores que se le pasen al constructor.

        //sobrecarga del operador + 

        complexnum operator+(const complexnum &other) const {
            double newreal = realA +other.realA; //sumamos la parte real del número complejo actual con la parte real del número complejo que se le pase como parámetro.
            double newimg = imgA + other.imgA; //sumamos la parte imaginaria del número complejo actual con la parte imaginaria del número complejo que se le pase como parámetro.
            return complexnum(newreal, newimg); //retornamos un nuevo objeto de la clase complexnum con los valores sumados.
        }
};

int main(){

    complexnum num_1(1.3, 8.7); //creamos un objeto de la clase complexnum, y le pasamos los valores de la parte real y la parte imaginaria del número complejo.
    complexnum num_2(3.8, 2.1); //creamos otro objeto de la clase complexnum, y le pasamos los valores de la parte real y la parte imaginaria del número complejo.

    //hay dos formas ahora de sumar estos dos números complejos, una es usando la función que creamos en la clase complexnum, y otra es usando el operador + que sobrecargamos.
    complexnum res_1 = num_1.operator+(num_2); //usamos la función que creamos en la clase complexnum, y le pasamos como parámetro el objeto num_2.

    complexnum res_2 = num_1 + num_2; //usamos el operador + que sobrecargamos, y le pasamos como parámetro el objeto num_2.


    return 0;
}