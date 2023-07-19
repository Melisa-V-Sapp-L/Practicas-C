#include <stdio.h>

int main(){
    float peso, altura, indice;

    printf("Ingresa tu peso: \n");
    scanf("%f", &peso);

    printf("Ingresa tu altura: \n");
    scanf("%f", &altura);

    indice = peso / (altura * altura);

    if (indice < 18.5)
    {
        printf("Peso por debajo de lo normal. \n");

    } else if ((indice >= 18.5)&&(indice < 25))
    {
        printf("Tiene un peso normal. \n");

    } else if ((indice >= 25)&&(indice < 30))
    {
        printf("Tiene sobrepeso. \n");

    } else if (indice >= 30)
    {
        printf("Tiene obesidad. \n");
    }
    printf("Su indice de masa corporal es de: %3f", indice);
    return 0;

}