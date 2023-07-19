#include <stdio.h>

int main(){
    int i, count = 10;
    float promedio, numero, total = 0;

    printf("Ingresa 10 numeros: \n");
    for ( i = 0; i < count; i++){
        scanf("%f", &numero);
        total += numero;
    }
    
    promedio = total / count;
    printf("El promedio es: %f", promedio);
    
    return 0;
}