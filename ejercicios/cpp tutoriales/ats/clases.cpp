#include<iostream>

using namespace std;

class Rectangulo{
    private:
        double base, altura;
    public:
        Rectangulo();
        Rectangulo(double _base,double _altura);
        double perimetro();
        double area();
};
//no olvides implementar el constructor sin parametros, en esta ocasión no lo necesitamos, pero al estar declarado como método, no olvides implementarlo.
Rectangulo::Rectangulo(){
    base=0;
    altura=0;
}
//es mejor usar una lista de inicialización
Rectangulo::Rectangulo(double _base,double _altura):
base(_base), altura(_altura)
{

}
double Rectangulo::area(){ //no olvidemos iniciar con el tipo de retorno

    double a=(base*altura);
    return a;
}
double Rectangulo::perimetro(){

    double p=(2*base)+(2*altura);
    return p;
}
int main(){
    double b=1,h=1;

    do
    {  
        system("cls");
        cout <<"Para salir, ingrese los valores en 0...\n"<<endl;

        cout<<"Ingresa la Base del rectángulo: "<<endl;
        cin >>b;
        cout << "Ingresa la Altura del rectángulo"<<endl;
        cin >>h;
        Rectangulo figura(b,h);
        //aquí todavía no llamo a los métodos, pero como no estoy usando punteros 
        cout<<"El Area del rectángulo es:" <<figura.area()<<endl;
        cout<<"El perimetro del rectángulo es: "<<figura.perimetro()<<endl; //aquí los métodos no necesitan tener los ; al final
        /*Para estos casos, donde tenemos métodos con algun retorno, podemos también hacer lo siguiente
        double a = figura.area();
        double p = figura.perimetro();

        cout << "Area: " << a << endl;
        cout << "Perimetro: " << p << endl;
        */
        system("pause");
    } while (b!=0||h!=0);
    

    return 0;
}