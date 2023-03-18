#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Lista de Exercício 14/03/2023
// Ítalo Cezar Eugênio de Santana
/* 3. Faça um programa que recebe a idade de uma pessoa e se idade menor que 30 aparece a mensagem
 Você é muito jovem. Caso idade maior que 30 anos, o programa não fará nada.*/

 int main (){

    setlocale(LC_ALL, "Portuguese");
    int idade;

    printf("Insira a sua idade:");
    scanf("%i", &idade);

    if(idade < 30)
    {
        printf("\"VOCÊ É MUITO JOVEM\"");
    }
    return 0;
 } 