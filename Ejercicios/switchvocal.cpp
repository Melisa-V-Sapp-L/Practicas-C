#include <stdio.h>

int main(){
    char letra;
    printf("Ingrese una letra: \n");
    scanf("%c",&letra);

    switch (letra)
    {
    case 'a':
        printf("La primera vocal");
        break;
    case 'A':
        printf("La primera vocal");
        break;    
    case 'e':
        printf("La segunda vocal");
        break;
    case 'E':
        printf("La segunda vocal");
        break;    
    case 'i':
        printf("La tercera vocal");
        break; 
    case 'I':
        printf("La tercera vocal");
        break;           
    case 'o':
        printf("La cuarta vocal");
        break;
    case 'O':
        printf("La cuarta vocal");
        break;    
    case 'u':
        printf("La quita y ultima vocal");
        break; 
    case 'U':
        printf("La quita y ultima vocal");
        break;       
    default:
        printf("Es una consonante.");
        break;
    }

    return 0;
}