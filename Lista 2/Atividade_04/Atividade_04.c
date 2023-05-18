#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TAMANHO 100

/*Nomes: Ítalo Cezar Eugênios de Santana (UC22102126) | Joel Alves dos Santos (UC22102248) |
Luís Henrique Souza Oliveira (UC22101329)*/
//TURMA: GPE02M0392
//TURNO: Matutino
//CURSO: Ciência da Computação
//UNIVERSIDADE: UCB-UNIVERSIDADE CATÓLICA DE BRASÍLIA

int main(){
    //STRLEN--> CALCULA O TAMANHO DA STRING
    //PUTS--> IMPRIMIR STRINGS

    //Esse programa converte string em minúsculas para maiúsculas

    char string[MAX_TAMANHO];
    int cont = 0;

    printf("Digite uma frase ou palavra: ");
    //UTILIZEI O "fgets", PARA NÃO ESTOURAR O BUFFER (SEGURANÇA)
    fgets(string, MAX_TAMANHO, stdin);

    //VERIFICA SE É UMA QUEBRA DE LINHA E DEPOIS É SUBSTITUÍDA POR UM CARACTERE NULO  
    if (string[strlen(string) - 1] == '\n')
    {
        string[strlen(string) - 1] = '\0';
    }

    // CONVERTE PARA LETRAS MAIÚSCULAS
    //TOUPPER --> CONVERTE UM CARACTERE EM MINÚSCULO PARA MAIÚSCULO
    while (string[cont] != '\0')
    {
        string[cont] = toupper(string[cont]);
        cont++;
    }

    puts("Frase/letra em letras maiusculas:");
    puts(string);
    
    return 0;
}