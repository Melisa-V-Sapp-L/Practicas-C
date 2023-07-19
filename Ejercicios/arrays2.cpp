#include <stdio.h>
#define N 15 

int main(){
    char array1[N] = {'p','e','r','o','_','q','u','e','\0'};
    char array2[N] = "esta_pasando";
    char array3[N] = "_aqui!";

    printf("%s\n ", array1);
    printf("%s\n ", array2);
    printf("%s\n ", array3);

    return 0;
}