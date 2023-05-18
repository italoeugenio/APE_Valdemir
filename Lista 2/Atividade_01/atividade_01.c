#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Nomes: Ítalo Cezar Eugênios de Santana (UC22102126) | Joel Alves dos Santos (UC22102248) |
    Luís Henrique Souza Oliveira (UC22101329)
    Turma: GPE02M0392
    Turno: Matutino
    Curso: Ciência da Computação
    Universidade: UCB-UNIVERSIDADE CATÓLICA DE BRASÍLIA
*/

//O código que faz a comparação entre os nomes e senha. 

int main(void)
{
    /*
        Comparar strings, como um sistema de registro
        e login é feito.
    */

    int login(char email[20],char senha[12]);
    char String1[20],String2[12];
    char String3[20],String4[12];
    int tentativa = 0;

    printf("Insira a primeira String para registro: ");
    gets(String1);

    fflush(stdin);

    printf("\nInsira a segunda String para registro: ");
    gets(String2);
    
    while(tentativa < 5)
    {
        system("cls");
        login(String3,String4);

        if(strcmp(String1,String3) == 0 && strcmp(String2,String4) == 0)
        {
            printf("Seja bem vindo!");
            tentativa = 5;
        }
        else
        {
            printf("Tente novamente!");
            tentativa++;
        }
    }

    return 0;
}

int login(char email[20],char senha[12])
{
    printf("Insira uma String email: ");
    gets(email);

    fflush(stdin);

    printf("\nInsira uma outra string senha: ");
    gets(senha);
}