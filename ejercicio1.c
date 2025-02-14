#include <stdio.h>

int main(){
    
    int resultado;
    int promedio;

    int materia1;
    int materia2;
    int materia3;

    printf("Dame tu calificación de tu primera materia: \n");
    scanf("%i", &materia1);

    printf("Dame tu calificación de tu segunda materia: \n");
    scanf("%i", &materia2);

    printf("Dame tu calificación de tu tercera materia: \n");
    scanf("%i", &materia3);

    resultado = materia1 + materia2 + materia3;

    promedio = resultado/3;

    printf("%i", promedio);

    if(promedio >= 7){
        printf("Aprobado \n \n");
    }
    else{
        printf("Reprobado \n \n");
    }

}