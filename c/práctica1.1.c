#include <stdio.h>
#include <stdlib.h>

struct fecha_nacimiento{
    int dia;
    char mes[15];
    int año;

};

struct empleados{
    char codigo[11];
    char nombre[50];
    char direccion[50];
    char telefono[12];
    float salario;

    struct fecha_nacimiento fechaN;
    } emp[6];

int main(){
    int i=0;
    int seleccion;
    int empS=0;
    do
    {
        seleccion=0;
        system("cls");
        printf("\n\n        1.Ingresar un nuevo empleado");
        printf("\n\n        2.Gestionar empleados");
        printf("\n\n        3.Salir");
        printf("\n\n        Seleccione una opcion: ");
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
            printf("\n\n        Ingrese el codigo del Nuevo Empleado: ");
            fgets(emp[i].codigo, 11, stdin);
            printf("\n\n        Ingrese el nombre del Nuevo Empleado: ");
            fgets(emp[i].nombre,50, stdin);
            printf("\n\n        Ingrese el Numero Telefonico del Nuevo Empleado: ");
            fgets(emp[i].telefono,12,stdin);
            printf("\n\n        Ingrese la dirección del Nuevo Empleado: ");
            fgets(emp[i].direccion,50,stdin);
            printf("\n\n        Ingrese el salario del Nuevo Empleado: ");
            scanf("%f",&emp[i].salario);
            printf("\n\n        Ingrese la fecha de nacimiento del Nuevo empleado: ");
            //Día
            do{
                printf("\n\n        Dia: ");
                scanf("%i",&emp[i].fechaN.dia);
                while(getchar() != '\n');
                if(emp[i].fechaN.dia<1 || emp[i].fechaN.dia>31){
                    system("cls");
                    printf("\n\n\tDATO INVALIDADO... INTENTE NUEVAMENTE.\n\n");
                    system("pause");
                }
            }
            while(emp[i].fechaN.dia<1 || emp[i].fechaN.dia>31);
            //Mes
            printf("\n\n        Mes: ");
            fgets(emp[i].fechaN.mes, 15, stdin);    
            //Año
            do{
                printf("\n\n        Anio: ");
                scanf("%i",&emp[i].fechaN.año);
                while(getchar() != '\n');
                if(emp[i].fechaN.año<1900 || emp[i].fechaN.año>2008){
                    system("cls");
                    printf("\n\n\tDATO INVALIDADO... INTENTE NUEVAMENTE.\n\n");
                    system("pause");
                }
            }
            while(emp[i].fechaN.año<1900 || emp[i].fechaN.año>2008);
            system("cls");
            break;
        case 2:
            if (i==0)
            {
                system("cls");
                printf("\n\n        Aun no se ha registrado ningun Empleado Nuevo\n\n");
                system("pause");
                break;
            }
            system("cls");
            printf("\n\n        Ingrese el numero de Empleado que quiere gestionar o ingrese 0 para consultar todos: ");
            scanf("%i",&empS);
            while(getchar() != '\n');
            if (empS==0)
            {
                for (int a = 1; a<=i; a++)
                {
                    printf("\n\n\tEmpleado Numero: %i",a);
                    printf("\n\n        Codigo: %s",emp[a].codigo);
                    printf("\n\n        Nombre: %s",emp[a].nombre);
                    printf("\n\n        Telefono: %s",emp[a].telefono);
                    printf("\n\n        Direccion: %s",emp[a].direccion);
                    printf("\n\n        Salario: $%.2f",emp[a].salario);
                    printf("\n\n        Fecha de Nacimiento.\n\n\tDia: %i\n\tMes: %s\tAnio: %i",emp[a].fechaN.dia, emp[a].fechaN.mes, emp[a].fechaN.año);
                    printf("\n\n---------------------------------------------------------------------------------------------\n");
                }
                system("pause");
            }
            else{
                system("cls");
                printf("\n\n\tEmpleado Numero: %i",i);
                printf("\n\n        Codigo: %s",emp[empS].codigo);
                printf("\n\n        Nombre: %s",emp[empS].nombre);
                printf("\n\n        Telefono: %s",emp[empS].telefono);
                printf("\n\n        Direccion: %s",emp[empS].direccion);
                printf("\n\n        Salario: $%.2f",emp[empS].salario);
                printf("\n\n        Fecha de Nacimiento.\n\n\tDia: %i\n\tMes: %s\tAnio: %i",emp[empS].fechaN.dia, emp[empS].fechaN.mes, emp[empS].fechaN.año);
                printf("\n\n");
                system("pause");
                break;

            }
            if (empS>5)
            {
                system("cls");
                printf("\n\n     Valor invalido...");
                system("pause");
                break;
            }
            if (empS>i)
            {
                system("cls");
                printf("\n\n        Aun no existe ese Empleado\n\n");
                system("pause");
                break;
            }
        case 3:
            system("cls");
            printf("\n\n\t...Adios!!!\n");
            break;
        default:
            printf("\n\n        Valor Invalido...\n\n");
            system("pause");
            break;
        }
    } while (seleccion!=3);


    return 0;

}
