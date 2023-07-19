#include <stdio.h>

float descuenton(float compra, int descuento);

int main(){
    float compra, preciofinal;
    int descuento;

    printf("\n ingresa el precio de compra:");
    scanf("\n %f", &compra);

    printf("\n ingresa el descuento:");
    scanf("\n %d", &descuento);

    preciofinal = descuenton(compra, descuento);

    printf("\n El precio final es: %.2f", preciofinal);

    return 0;
}

float descuenton(float compra, int descuento){
    float preciofinal;

    preciofinal = compra - ((compra * descuento) / 100);

    return preciofinal;

}