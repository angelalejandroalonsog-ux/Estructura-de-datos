//ofstream/Flujo de salida
//Lo que hace este código es crear el txt y sobreescribirlo cuando vuelve a ejecutarse el código.

#include <iostream>
#include <fstream> //instala una clase con sus propios métodos
#include <cstdlib>
#include <string>
using namespace std;

int main(){

    string nombre,deporte;
    int edad;

    //aquí creamos un objeto de la clase ofstream
    std::ofstream archivoDeportistasSalida; //archivo lógico.
    
    archivoDeportistasSalida.open("Deportistas.txt",ios::out); //esto es un método de la clase ofstream
    /*lo que hará es abrir un txt que esté alojado en la misma carpeta que el archivo cpp
    si no existe el archivo, este lo creará, con ios::out, */

    //acá vamos a poner un condicional de seguridad
    if(!archivoDeportistasSalida){ //el Operador ! se sobrecarga
        cerr<<"No se pudo abrir el archivo"<<endl;
        exit(1); //esta mamada la usa con la libreria cstdlib, fuerza la salida con un valor
    }

    cout<<"introduce un nombre, edad y deporte."<<endl
        <<"Introduce fin de archivo para terminar la entrada.\n? ";

    while (cin>>nombre>>edad>>deporte){ //mientras que estén ingresando datos. Aquí guarda en las variables locales
        archivoDeportistasSalida<<nombre<<' '<<edad<<' '<<deporte<<endl; //guardará todo dentro del archivo, incluye espacios.
        //en la anterior linea extrae los valores de las variables y los introduce al txt
        cout<<"? ";
    }
    archivoDeportistasSalida.close(); //cierra el txt
    return 0;
    
}
