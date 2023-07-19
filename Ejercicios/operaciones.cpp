#include <stdio.h>

int main(){
    float n1 = 1.36;
    float n2 = 23.56;
    int n3 = 5;
    int n4 = 100;


    float suma1 = 0;
    float resta1 = 0;
    int div1 = 0;
    int mul1= 0;
    int resto1 = 0;

    n2 += n1;
    suma1 = n1 + n2;
    resta1= n2 - n1;
    div1 = n4 / n3;
    mul1 = n3 * n4;
    resto1 = n4 % n3;

    printf("El primer numero es: %f, El segundo numero es: %f,\nEl tercer numero es: %d, El cuarto numero es: %d,\n ", n1, n2, n3, n4);
    
    printf("El suma entre los dos primeros numeros: %f, \nY la resta entre estos numeros es: %f,\n", suma1, resta1);
    printf("La division entre el numero 4 y 3: %d, \nY la multiplicacion entre numero 3 y 4: %d,\n", div1, mul1);
     printf("El resto entre el numero 4 y 3: %d.", resto1);

    return 0;

}