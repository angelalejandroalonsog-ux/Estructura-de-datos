#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() {
    string nombre, deporte;
    int edad;

    std::ofstream archivoDeportistasSalida("deportistas.txt", std::ios::app);

    if (!archivoDeportistasSalida) {
        std::cerr << "Error: No se pudo crear o abrir el archivo.\n";
        return 1;
    }

    cout << "Escriba el nombre, la edad y el deporte (separados por espacio).\n"
              << "Para terminar, presione Ctrl+D (Linux/macOS) o Ctrl+Z (Windows) y Enter.\n? ";

    while (cin >> nombre >> edad >> deporte) {
        archivoDeportistasSalida << nombre << ' ' << edad << ' ' << deporte << '\n';
        cout << "? ";
    }

    archivoDeportistasSalida.close();

    return 0;
}
