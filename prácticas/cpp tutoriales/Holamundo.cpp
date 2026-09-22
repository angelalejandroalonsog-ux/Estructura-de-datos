#include<iostream>
#include<limits>
using namespace std;

int main(){
    string nombre;
    int edad;
    cout<< "hola mundo :D" << endl;
    cout << "Ingresa tu edad: "<< endl;
    cin >> edad;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //esto de cin.ignore sólo se usa con, evidentemente, los cin.
    cout << "ahora ingresa tu nombre: "<<endl;
    getline(cin, nombre);
    cout << "nombre: "<<nombre<< "\nedad: " <<edad <<endl;

    return 0;
}