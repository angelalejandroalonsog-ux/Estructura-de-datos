#include <iostream>
#include "planArreglo.h"

using namespace std;

/* Función que despliega en pantalla las opciones de trabajo que tiene
   el usuario. */
int MenuOpciones()
{
    char Opcion;

    do {
        cout << "\n\n\nL: Leer la lista de claves: ";
        cout << "\nA: Dar de alta un nuevo alumno: ";
        cout << "\nB: Dar de baja un alumno: ";
        cout << "\nI: Imprimir la lista de claves: ";
        cout << "\nF: Finalizar el proceso. ";
        cout << "\n\n Ingrese opcion de trabajo: ";
        cin >> Opcion;

    } while (Opcion != 'A' && Opcion != 'B' && Opcion != 'L' &&
             Opcion != 'I' && Opcion != 'F');

    return Opcion;
}


/* Función principal desde la cual se tiene el control de todo el proceso. */
int main()
{
    /* Se crea un objeto tipo Arreglo usando la plantilla.
       Los elementos a almacenar son de tipo entero. */
    Arreglo<int> ClavAlum;

    int Clave, Res;
    char Opc;

    /* Este ciclo permite al usuario realizar más de una operación
       con las claves de los alumnos. */
    do {

        Opc = MenuOpciones();

        switch(Opc)
        {
            /* Lectura del arreglo. */
            case 'L':
            {
                ClavAlum.Lectura();
                break;
            }

            /* Impresión del arreglo. */
            case 'I':
            {
                ClavAlum.Escribe();
                break;
            }

            /* Inserción de un alumno. */
            case 'A':
            {
                cout << "\n\n Clave del nuevo alumno: ";
                cin >> Clave;

                Res = ClavAlum.InsertaDesordenado(Clave);

                if (Res == 1)
                    cout << "\n\n El nuevo alumno ya fue dado de alta. ";
                else if (Res == 0)
                    cout << "\n\n No hay espacio para registrar el nuevo alumno. ";
                else
                    cout << "\n\n Esa clave ya fue registrada previamente. ";

                break;
            }

            /* Eliminación de un alumno. */
            case 'B':
            {
                cout << "\n\n Clave del alumno a dar de baja: ";
                cin >> Clave;

                Res = ClavAlum.EliminaDesordenado(Clave);

                if (Res == 1)
                    cout << "\n\n El alumno ya fue dado de baja. ";
                else if (Res == 0)
                    cout << "\n\n No hay alumnos registrados. ";
                else
                    cout << "\n\n Esa clave no esta registrada. ";

                break;
            }

            case 'F':
                cout << "\n\n Termina el proceso.\n\n ";
                break;
        }

    } while (Opc != 'F');

    return 0;
}