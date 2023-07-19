#include <stdio.h>

int main (){
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad >= 18)
    {
        printf("Usted es mayor de edad");
    }else{
        printf("Usted no es mayor de edad");
    }
    
    return 0;
}