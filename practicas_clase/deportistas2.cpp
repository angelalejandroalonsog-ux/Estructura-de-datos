#include <iostream>
#include <fstream>// Para la clase ifstream
#include <iomanip>// Para left, setw
#include <cstdlib>// Para exit()

using namespace std;

// Prototipo de función
void mostrarRegistro(char * const, int, char * const);

int main() {
    // Tres campos que conforman un registro
    char nombre[30];
    int edad;
    char deporte[20];

    ifstream archivoDeportistasEntrada; // Archivo lógico
    archivoDeportistasEntrada.open("deportistas.txt", ios::in);

    // Salir del programa si no se puede abrir el archivo
    if (!archivoDeportistasEntrada) {
        cerr << "NO SE PUEDE ABRIR EL ARCHIVO" << endl;
        exit(1);
    }

    // Imprime la cabecera de la tabla
    cout << left << setw(10) << "NOMBRE"
         << setw(10) << "EDAD"
         << setw(10) << "DEPORTE" << endl;

    // Mostrar cada registro llamando a una función auxiliar dentro del ciclo
    while (archivoDeportistasEntrada >> nombre >> edad >> deporte) {
        mostrarRegistro(nombre, edad, deporte);
    }

    archivoDeportistasEntrada.close();
    return 0;
} // Fin del main

// Función auxiliar para mostrar cada registro del tipo deportista
void mostrarRegistro(char * const nombre, int edad, char * const deporte) {
    cout << left << setw(10) << nombre
         << setw(10) << edad
         << setw(10) << deporte << endl;
}
