#include <stdio.h>

int main(){
    float ventacliente, ventatotal = 0;
    do
    {
        printf("Ingresa venta: \n");
        scanf("%f", &ventacliente);
        ventatotal += ventacliente;

    } while (ventacliente != 0);

    printf("La venta total del dia es: %3f", ventatotal);
    
    return 0;
}