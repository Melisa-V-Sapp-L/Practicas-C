#include <stdio.h>

float areaTri(float base, float altura);

int main (){
    float area1, area2, area3;

    area1 = areaTri(23.5, 6.2);
    area2 = areaTri(28.3, 2.32);
    area3 = areaTri(25.5, 21);

    printf("\n Area1 del triangulo es: %.2f", area1);
    printf("\n Area2 del triangulo es: %.2f", area2);
    printf("\n Area3 del triangulo es: %.2f", area3);



    return 0;
}

float areaTri(float b, float a){
    float area;

    area = b * a /2;

    return area;
}