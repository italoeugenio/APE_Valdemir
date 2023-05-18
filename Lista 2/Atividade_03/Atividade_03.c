#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define MAX 50

/*
    Nomes: Ítalo Cezar Eugênios de Santana (UC22102126) | Joel Alves dos Santos (UC22102248) |
    Luís Henrique Souza Oliveira (UC22101329)
    Turma: GPE02M0392
    Turno: Matutino
    Curso: Ciência da Computação
    Universidade: UCB-UNIVERSIDADE CATÓLICA DE BRASÍLIA
*/

/*
    Funções Usadas:

    bool();
    sprintf():
    strcat():
    strlen():
    gets():
    isalpha(): 
*/

bool alphabetic(char string[MAX])
{
    for(int i = 0; string[i] != '\0'; i++)
    {
        if(!isalpha(string[i])){
            return false;
        }
    }
    return true;
}

int main(void)
{
    /*
        O presente código tem como função
        que o usuario informe uma string e 
        gere um número aleatorio para concatenar
        com ele.
    */

    //Declarando variaveis
    char senha[MAX];
    char str[MAX];
    int ValorAleatorio = 0;
    int tamanhoSenha;

    printf("Insira uma senha: ");
    gets(senha);

    if(alphabetic(senha))
    {
        srand(time(NULL));
        
        while(ValorAleatorio == 0){
            ValorAleatorio = rand() % 200;
        }
        sprintf(str , "%i" , ValorAleatorio);
        strcat(senha,str);
        tamanhoSenha = strlen(senha);

        printf("A senha sugerida e: %s",senha);
        printf("\nO tamanho dela e: %i",tamanhoSenha);
    }
    else
    {   
        tamanhoSenha = strlen(senha);

        printf("A senha sugerida e: %s",senha);
        printf("\nO tamanho dela e: %i",tamanhoSenha);
    }       

    return 0;
}