#include <stdio.h>
#include <math.h>

int main(){

    float x, y, z, m;

    printf("Ingresa tres números: ");
    scanf("%f %f %f", &x,&y,&z);

    m=cbrt((x*y*z));
    printf("\n\nMeia geometrica: %.2f",m);

    return 0;
}