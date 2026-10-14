#include<iostream>
#include"cola.h"
#include<windows.h>
using namespace std;

class producto{
    private: 
        int clave;
        string nombreProducto;
        double precio;
    public:
        producto();
        producto(int,string,double);
        double retornoPrecio();
        //aquí integramos las funciones amigas
        friend  istream &operator>>(istream &, producto &);
        friend ostream &operator<<(ostream &, producto &);
};

producto::producto(){}
//constructor pero con lista de inicialización
producto::producto(int _clave, string _nombreProducto, double _precio)
:clave(_clave),nombreProducto(_nombreProducto),precio(_precio){}

double producto::retornoPrecio(){
    return precio;
}

istream &operator>>(istream &lee,producto &objProducto){
    cout<<"\n\tIngrese clave del producto: "<<endl;
    lee>>objProducto.clave;
    cout<<"\n\tIngrese el nombre del producto: "<<endl;
    lee>>objProducto.nombreProducto;
    cout<<"\n\tIngrese el precio: "<<endl;
    lee>>objProducto.precio;
    return lee;
}
ostream &operator<<(ostream &escribe, producto &objProducto){
    escribe<<"\n\tDatos del producto..."<<endl;
    escribe<<"\n\tClave: "<<objProducto.clave<<endl;
    escribe<<"\n\tNombre del producto: "<<objProducto.nombreProducto<<endl;
    escribe<<"\n\tPrecio del producto: "<<objProducto.precio<<endl;
    return escribe;
}

int main(){
    cola<producto>almacen;
    producto objProd;
    char opc;
    double total=0;

    do
    {
        system("cls");
        cout<<"\n\t1.Compra de un producto."<<endl;
        cout<<"\n\t2.Venta de un producto."<<endl;
        cout<<"\n\t3.Termina el registro"<<endl;
        cout<<"\n\tIngresa una opcion:"<<endl;
        cin>>opc;
        switch (opc)
        {
            //hubiera sido mejor directamente hacer un puto switch en vez del menú anterior...
            case '1':
                system("cls");
                cin>>objProd;
                if (!(almacen+objProd))
                {
                    cout<<"\n\tNo hay un lugar en el almacén para registrar el producto..."<<endl;
                    Sleep(3000);
                }
                break;
            case '2':
                system("cls");
                if (almacen-&objProd)
                {
                    cout<<objProd;
                    total= total+objProd.retornoPrecio();
                    Sleep(3000);
                }
                else{
                    system("cls");
                    cout<<"\n\tYa no hay productos en el deposito."<<endl;
                    Sleep(3000);
                }
                break;
            case '3':
                system("cls");
                cout<<"\n\tTotal vendido: "<<total<<endl;
                cout<<"\n\n\tAdios!..."<<endl;
                Sleep(3000);
                break;
            default:
                system("cls");
                cout<<"ERROR"<<endl;
                Sleep(3000);
                break;
        }
    }while(opc!='3');
    return 0;
}