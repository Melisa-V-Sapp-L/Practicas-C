#include <stdio.h>

int main(){
    double dineroactual, dineroanual, interesanual = 0;
    int i, ages = 0;

    printf("Agregue el dinero actual de su inversión: \n");
    scanf("%lf\n", &dineroactual);

    printf("Agregue el dinero que va a agregar anualmente: \n");
    scanf("%lf\n", &dineroanual);

    printf("Cantidad de ages de inversion: \n");
    scanf("%d\n", &ages);

    printf("Interes anual: \n");
    scanf("%lf\n", &interesanual);

    double total = dineroactual;

    for ( i = 0; i <= ages ; i++)
    {
        total += 1000;
        total = total + (interesanual * total / 100);
    }

    printf("En 10 ages, tendras: %lf \n");
    
    return 0;
}