#include <stdio.h>

int main(){
    
   int resultado;

    int numero1;
    int numero2;

    printf("Dame el número 1: \n");
    scanf("%i", &numero1);
    
    printf("Dame el número 2: \n");
    scanf("%i", &numero2);

    resultado = numero1 + numero2;

    printf("%i", resultado );

    if(resultado <= 50){
        printf("Tu resultado es menor a 50");
    }
    else{
        printf("Tu numero es mayor a 50");
    }
}