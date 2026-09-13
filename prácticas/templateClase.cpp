//Ejemplo del uso de template con una clase.
#include <iostream>

using namespace std;

//Template <class t> indica que: "Lo que viene a continuación será una plantilla que recibe un tipo como parámetro,
//y dentro de la plantilla ese tipo se llamará T."

template <class T>
class Caja
{
private:
    T dato; //aquí declaramos una variable de tipo T, que será el tipo de dato que se le pase a la clase.

    //IMPORTANTE RECORDAR QUE T ES UN PARAMETRO DE TIPO, NO UN TIPO DE DATO, POR LO QUE PUEDE SER CUALQUIER TIPO DE DATO, INCLUYENDO TIPOS DE DATOS PRIMITIVOS, CLASES, ESTRUCTURAS, ETC.

public:
    void guardar(T valor) //aquí declaramos una función que recibe un parámetro de tipo T, que será el tipo de dato que se le pase a la clase.
    {
        dato = valor;
    }

    T obtener() //aquí declaramos una función que devuelve un valor de tipo T.
    {
        return dato;
    }
    //estas funciones estan declaradas dentro de la clase, por lo que no es necesario usar el operador de resolución de ámbito (::) para definirlas fuera de la clase.
};
int main(){
    Caja<int> caja1; //aquí creamos un objeto de la clase Caja, y le pasamos el tipo de dato que queremos que almacene, en este caso un int.
    caja1.guardar(5);
    cout << caja1.obtener() << endl;
    Caja<string> caja2; //aquí creamos un objeto de la clase Caja, y le pasamos el tipo de dato que queremos que almacene, en este caso un string.
    caja2.guardar("Hola mundo");
    cout << caja2.obtener() << endl;

    cin.get(); //Usamo cin.get() para esperar a que el usuario presione una tecla antes de cerrar la consola.
    return 0;
}