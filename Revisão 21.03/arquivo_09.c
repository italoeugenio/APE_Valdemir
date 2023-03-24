#include <stdio.h>
#include <stdlib.h>

// Exercícios de Revisão - 21/03/23
// Ítalo Cezar Eugênio de Santana
// UC22102126

/*Faça um algoritmo que leia dois números A e B e imprima o maior deles.*/

int main () {

    float A,B;

    printf("Digite o primeiro numero: ");
    scanf("%f", &A);
    while(getchar() != '\n');

    printf("Digite o segundo numero: ");
    scanf("%f", &B);
    while(getchar() != '\n');

    if(A > B) 
    {
        printf("\nO maior numero e o %3.f", A);

    } else if (A<B)
    {
        printf("\nO maior numero e o %.3f\n", B);

    } else if (A == B)
    {
        printf("\nOs numeros %.3f e %.3f sao iguais\n", A,B); 
    }

    return 0;
}
