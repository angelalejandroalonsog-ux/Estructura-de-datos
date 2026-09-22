#include <iostream>
using namespace std;

class Persona{
    //atributos
    private:
    int edad;
    string nombre;
    public:
    Persona();
    Persona(int a, string b);
    //void definirEdad();
    //void definirNombre();
    void mostrarEdad();
    void mostrarNombre();
};
//inicializamos métodos, primero el constructo
//al ser un método de tipo constructor usamos el mismo nombre de la clase:
//clase::clase por mucho que tengan el mismo nombre el segundo es el constructor.
Persona::Persona(int _edad, string _nombre){ //constructor que nos sirve para inicializar los atributos de la clase

    edad=_edad;
    nombre=_nombre;

}
//recordemos que el *operador de resolución de ámbito* nos dice a qué clase pertenece el método que estamos declarando.
void Persona::mostrarNombre(){
    cout <<"Hola!, me llamo: " <<nombre <<endl;
    //aunque no le estamos pasando como parámetro el "nombre", el método lo sabe pues puede acceder a él al ser parte de la misma clase
}
void Persona::mostrarEdad(){
    cout <<"Hola!, mi edad es: "<<edad<<endl;
    //nuevamente el método hace uso de el atributo encapsulado
    //únicamente podemos acceder a estos atributos por medio de los metodos de la clase.
}
int main(){
    int ne,a=22;
    string nn,b="Alejandro Alonso";
    //creamos un objeto de la clase Persona

    Persona miviejo= Persona(21,"Daniel Santiago"); //esta es una forma de inicializar un objeto

    //ahora para acceder a lo almacenado en un objeto de clase Persona, debemos hacer lo siguiente.
    miviejo.mostrarEdad();
    miviejo.mostrarNombre();
    //aquí está la otra forma de incializar un objeto.
    Persona yo(a,b); //para mí se ve mucho mejor que la otra, ni si quiera sé si la otra se use xd.
    yo.mostrarEdad();
    yo.mostrarNombre();

    cout << "Ingresa un nombre: " <<endl;
    getline(cin,nn);
    cout <<"ingresa una edad:"<<endl;
    cin>>ne;
    Persona p1(ne,nn);
    p1.mostrarEdad();
    p1.mostrarNombre();

    return 0;
}