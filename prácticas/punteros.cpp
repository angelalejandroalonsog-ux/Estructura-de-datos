//Ejemplo de cómo funcionan los punteros
#include<iostream>
using namespace std;

int main(){

    //Los punteros deben almacenar unicamente aquellas direcciones de variables del mismo tipo, es decir, *int con int, *char con char, etc.

    int valor,*punteroValor,nuevo,*nuevoPuntero,mod=67; //al declarar un puntero, debe ser colocado un *
    cout<<"Ingresa un valor"<<endl;
    cin>> valor ;
    punteroValor=&valor; //de esta manera podemos almacenar en el puntero una dirección de memoria
    cout <<"Valor es: "<<*punteroValor<<endl; //y de esta forma podemos acceder a la información que aloja esa dirección de memoria.
    cout << "La dirección de memoria de Valor es: "<<punteroValor <<endl;
    cout << "podríamos modificar la información del espacio de memoria que tenemos con el puntero"<<endl;
    *punteroValor=mod;
    cout <<"Ahora podemos ver el nuevo valor otorgado a la variable Valor modificada mediante Mod: "<<valor<<endl;
    cout <<"También podemos otorgarle la información almacenada dentro de la dirección del puntero a otra variable" <<endl;
    nuevo=*punteroValor+1;
    cout <<"Encontramos a :"<<*punteroValor <<" Pero sumandole 1... "<<nuevo <<endl;
    nuevoPuntero=&nuevo;
    cout<<"Y la dirección de memoria del nuevo valor es: " <<nuevoPuntero <<endl;
    cout<<"Nuevamente verificamos el nuevo valor:  " <<nuevo <<endl;

    return 0;
}