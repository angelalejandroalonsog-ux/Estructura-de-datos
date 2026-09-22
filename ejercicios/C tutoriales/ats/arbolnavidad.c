#include<stdio.h>

int main(){

    for (int i = 5; i >=5; i--)
    {
        // i repite 5 veces esto:
        for (int k = 1; k<=i; k++)
        {
            //K repite 5 vece esto:
            printf("_");
            //necesito que la cantidad de '_' pase de 5 a 0.
            //_____
            for (int j = 1; j<=k; j++)
            {
                //K la hace de contador, cada vez que da una vuelta por aquí, aumento en 1 la cantidad de '*'.
                //_____*
                printf("*");
            }
            printf("\n");
            //una vez que disminuya K con sus '_', aumenta J con los '*'.
        }

    }
    
    


    return 0;
}