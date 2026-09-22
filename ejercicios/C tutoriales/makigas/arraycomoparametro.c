/*no podemos pasar un array por un parametro a otra función como el resto de los tipos de datos,
(IA)ya que un array es un tipo de dato compuesto, es decir, que está formado por varios elementos del mismo tipo de dato,
y no podemos pasar un tipo de dato compuesto por valor a una función,
ya que esto implicaría copiar todos los elementos del array,
lo cual no es eficiente. Por lo tanto, cuando pasamos un array como parámetro a una función,
en realidad estamos pasando la dirección de memoria del primer elemento del array,
es decir, estamos pasando un puntero al primer elemento del array.
Por lo tanto, si modificamos el valor de un elemento del array dentro de la función,
estamos modificando el valor del elemento original del array.
*/
#include<stdio.h>

//la forma en la que podemos mandar un array como parametro,

int media(int edades[], int tam ){//esto realmente es un puntero al primer elemento del array, por lo que da igual si lo escribimos así o con int* edades´ ;

    int n=0,edad_media=0;
    for (int i=0; i<tam;i++){
        edad_media+=edades[i];
        n++;
    }
    edad_media=edad_media/n;
    return edad_media;
}


int main(){
    int tam=0, edades[tam],res;
    printf("ingresa cantidad de alumnos");
    scanf("%d",&tam);
    for(int i=0; i<tam;i++){
        printf("ingresa la edad del alumno %d: ",i+1);
        scanf("%d",&edades[i]);
    }
    res=media(edades,tam);
    printf("la edad media de los alumnos es: %d",res);
    
    return 0;

}

//MAL, NO CORRE BIEN