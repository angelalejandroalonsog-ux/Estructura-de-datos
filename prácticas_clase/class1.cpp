//class es en sintaxis identico a struct, pero con la diferencia de que en class los datos son privados por defecto, mientras que en struct son publicos por defecto. (IA) es decir, que si no especificamos el tipo de acceso de los datos, en class los datos no se pueden acceder desde fuera de la clase, mientras que en struct si se pueden acceder desde fuera de la estructura.

#include <iostream>
#include <string>

using namespace std;

class ccuenta{
    //atributos
    private:
        string nombre;
        string cuenta;
        double saldo=0;
        double tipoDeInteres;
    //por convención, los constructores son los primeros en ponerse en los métodos.
    //métodos

    public:

        ccuenta()
        {
            saldo = 0.0;
            tipoDeInteres = 0.0;
        };
        //no olvides escribir los parametros en el constructor, o dará un error.
        ccuenta(string nom, string cue, double sal, double tipo){
            //recuerda que estos parametros son exclusivamente locales a este constructor, (IA a partir de aquí) y no tienen nada que ver con los atributos de la clase, por lo que para asignarles un valor a los atributos de la clase, debemos usar los métodos de la clase.
            asignarNombre(nom);
            asignarCuenta(cue);
            saldo = 0;
            ingreso(sal);
            asignarTipoDeInteres(tipo);
        };
        void asignarNombre(string nom){ //función, es decir que debe recibir parametros ya declarados

            if (nom.length()==0 ){

                cout<< "ERROR: Cadena vacia\n";
                return;
            }
            nombre=nom;
        }
        string obtenerNombre(){

            return nombre;
        }


        void asignarCuenta(string cue){
            if (cue.length()==0){
                cout << "ERROR: Cuenta no valida\n";
                return;
            }
            cuenta=cue;
        }
        string obtenerCuenta(){
            return cuenta;
        }
        double obtenerSaldo(){
            return saldo;
        }
        void ingreso(double cantidad){
            if (cantidad<0){
                cout << "Error: Cantidad negativa";
                return;
            }
            saldo=saldo+cantidad;
        }
        void reintegro(double cantidad){
            if (saldo - cantidad < 0){
                cout<< "Error: no dispone de saldo\n";
                return;
            }
            saldo-=cantidad;
        }
        void asignarTipoDeInteres(double tipo){
            if(tipo < 0){
                cout << "Error: Tipo de Interes no valido";
                return;
            }
            tipoDeInteres=tipo;
        }
        double obtenerTipoDeInteres(){
            return tipoDeInteres;
        }


};

int main(){
	ccuenta cuenta01;
    ccuenta cuenta02("Andrea Ochoa", "5678", 6000, 3.5);
    cuenta01.asignarNombre("Angel Alejandro Alonso González");
    cuenta01.asignarCuenta("1234");
    cuenta01.asignarTipoDeInteres(2.5);
    cuenta01.ingreso(12000);
    cuenta01.reintegro(3000);
    cout <<"CUENTA 1"<<endl;
    cout << cuenta01.obtenerNombre() << endl;
    cout << cuenta01.obtenerCuenta() << endl;
    cout << cuenta01.obtenerSaldo() << endl;
    cout << cuenta01.obtenerTipoDeInteres() << endl;
    cout <<"CUENTA 2"<<endl;
    cout << cuenta02.obtenerNombre()<< endl;
    cout << cuenta02.obtenerCuenta()<<endl;
    cout << cuenta02.obtenerSaldo()<<endl;
    cout << cuenta02.obtenerTipoDeInteres() << endl;
    /*
    ccuenta cuenta01; //creamos un objeto en main, con el cual interactuamos

    cuenta01.asignarNombre("Daniel"); //mediante su método "asignarNombre" podemos entregarle un string, el cual es asignado a la variable privada "nombre" de la clase ccuenta.

    cuenta01.obtenerSaldo(); //mediante su método "obtenerSaldo" podemos obtener el valor de la variable privada "saldo" de la clase ccuenta.
    */
    return 0;
}

