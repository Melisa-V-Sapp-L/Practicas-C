#include <stdio.h>

int main(){
    int i, count = 100;

    for (i = 1; i <= count; i++){
         
        if ((i % 2) == 0){
            printf("%d \n", i);
            
        }    
        
    }
    return 0;
}