#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Lista de Exercício 14/03/2023
// Ítalo Cezar Eugênio de Santana
/* 6. Faça um algoritmo recebe um valor inteiro e se o número for maior que 10, será impressa a
frase: "O número e maior que 10". Se o número for menor que 10, será impressa a frase:
“O número é menor que 10”. Se o número for igual a 10 aparecerá a frase: “Você acertou”. */

int main (){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Insira um valor interio:");
    scanf("%d", &num);

    if(num > 10)
    {
        printf("O número é maior que 10");
    } else if (num < 10)
    {
        printf("O número é menor que 10");
    }else if(num == 10)
    {
        printf("Você acertou");
    }

    return 0;
}