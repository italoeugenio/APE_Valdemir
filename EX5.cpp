#include <stdio.h>
#include <stdlib.h>

// Lista de Exercício 14/03/2023
// Ítalo Cezar Eugênio de Santana
/* 5. Faça um programa em C que leia a nota final, o total de presenças e o número total de
aulas ministradas e imprima a nota final, o total de presenças e uma mensagem dizendo se
este aluno foi aprovado ou reprovado. Sabe-se que a freqüência necessária é de no mínimo
75% das aulas ministradas e que a nota mínima deve ser maior ou igual a 6.0. */

int main(){

    float nota_final;
    float aulas, presencas;
    float frequencia;

    printf("Digite sua nota final:");
    scanf("%f", &nota_final);

    printf("Digite o total de presencas:");
    scanf("%f", &presencas);

    printf("Digite o numero total de aulas ministradas:");
    scanf("%f", &aulas);

    frequencia = (presencas/aulas) * 100;
    
	system("cls");
	
    if(nota_final >= 6 && frequencia >= 75.0)
    {
        printf("Sua nota final foi de: %.2f\n", nota_final);
        printf("O total de presencas foi de: %.2f\n", presencas);
        printf("A frequencia do aluno foi de: (%.2f%%)\n", frequencia);
        printf("Aluno Aprovado");
    } else 
    {
        printf("Sua nota final foi de: %.2f\n", nota_final);
        printf("O total de presencas foi de: %.2f\n", presencas);
        printf("A frequencia do aluno foi de: (%.2f%%)\n", frequencia);
        printf("Aluno Reprovado");
    }

    return 0;
}