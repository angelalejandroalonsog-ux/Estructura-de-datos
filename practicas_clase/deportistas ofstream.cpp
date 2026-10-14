//Flujo de entrada/ifstream
//Leeremos e imprimiremos un txt con este programa
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

void mostrarRegistro(string * const nombre_, int edad_, string   * const deporte_){
    cout<<left<<setw(10)<<*nombre_<<setw(10)<<edad_<<setw(10)<<*deporte_<<endl;
}

int main(){

    int edad;
    string nombre, deporte;

    ifstream archivoDeportsitasEntrada; //objeto especial de la clase ifstream 
    archivoDeportsitasEntrada.open("Deportistas.txt",ios::in); //con el objeto accedemos al método open para abrir el txt

    if (!archivoDeportsitasEntrada)//verificar si el txt existe
    {
        cerr<<"No se puede abrir el archivo."<<endl;
        exit(1);
    }
    //con esta linea imprimimos la cabecera de la tabla
    cout<<left<<setw(10)<<"NOMBRE"<<setw(10)<<"EDAD"<<setw(10)<<"DEPORTE"<<endl; //setw (set wide) dice cuantos espacios tendrá un ancho mínimo, pero no un máximo

    while (archivoDeportsitasEntrada>>nombre>>edad>>deporte)
    {
        mostrarRegistro(&nombre,edad,&deporte);   //recordar poner & para pasar la dirección de memoria
    }
    archivoDeportsitasEntrada.close();

    return 0;
}