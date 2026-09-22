//Sacar la hipotenusa

#include <stdio.h>
#include <math.h>
int main(){


    float h,c1,c2;

    printf("Añade los dos catetos: ");
    scanf("%f %f",&c1,&c2);
    h=sqrt(pow(c1,2)+pow(c2,2));
    printf("hipotenusa:%.2f",h); 

    return 0;
}