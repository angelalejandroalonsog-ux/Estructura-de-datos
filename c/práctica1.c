#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leerCodigo(char codigo[], int tamano)
{
    int valido = 0;

    while (!valido)
    {
        fgets(codigo, tamano, stdin);

        if (strchr(codigo, '\n') == NULL)
        {
            // No se encontró '\n': probablemente escribió más de 10 caracteres
            while (getchar() != '\n');

            printf("\nEl codigo no puede tener mas de 10 caracteres.");
            printf("\nIngrese nuevamente el codigo: ");
        }
        else
        {
            // Eliminar el '\n'
            codigo[strcspn(codigo, "\n")] = '\0';
            valido = 1;
        }
    }
}


struct empleados{
    char codigo[11];
    char nombre[50];
    char direccion[50];
    char telefono[11];
    float salario;
} emp[6];

int main(){
    int i=0;
    int seleccion=0;
    int empS=0;
    do
    {
        system("cls");
        printf("\n\n        1.Ingresar un nuevo empleado");
        printf("\n\n        2.Gestionar empleados");
        printf("\n\n        3.Salir");
        printf("\n\n        Seleccione una opción: ");
        scanf("%i",&seleccion);
        while(getchar() != '\n');
        switch (seleccion)
        {
        case 1:
            i++;
            if (i>=6)
            {
                system("cls");
                printf("\nEmpleados llenos.\n");
                system("pause");
                break;
            }
            system("cls");
            printf("\n\n        Empleado registado numero %i \n\n",i);
            printf("\n\n        Ingrese el código del Nuevo Empleado: ");
            fgets(emp[i].codigo, 11, stdin);
            leerCodigo(emp[i].codigo, 11);
            printf("\n\n        Ingrese el nombre del Nuevo Empleado: ");
            fgets(emp[i].nombre,50, stdin);
            printf("\n\n        Ingrese el Numero Telefonico del Nuevo Empleado: ");
            fgets(emp[i].telefono,11,stdin);
            printf("\n\n        Ingrese la dirección del Nuevo Empleado: ");
            fgets(emp[i].direccion,50,stdin);
            printf("\n\n        Ingrese el salario del Nuevo Empleado: ");
            scanf("%f",&emp[i].salario);
            system("cls");
            break;
        case 2:
            if (i==0)
            {
                system("cls");
                printf("\n\n        Aún no se ha registrado ningún Empleado Nuevo\n\n");
                system("pause");
                break;
            }
            system("cls");
            printf("\n\n        Ingrese el número de Empleado que quiere gestionar: ");
            scanf("%i",&empS);
            while(getchar() != '\n');
            if (empS>5)
            {
                system("cls");
                printf("\n\n     Valor inválido...");
                system("pause");
                break;
            }
            if (empS>i)
            {
                system("cls");
                printf("\n\n        Aún no existe ese Empleado\n\n");
                system("pause");
                break;
            }
            
            system("cls");
            printf("\n\n        Codigo: %s",emp[empS].codigo);
            printf("\n\n        Nombre: %s",emp[empS].nombre);
            printf("\n\n        Telefono: %s",emp[empS].telefono);
            printf("\n\n        Direccion: %s",emp[empS].direccion);
            printf("\n\n        Salario: $%.2f",emp[empS].salario);
            printf("\n\n");
            system("pause");
            break;
        case 3:
            printf("\n\n        ¡Adiós!\n");
            break;
        default:
            printf("\n\n        Valor Inválido...\n\n");
            system("pause");
            break;
        }
    } while (seleccion!=3);


    return 0;

}