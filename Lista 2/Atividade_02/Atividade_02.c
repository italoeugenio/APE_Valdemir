#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Constantes 
#define MAX_PALAVRAS 100
#define MAX_TAMANHO 100

/*Nomes: Ítalo Cezar Eugênios de Santana (UC22102126) | Joel Alves dos Santos (UC22102248) |
Luís Henrique Souza Oliveira (UC22101329)*/
//TURMA: GPE02M0392
//TURNO: Matutino
//CURSO: Ciência da Computação
//UNIVERSIDADE: UCB-UNIVERSIDADE CATÓLICA DE BRASÍLIA

int main() {
//STRCPY--> COPIAR STRINGS
//STRCMP--> COMPARAR STRINGS

/*Esse programa vai pedir para o usuário digitar várias palavras, depois vai ver qual é 
a maior e o número de letras que ela passui*/

    char palavras[MAX_PALAVRAS][MAX_TAMANHO];
    char maior_palavra[MAX_TAMANHO];
    int tamanho_maior_palavra = 0;
    int num_palavras, i;

    printf("Digite as palavras: (digite ''fim'' para encerrar)\n");

    // ler as palavras digitadas pelo usuário
    num_palavras = 0;
    do {
        scanf("%s", palavras[num_palavras]);
        if (strcmp(palavras[num_palavras], "fim") == 0) {
            break;
        }
        num_palavras++;
    } while (num_palavras < MAX_PALAVRAS);

    // encontrar a maior palavra
    for (i = 0; i < num_palavras; i++) {
        if (strlen(palavras[i]) > tamanho_maior_palavra) {
            tamanho_maior_palavra = strlen(palavras[i]);
            strcpy(maior_palavra, palavras[i]);
        }
    }

    // exibir a maior palavra e o seu número de letras
    printf("A maior palavra digitada foi '%s' com %d letras.\n", maior_palavra, tamanho_maior_palavra);

    return 0;
}