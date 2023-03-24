#include <stdio.h>
#include <stdlib.h>

// Exercícios de Revisão - 21/03/23
// Ítalo Cezar Eugênio de Santana
// UC22102126
/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua
esta operação à variável PROD. A seguir mostre a variável PROD com mensagem
correspondente.*/


int main (){

    int A, B;
    int PROD;

    printf("Digite o valor de A: ");
    scanf("%i", &A);

    printf("Digite o valor de B: ");
    scanf("%i", &B);

    PROD = A * B;

    printf("\nPROD = %i", PROD);

    return 0;
}