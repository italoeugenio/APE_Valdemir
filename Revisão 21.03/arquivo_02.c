#include <stdio.h>
#include <stdlib.h>

// Exercícios de Revisão - 21/03/23
// Ítalo Cezar Eugênio de Santana
// UC22102126
/*Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre
elas e atribua à variável SOMA. A seguir escrever o valor desta variável.*/

int main (){

    int A, B;
    int SOMA;

    printf("Digite o primeiro numero inteiro:");
    scanf("%i", &A);

    printf("Digite o segundo numero inteiro:");
    scanf("%i", &B);

    SOMA = A + B;

    printf("\nSOMA = %i", SOMA);

    return 0;
}
