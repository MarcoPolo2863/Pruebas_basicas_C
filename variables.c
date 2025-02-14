#include <stdio.h>

int main(){
    
   int resultado;
    
    //resultado = 5 * 5;

    // printf("%i", resultado);

    int numero1;
    int numero2;

    printf("Dame el número 1: \n");
    scanf("%i", &numero1);
    
    printf("Dame el número 2: \n");
    scanf("%i", &numero2);

    resultado = numero1 / numero2;

    printf("%i", resultado );
}