#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Nomes do grupo:
JOEL ALVES DOS SANTOS (UC22102248) , ÍTALO CEZAR EUGÊNIO DE SANTANA (UC22102126),
LUÍZ HENRIQUE SOUZA OLIVEIRA DOS SANTOS (UC22101329), KAUÃ MIGUEL COSTA MATOS (UC22101679)

1) Faça um programa que leia o nome, sexo e o valor da mensalidade de 3 alunos. 
Após a leitura dos dados informe:
a) O valor da menor mensalidade;
b) A quantidade de alunos do sexo masculino ('M');
c) A média das mensalidades;
d) O nome e a idade do aluno mais velho.
*/

int main() {
    char nome[3][100];
    char sexo[3];
    float mensalidade[3];
    int idade[3];
    float menor_mensalidade;
    int quantidade_masculino = 0;
    float soma_mensalidades = 0;
    char nome_mais_velho[100];
    int idade_mais_velho = 0;

  
    for (int i = 0; i < 3; i++) {
        printf("Informacoes do aluno %d:\n", i + 1);
        
        printf("Nome: ");
        scanf("%s", nome[i]);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[i]);

        printf("Valor da mensalidade: ");
        scanf("%f", &mensalidade[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("\n");
    }

   
    menor_mensalidade = mensalidade[0];

   
    for (int i = 0; i < 3; i++) {
       
        if (mensalidade[i] < menor_mensalidade) {
            menor_mensalidade = mensalidade[i];
        }

        
       if (sexo[i] == 'M' || sexo[i] == 'm') {
            quantidade_masculino++;
        }

        
        soma_mensalidades += mensalidade[i];

        
        if (idade[i] > idade_mais_velho) {
            idade_mais_velho = idade[i];
            
           
            int nome_copiado;
            for (nome_copiado= 0; nome[i][nome_copiado] != '\0'; nome_copiado++) {
                nome_mais_velho[nome_copiado] = nome[i][nome_copiado];
            }
            nome_mais_velho[nome_copiado] = '\0'; 
        }
    }

 
    float media_mensalidades = soma_mensalidades / 3;

 
    printf("Valor da menor mensalidade: %.2f\n", menor_mensalidade);
    printf("Quantidade de alunos do sexo masculino: %d\n", quantidade_masculino);
    printf("Media das mensalidades: %.2f\n", media_mensalidades);
    printf("Nome e idade do aluno mais velho: %s, %d anos\n", nome_mais_velho, idade_mais_velho);

    return 0;
}