#include <stdio.h>

int main(){

    float a,b;

    printf("ingresa dos numeros a ser comparados: ");
    scanf("%f %f",&a,&b);

    if(a<b){
        printf("%.1f Es mayor que %.1f",b,a);

    }
    else if(a==b){
        printf("%.1f y %.1f son identicos", a,b);
    }
    else if(a>b){
        printf("%.1f es mayor que %.1f",a, b);
    }


    return 0;
}