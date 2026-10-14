
#include <iostream>
using namespace std;

const int TAM = 10;

void llenarArreglo(int numeros[]);
void mostrarArreglo(int numeros[]);
int buscarDesordenado(int numeros[], int buscado);
void ordenar(int numeros[]);
int buscarOrdenado(int numeros[], int buscado);

int main()
{
    int numeros[TAM];
    int opcion, buscado, posicion;

    do
    {
        cout << "\nMENU - BUSQUEDA SECUENCIAL\n";
        cout << "1. Llenar el arreglo\n";
        cout << "2. Mostrar el arreglo\n";
        cout << "3. Busqueda desordenada\n";
        cout << "4. Ordenar el arreglo\n";
        cout << "5. Busqueda ordenada\n";
        cout << "6. Salir\n";
        cout << "Elige tu opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                llenarArreglo(numeros);
                break;

            case 2:
                mostrarArreglo(numeros);
                break;

            case 3:
                cout << "Numero a buscar: ";
                cin >> buscado;

                posicion = buscarDesordenado(numeros, buscado);

                if (posicion != -1)
                    cout << "Encontrado en la posicion "
                         << posicion + 1 << endl;
                else
                    cout << "El numero no se encuentra.\n";
                break;

            case 4:
                ordenar(numeros);
                cout << "Arreglo ordenado.\n";
                break;

            case 5:
                cout << "Numero a buscar: ";
                cin >> buscado;

                posicion = buscarOrdenado(numeros, buscado);

                if (posicion != -1)
                    cout << "Encontrado en la posicion "
                         << posicion + 1 << endl;
                else
                    cout << "El numero no se encuentra.\n";
                break;

            case 6:
                cout << "Fin del programa.\n";
                break;

            default:
                cout << "Opcion invalida.\n";
        }

    } while (opcion != 6);

    return 0;
}

void llenarArreglo(int numeros[])
{
    for (int i = 0; i < TAM; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> numeros[i];
    }
}

void mostrarArreglo(int numeros[])
{
    for (int i = 0; i < TAM; i++)
        cout << numeros[i] << " ";

    cout << endl;
}

int buscarDesordenado(int numeros[], int buscado)
{
    for (int i = 0; i < TAM; i++)
    {
        if (numeros[i] == buscado)
            return i;
    }

    return -1;
}

void ordenar(int numeros[])
{
    for (int i = 0; i < TAM - 1; i++)
    {
        for (int j = 0; j < TAM - 1 - i; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                int auxiliar = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = auxiliar;
            }
        }
    }
}

int buscarOrdenado(int numeros[], int buscado)
{
    for (int i = 0; i < TAM; i++)
    {
        if (numeros[i] == buscado)
            return i;

        if (numeros[i] > buscado)
            return -1;
    }

    return -1;
}
