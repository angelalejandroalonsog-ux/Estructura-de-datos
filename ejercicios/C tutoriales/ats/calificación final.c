#include <stdio.h>

int main(){

    float calificacionF, p1,p2,p3,exF,ctf,promedioP;

    printf("Ingresa las calificaciones de tus tres examenes: ");
    scanf("%f %f %f",&p1, &p2, &p3);
    printf("\n\nAhora ingresa la calificación del exámen final: ");
    scanf("%f",&exF);
    printf("\n\nIngresa la calificación de tu trabajo final: ");
    scanf("%f",&ctf);
    promedioP=(p1+p2+p3)/3;
    calificacionF=(promedioP*.55)+(exF*.30)+(ctf*.15);
    printf("\n\nPromedio final: %.2f",calificacionF);



    return 0;
}