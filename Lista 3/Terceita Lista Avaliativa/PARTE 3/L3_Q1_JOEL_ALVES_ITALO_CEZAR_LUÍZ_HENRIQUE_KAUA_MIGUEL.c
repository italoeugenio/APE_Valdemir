#include <stdio.h>
#include <stdlib.h>

/*
Nomes do grupo:
JOEL ALVES DOS SANTOS (UC22102248) , ÍTALO CEZAR EUGÊNIO DE SANTANA (UC22102126),
LUÍZ HENRIQUE SOUZA OLIVEIRA DOS SANTOS (UC22101329), KAUÃ MIGUEL COSTA MATOS (UC22101679)

1. Faça um programa em C que armazene em um vetor 3 valores, e imprima os valores utilizando 
notação de ponteiro.
*/

int main()
{
    int vetor[3] = {5, 10, 15};
    int *ponteiro = vetor;
    int cont = 0;

    while (cont < 3)
    {
        printf("Valor %d: %d\n", cont + 1, *ponteiro);
        ponteiro++;
        cont++;
    }
    return 0;
}