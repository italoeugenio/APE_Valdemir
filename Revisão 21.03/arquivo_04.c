#include <stdio.h>
#include <stdlib.h>

// Exercícios de Revisão - 21/03/23
// Ítalo Cezar Eugênio de Santana
// UC22102126
/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto
de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).*/

int main(){

    int A,B,C,D;
    int DIFERENCA;

    printf("Digite o valor de A: ");
    scanf("%i", &A);

    printf("Digite o valor de B: ");
    scanf("%i", &B);

    printf("Digite o valor de C: ");
    scanf("%i", &C);

    printf("Digite o valor de D: ");
    scanf("%i", &D);
    
    DIFERENCA = (A*B)-(C*D);

    printf("\nDIFERENCA = %i\n", DIFERENCA);

    return 0;
}
