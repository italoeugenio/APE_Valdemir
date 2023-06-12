#include <stdio.h>
#include <stdlib.h>

/*
Nomes do grupo:
JOEL ALVES DOS SANTOS (UC22102248) , ÍTALO CEZAR EUGÊNIO DE SANTANA (UC22102126),
LUÍZ HENRIQUE SOUZA OLIVEIRA DOS SANTOS (UC22101329), KAUÃ MIGUEL COSTA MATOS (UC22101679)

5. Desenvolva um programa que declare um vetor de inteiros e um ponteiro para inteiros. Associe 
o ponteiro ao vetor. Agora, some mais um (+1) a cada posição do vetor usando o ponteiro (use *)
*/

int main()
{
    int vetor[5] = {1, 2, 4, 6, 8};
    int *ponteiro = vetor;

    int cont1 = 0;
    while (cont1 < 5)
    {
        (*ponteiro)++; // Incremento a cada posição do vetor
        ponteiro++;
        cont1++;
    }

    printf("Vetor atualizado: ");
    int cont2 = 0;
    while (cont2 < 5)
    {
        printf("%d ", vetor[cont2]);
        cont2++;
    }
    printf("\n");

    return 0;
}
