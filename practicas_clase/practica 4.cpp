#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

int obtenerSolicitud();
bool debeMostrar(int, int);
void imprimirLinea(const string, int, const string);

int main()
{
    ifstream archivoDeportistas("deportistas.txt", ios::in);

    if (!archivoDeportistas)
    {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    int solicitud;
    string nombre;
    int edad;
    string deporte;

    do
    {
        solicitud = obtenerSolicitud();

        switch (solicitud)
        {
            case 1:
                cout << "\nDeportistas menores de edad (5-17):\n";
                break;

            case 2:
                cout << "\nDeportistas mayores de edad (18-59):\n";
                break;

            case 3:
                cout << "\nDeportistas adultos mayores (60-85):\n";
                break;

            case 4:
                cout << "\nSaliendo del programa..." << endl;
                break;

            default:
                cout << "\nOpcion invalida. Intente nuevamente." << endl;
                break;
        }

        if (solicitud >= 1 && solicitud <= 3)
        {
            archivoDeportistas >> nombre >> edad >> deporte;

            while (archivoDeportistas)
            {
                if (debeMostrar(solicitud, edad))
                {
                    imprimirLinea(nombre, edad, deporte);
                }

                archivoDeportistas >> nombre >> edad >> deporte;
            }

            archivoDeportistas.clear();
            archivoDeportistas.seekg(0);
        }

    } while (solicitud != 4);

    return 0;
}

int obtenerSolicitud()
{
    int solicitud;

    cout << "\n\n==============================================";
    cout << "\n MENU - ASOCIACION DE DEPORTISTAS TAPATIOS";
    cout << "\n==============================================";
    cout << "\n1. Mostrar deportistas menores de edad (5-17)";
    cout << "\n2. Mostrar deportistas mayores de edad (18-59)";
    cout << "\n3. Mostrar deportistas adultos mayores (60-85)";
    cout << "\n4. Salir";
    cout << "\n\nElige tu opcion: ";

    cin >> solicitud;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(10000, '\n');
        solicitud = 0;
    }

    return solicitud;
}

bool debeMostrar(int tipo, int edad)
{
    if (tipo == 1 && edad >= 5 && edad <= 17)
        return true;

    if (tipo == 2 && edad >= 18 && edad <= 59)
        return true;

    if (tipo == 3 && edad >= 60 && edad <= 85)
        return true;

    return false;
}

void imprimirLinea(const string nombre, int edad, const string deporte)
{
    cout << left
         << setw(20) << nombre
         << setw(10) << edad
         << setw(20) << deporte
         << endl;
}