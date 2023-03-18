#include <stdio.h>
#include <stdlib.h>

// Lista de Exercício 14/03/2023
// Ítalo Cezar Eugênio de Santana
/* 4. Faça um programa que entra com a idade de uma pessoa e se idade maior que 70 anos,
aparece a mensagem Velho. Se idade maior que 21 anos, Adulto. Se idade menor que 21
anos, Jovem.*/

int main (){

    int idade;

    printf("Insira a sua idade:");
    scanf("%i", &idade);

    if (idade > 70) 
    {
        printf("VELHO");
    } else if (idade == 70)
    {
        printf("ADULTO E VELHO");
    }
	else if (idade > 21 )
    {
        printf("ADULTO");
    } 
	else if (idade < 21)
    {
        printf ("JOVEM");
    } else if (idade == 21)
    {
        printf("JOVEM E ADULTO");
    }

    return 0;
}