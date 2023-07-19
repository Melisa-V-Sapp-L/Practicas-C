#include <stdio.h>

float OperationSuma(float n, float n1);
float OperationResta(float n, float n1);
float OperationMulti(float n, float n1);
float OperationDiv(float n, float n1);

int main(){
    char signo;
    float suma, resta, div, multi, n, n1;
    
    printf("\n Ingresa el primer numero:");
    scanf("\n %f", &n);

    printf("\n Elige el tipo de operacion: ");
    printf("\n + es suma, - es resta, / es division, * es multiplicacion. ");
    scanf("\n %c", &signo);

    printf("\n Ingresa el segundo numero:");
    scanf("\n %f", &n1);

    switch (signo)
    {
    case '+':
        suma = OperationSuma(n, n1);
        printf("\n La suma es: %.2f", suma);
        
        break;
    case '-':
        resta = OperationResta(n, n1);
        printf("\n La resta es: %.2f", resta);
        break;
    case '/':
        div = OperationDiv(n, n1);
        printf("\n La division es: %.2f", div);
        break;
    case '*':
        multi = OperationMulti(n, n1);
        printf("\n La multiplicacion es: %.2f", multi);
        break;               
    
    default:
        printf("\n No coincide con ningun signo para realizar una operacion.");
        break;
    }
    return 0;
}

float OperationSuma(float n, float n1){
    float suma;

    suma = n + n1;

    return suma;

}

float OperationResta(float n, float n1){
    float resta;

    resta = n - n1;

    return resta;
}

float OperationDiv(float n, float n1){
    float div;

    div = n / n1;

    return div;
}

float OperationMulti(float n, float n1){
    float multi;

    multi = n * n1;

    return multi;
}

