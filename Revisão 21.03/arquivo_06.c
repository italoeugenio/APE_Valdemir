#include <stdio.h>
#include <stdlib.h>

// Exercícios de Revisão - 21/03/23
// Ítalo Cezar Eugênio de Santana
// UC22102126
/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor
unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário
de cada peça 2. Após, calcule e mostre o valor a ser pago*/

int main (){

    int codigo1, num_pecas1, codigo2, num_pecas2; 
    float valor_unitario1, valor_unitario2, total;
   
    printf("DIGITE O CODIGO 1: ");
    scanf("%i", &codigo1);
    printf("DIGITE A QUANTIDADE DE PECAS (1): ");
    scanf("%i", &num_pecas1);
    printf("DIGITE O VALOR UNITARIO DA PECA 1: ");
    scanf("%f", &valor_unitario1);

    printf("\nDIGITE O CODIGO 2: ");
    scanf("%i", &codigo2);
    printf("DIGITE A QUANTIDADE DE PECAS (2): ");
    scanf("%i", &num_pecas2);
    printf("DIGITE O VALOR UNITARIO DA PECA 2: ");
    scanf("%f", &valor_unitario2);

    total = (num_pecas1 * valor_unitario1)+(num_pecas2 * valor_unitario2);

    printf("\nVALOR A PAGAR: R$ %.3f", total);

    return 0;
}
