#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Lista de Exercício 14/03/2023
// Ítalo Cezar Eugênio de Santana
// 1. Programa que calcule a média de 5 notas de um aluno. 

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");

	float nota1, nota2, nota3, nota4, nota5;
	float resultado , media = 5;
			
	printf("Digite a nota do primeiro aluno:");
	scanf("%f", &nota1);
	
	printf("Digite a nota do segundo aluno:");
	scanf("%f", &nota2);
	
	printf("Digite a nota do terceiro aluno:");
	scanf("%f", &nota3);
	
	printf("Digite a nota do quarto aluno:");
	scanf("%f", &nota4);
	
	printf("Digite a nota do quinto aluno:");
	scanf("%f", &nota5);	

	resultado = (nota1 + nota2 + nota3 + nota4 + nota5) / media; 
	
	printf("A Média das notas é: %2.f", resultado);
	return 0;
}
