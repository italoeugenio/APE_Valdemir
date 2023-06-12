#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 60
#define MAX_TIME 60
#define NUM_JOGADORES 3

/*
Nomes do grupo:
JOEL ALVES DOS SANTOS (UC22102248) , ÍTALO CEZAR EUGÊNIO DE SANTANA (UC22102126),
LUÍZ HENRIQUE SOUZA OLIVEIRA DOS SANTOS (UC22101329), KAUÃ MIGUEL COSTA MATOS (UC22101679)

3) Faça um programa que leia o nome, o time e a quantidade de gols de 3 jogadores 
de futebol. Após o cadastro informe:
a) A quantidade total de gols marcados;
b) Quantos jogadores jogam no FLAMENGO;
c) Todos os dados do artilheiro
*/

struct jogador {
    char nome[MAX_NOME];
    char time[MAX_TIME];
    int gols;
};

int main() {
    struct jogador jogadores[NUM_JOGADORES];
    int condicao = 0;

    // INFORMAÇÕES DOS JOGADORES
    while (condicao < NUM_JOGADORES) {
        printf("Jogador %d\n", condicao + 1);

        printf("Nome do jogador: ");
        fgets(jogadores[condicao].nome, sizeof(jogadores[condicao].nome), stdin);
        jogadores[condicao].nome[strcspn(jogadores[condicao].nome, "\n")] = '\0';

        printf("Time do jogador (DIGITE COM LETRA MAIUSCULA): ");
        fgets(jogadores[condicao].time, sizeof(jogadores[condicao].time), stdin);
        jogadores[condicao].time[strcspn(jogadores[condicao].time, "\n")] = '\0';

        printf("Quantidade de gols do jogador: ");
        scanf("%d", &jogadores[condicao].gols);

        // Limpa o buffer de entrada
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}

        condicao++;
        printf("\n");
    }

    // Condição caso escolha o Flamengo, quem foi o artilheiro e o número total de gols
    int totalGols = 0;
    int jogadoresFlamengo = 0;
    int indiceArtilheiro = 0;

    for (int i = 0; i < NUM_JOGADORES; i++) {
        totalGols += jogadores[i].gols;

        if (strcmp(jogadores[i].time, "FLAMENGO") == 0) {
            jogadoresFlamengo++;
        }

        if (jogadores[i].gols > jogadores[indiceArtilheiro].gols) {
            indiceArtilheiro = i;
        }
    }

    // Saída
    printf("--------/----------/---------------------/------------------/----------/\n");
    printf("Quantidade total de gols marcados: %d\n", totalGols);
    printf("Quantidade de jogadores que jogam no FLAMENGO: %d\n", jogadoresFlamengo);
    printf("\nDados do artilheiro:\n");
    printf("Nome: %s\n", jogadores[indiceArtilheiro].nome);
    printf("Time: %s\n", jogadores[indiceArtilheiro].time);
    printf("Gols: %d\n", jogadores[indiceArtilheiro].gols);

    return 0;
}
