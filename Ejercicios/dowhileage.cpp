#include <stdio.h>

int main(){
    int age = 0;
    char question;

    do{
        printf("Deseas continuar? s para si, n para no: \n");
            scanf("%c", &question);
        if (question == 's'){
            printf("Ingresa una edad: \n");
            scanf("%d", &age);   
            if ( age < 18){
                printf("Es menor de edad \n"); 
                } else {   
                    printf("Es mayor de edad \n");
                    }
        }
  
    } while (question != 'n'); 
    
    return 0;
}