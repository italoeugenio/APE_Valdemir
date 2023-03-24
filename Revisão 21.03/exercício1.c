#include <stdio.h>
#include <stdlib.h>

// Exercícios de Revisão - 21/03/23
// Ítalo Cezar Eugênio de Santana
// UC22102126
/*Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo
apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo
especificado.*/

int main (){

    int A, B;
    int X;

    printf("Digite o valor de A:");
    scanf("%i", &A);
    
    printf("Digite o valor de B:");
    scanf("%i", &B);

    X = A + B;

    printf("\nX = %i", X);

    return 0;
}


