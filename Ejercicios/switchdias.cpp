#include <stdio.h>

int main(){
    int dia;
    printf("Ingresa un numero del 1 al 7: \n");
    scanf("%d",&dia);
    switch (dia)
    {
    case 1:
        printf("Es el dia domingo.");
        break;
    case 2:
        printf("Es el dia lunes.");
        break;    
    case 3:
        printf("Es el dia martes.");
        break;
    case 4:
        printf("Es el dia miercoles.");
        break;
    case 5:
        printf("Es el dia jueves.");
        break; 
    case 6:
        printf("Es el dia viernes.");
        break;
    case 7:
        printf("Es el dia sabado.");
        break;               
    default:
        printf("No corresponde a ningun dia de la semana.");
        break;
    }
    return 0;
}