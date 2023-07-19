#include <stdio.h>
float areaTri(float base, float altura);

int main(){
    float base, altura, area;

    printf("\n Ingresa la base:");
    scanf("\n %f", &base);

    printf("\n Ingresa la altura:");
    scanf("\n %f", &altura);

    area = areaTri(base, altura);

    printf("\n El area del triangulo es: %.2f", area);

    return 0;
}

float areaTri(float base, float altura){
    float area;

    area = base * altura /2;

    return area;
}