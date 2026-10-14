#include <iostream>
#include <fstream>
#include <cstdlib>
using std::exit;
using std::cerr;
using std::endl;
using std::ios;
using std::fstream;

#include "17.10.h" //clase DatosCliente

int main(){

    std::ofstream creditoSalida("credito.dat", ios::out | ios::binary);

    if (!creditoSalida)
    {
        cerr<<"No se pudo abrir el archivo."<<endl;
    }
    DatosCliente clienteEnBlanco;

    for (int i = 0; i < 100; i++)
    {
        creditoSalida.write(reinterpret_cast < const char * >( &clienteEnBlanco),
        sizeof(DatosCliente));
    }
    
    

    return 0;
}