#include <stdio.h>

int main (){
    int i, mult, tabla = 0, count = 10;
    printf("Ingresa la tabla que quieres visualizar: \n");
    scanf("%d\n", &tabla);
    if (tabla != 0){
        printf("Esta es la tabla del %d\n", tabla);    
    }/**/
    
    for ( i = 1; i <= count; i++){
        mult = i * tabla;
        printf("%d por %d es: %d\n", i, tabla, mult);
    }
    
    return 0;
}