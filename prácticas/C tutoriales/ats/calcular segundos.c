#include <stdio.h>

int main(){

    float horas, minutos, segundos, sTotales,t1,t2,t3;
    int ss,hs,ms;

    printf("ingresa las horas, minutos y segundos:");
    scanf("%f %f %f", &horas, &minutos, &segundos);
    hs=3600;
    ms=60;
    ss=1;
    t1=hs*horas;
    t2=ms*minutos;
    t3=segundos*ss;
    sTotales=t1+t2+t3;
    printf("Segundos totales: %.2f",sTotales);

    return 0;
}