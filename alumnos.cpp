/*
    Alonso Gonzalez Angel Alejandro
    Altamirano Ponce Jesus Eduardo
    Asencio Saldivar Carlos Saul
    Balderrama Galindo Alan Eduardo
    Alumnoscpp
*/

#include<iostream>
#include"colaAlumnos.h"
#include<string>
#include<windows.h>

using namespace std;

class alumno{
    private:
        string nombreAlumno;
        string nombreCarrera;
        int materiasAprobadas;
        double promedioAlumno;

    public:
        alumno();
        alumno(string,string,int,double);
        friend  istream &operator>>(istream &, alumno &);
        friend ostream &operator<<(ostream &, alumno &);
};
alumno::alumno(){}
alumno::alumno(string _nombreAlumno,string _nombreCarrera, int _materiasAprobadas, double _promedioAlumno)
:nombreAlumno(_nombreAlumno),nombreCarrera(_nombreCarrera),materiasAprobadas(_materiasAprobadas),promedioAlumno(_promedioAlumno){}

istream &operator>>(istream &lee,alumno &objAlumno){
    cout<<"\n\tIngrese nombre del Alumno: ";
    getline(lee>> ws, objAlumno.nombreAlumno);
    cout<<"\n\tIngrese el nombre de la carrera: ";
    getline(lee>> ws, objAlumno.nombreCarrera);
    cout<<"\n\tIngrese numero de materias aprobadas: ";
    lee>>objAlumno.materiasAprobadas;
    cout<<"\n\tIngrese promedio del alumno: ";
    lee>>objAlumno.promedioAlumno;
    return lee;
}
ostream &operator<<(ostream &escribe, alumno &objAlumno){
    escribe<<"\n\n\tConstancia del alumno: "<<objAlumno.nombreAlumno;
    escribe<<"\n\n\tPerteneciente a la carrera: "<<objAlumno.nombreCarrera;
    escribe<<"\n\n\tMaterias: "<<objAlumno.materiasAprobadas;
    escribe<<"\n\n\tPromedio del alumno: "<<objAlumno.promedioAlumno<<"\n\t";
    system("pause");
    return escribe;
}

int main(){
    cola<alumno>carrera;
    alumno objAlumno;
    char opc;

    do
    {
        system("cls");
        cout<<"\t******************************************\n";
        cout<<"\tMENU - SISTEMA ADMINISTRADOR DE CONSTANCIA\n";
        cout<<"\t******************************************\n";
        cout<<"\n\t1.Dar de alta solicitud.";
        cout<<"\n\t2.Elaborar una constancia.";
        cout<<"\n\t3.Termina el registro";
        cout<<"\n\tIngresa una opcion: ";
        cin>>opc;
        switch (opc)
        {
            case '1':
                system("cls");
                cout<<"\n\t("<<opc<<") Dar de alta solicitud de Alumno.\n";
                if (carrera.colaLlena()!=1)
                {
                    cin>>objAlumno;
                    carrera+objAlumno;
                    cout<<"\n\t******************************************\n";
                    cout<<"\tConstancia creada con exito\n";
                    cout<<"\t******************************************";
                    cout<<objAlumno<<"\n";
                }
                else{

                    cout<<"\n\tNo se puede procesar la solicitud...\n";
                    Sleep(3000);
                };


                break;
            case '2':
                system("cls");
                cout<<"\n\t("<<opc<<") Elaborar una constancia\n";
                if (carrera.colaVacia()!=1)
                {
                    carrera-&objAlumno;
                    cout<<objAlumno;
                }
                else{
                    cout<<"\n\tNo se encuentran solicitudes por procesar...\n";
                    Sleep(3000);
                }
                break;
            case '3':
                system("cls");
                cout<<"\n\t("<<opc<<") Saliendo del programa...";
                cout<<"\n\n\tHasta luego!...\n";
                Sleep(3000);
                break;
            default:
                system("cls");

                cout<<"\n\n\tERROR: OPCIÓN INVÁLIDA\n";
                cout<<"\tVolviendo al menú. Espere...";
                Sleep(3000);
                break;
        }
    }while(opc!='3');
    return 0;
}
