/*
Almacena las calificaciones de un grupo de N(1<=N<=30) alumnos
a partir de los datos guardados en el arreglo, su programa debe 
realizar las siguientes operaciones. Puede agregar metodos a la plantilla
de la clase arreglo, si lo considera necesario.

a) imprimir la calificación más alta, la más baja y el promedio de las mismas.
b) obtener e imprimir el total de calificaciones menores a 6
c) obtener e imprimir el total de calificaciones mayores a 8.5


1. ingresar calificaciones*
2. mostrar calificaciones*
3. mostrar calificación más alta
4. mostrar calificación más baja
5. mostrar promedio de calificaciones
6. mostrar total de calificaciones menores a 6
7. mostrar total de calificaciones mayores a 8.5
8. salir
*/

#include<iostream>
using namespace std;



template <class T>
class arreglo{

    private:
        T Datos[30];
        int tam;
    public:
        arreglo(); //aquí declaramos el constructor de la clase arreglo, que inicializa el tamaño del arreglo en 0.
        //alaverga, no conocía esto ~arreglo(); //aquí declaramos el destructor de la clase arreglo, que libera la memoria del arreglo.
        //a partir de aquí, se declaran los métodos de la clase arreglo, que realizan las operaciones solicitadas en el enunciado del problema.
        void ingreso();
        void print();
        T CalificacionAlta();
        T CalificacionBaja();
        float Promedio();
        void TotalMenor6();
        void TotalMayor85();

};

//los metodos del arreglo deberán desarrollarse de la siguiente forma: arreglo<T>::metodo, donde metodo es el nombre del método que se está desarrollando.
template <class T> //este es el constructor de la clase arreglo, que inicializa el tamaño del arreglo en 0.
arreglo<T>::arreglo(){
    tam=0;
}
template <class T>
void arreglo<T>::ingreso(){
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tam;
    for(int i=0;i<tam;i++){
        cout<<"Ingrese la calificación del alumno "<<i+1<<": ";
        cin>>Datos[i];
    }
    cout<<"tamaño del arreglo: "<<tam<<endl;
}
template <class T>
void arreglo<T>::print(){
    system("cls");
    cout<<"tamaño del arreglo: "<<tam<<endl;
    if (tam<=0)
    {
        cout << "El arreglo está vacío." << endl;
        return;
    }
    cout << "El tamaño del arreglo es: " << tam << endl;
    cout << "Las calificaciones son: "<<endl;
    for(int i=0;i<tam;i++){
        cout<<"calificación del alumno "<<i+1<<": "<<Datos[i]<<endl;
    }
    system("pause");
}
template <class T>
T arreglo<T>::CalificacionAlta(){
    T alta=Datos[0];
    for(int i=1;i<tam;i++){
        if(Datos[i]>alta){
            alta=Datos[i];
        }
    }
    return alta;
}
template <class T>
T arreglo<T>::CalificacionBaja(){
    T baja=Datos[0];
    for(int i=1;i<tam;i++){
        if(Datos[i]<baja){
            baja=Datos[i];
        }
    }
    return baja;
}
template <class T>
float arreglo<T>::Promedio(){
    float prm=0;
    for(int i=0;i<tam;i++){
        prm+=Datos[i];
    }
    return prm/tam;
}
template <class T>
void arreglo<T>::TotalMenor6(){
    int totalMenores=0;
    for (int i=0;i<tam;i++)
    {
        if (Datos[i]<6)
        {
            cout <<Datos[i] <<endl;
            totalMenores++; 
        }
    }
    cout <<"Total calificaciones menores a 6: "<<totalMenores <<endl;
    system("pause");
};
template <class T>
void arreglo<T>::TotalMayor85(){
    int totalMayores=0;
    for (int i=0;i<tam;i++)
    {
        if (Datos[i]>8.5)
        {
            cout <<Datos[i] <<endl;
            totalMayores++; 
        }
    }
    cout <<"Total calificaciones mayores a 8.5: "<<totalMayores <<endl;
    system("pause");
};




int main(){
    int opc;
    arreglo<float> calificaciones;
    do
    {
        cout <<"Seleccione una opción: "<<endl;
        cout <<"1. Ingresar calificaciones."<<endl;
        cout <<"2. mostrar calificaciones."<<endl;
        cout <<"3. mostrar calificación más alta"<<endl;
        cout <<"4. mostrar calificación más baja"<<endl;
        cout <<"5. mostrar promedio de calificaciones"<<endl;
        cout <<"6. mostrar total de calificaciones menores a 6"<<endl;
        cout <<"7. mostrar total de calificaciones mayores a 8.5"<<endl;
        cout <<"0. salir"<<endl;
        cin>>opc;
        
        switch(opc){
            case 1:{
                calificaciones.ingreso();
                break;
            }
            case 2:{
                calificaciones.print();
                break;
            }
            case 3:{
                
                cout<<"La calificación más alta es: "<<calificaciones.CalificacionAlta()<<endl;
                break;
            }
            case 4:{
                cout<<"La calificación más baja es: "<<calificaciones.CalificacionBaja()<<endl;
                break;
            }
            case 5:{
                cout<<"El promedio de las calificaciones es: "<<calificaciones.Promedio()<<endl;
                break;
            }
            case 6:{
                calificaciones.TotalMenor6();
                break;
            }
            case 7:{
                calificaciones.TotalMayor85();
                break;
            }
            case 0:{
                cout<<"Saliendo del programa..."<<endl;
                break;
            }
            default :{
                cout<<"Opción no válida, intente de nuevo."<<endl;
                break;
            }
        }
    } while (opc!=0);
    

    return 0;
}