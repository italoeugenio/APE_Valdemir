#include <stdio.h>
#include <stdlib.h>

// ÍTALO CEZAR EUGÊNIO DE SANTANA
// UC22102126

/*2. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem
1,10 metro e cresce 3 centímetros por ano. Faça um programa em C que
recebendo a altura e o crescimento anual de duas pessoas calcule e
imprima quantos anos serão necessários para que a mais baixa seja
maior que a outra. Caso isto não ocorra em 100 anos informar mensagem
de impossibilidade.
Encerre a entrada de dados quando for digitada uma idade negativa.
(Não use vetores ou matrizes).*/

int main (){

    float altura_pessoa1, altura_pessoa2, crescimento_pessoa1, crescimento_pessoa2;
    int idade_pessoa1, idade_pessoa2;
    int anos = 0;

    printf("POR FAVOR, INSIRA A MAIOR ALTURA PRIMEIRO\n");
    printf("Insira a altura da pessoa 1 (em metros): ");
    scanf("%f", &altura_pessoa1);
    printf("Insira a taxa de crescimento anual da pessoa 1 (em metros): ");
    scanf("%f", &crescimento_pessoa1);
    printf("Insira a idade da pessoa 1: ");
    scanf("%d", &idade_pessoa1);

    if (idade_pessoa1 < 0) {
        printf("Idade invalida. O programa sera encerrado.\n");
        return 0;
    }

    printf("\nInsira a altura da pessoa 2 (em metros): ");
    scanf("%f", &altura_pessoa2);
    printf("Insira a taxa de crescimento anual da pessoa 2 (em metros): ");
    scanf("%f", &crescimento_pessoa2);
    printf("Insira a idade da pessoa 2: ");
    scanf("%d", &idade_pessoa2);

    if (idade_pessoa2 < 0) {
        printf("Idade invalida. O programa sera encerrado.\n");
        return 0;
    }

    while (altura_pessoa1 > altura_pessoa2 && anos < 100) {
        altura_pessoa1 += crescimento_pessoa1;
        altura_pessoa2 += crescimento_pessoa2;
        anos++;
    }

    if (anos == 100) {
        printf("\nNao e possivel que a pessoa 2 fique mais alta do que a pessoa 1 em 100 anos.\n");
    } else {
        printf("\nLevara %d anos para a pessoa 2 ficar mais alta do que a pessoa 1.\n", anos);
    }

    return 0;
}