#include <stdio.h>
#define N 5

int main(){
    int array1[5];
    int array2[N];
    int array3[] = {0,1,2,3,4};

    printf("Ingresar 5 numeros enteros \n");
    
    for (int i = 0; i < N; i++){
        printf("\n array2[%d]:", i);
        scanf("%d", &array2[i]);
        
    }

    printf("\n El arreglo ingresado es: ");
    for (int j = 0; j < N; j++){
        printf("\n array2[%d]= %d", j, array2[j]);
    } 
    
    return 0;
}