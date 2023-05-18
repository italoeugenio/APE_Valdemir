#include <stdio.h>
#include <string.h>

/*
    Nomes: Ítalo Cezar Eugênios de Santana (UC22102126) | Joel Alves dos Santos (UC22102248) |
    Luís Henrique Souza Oliveira (UC22101329)
    Turma: GPE02M0392
    Turno: Matutino
    Curso: Ciência da Computação
    Universidade: UCB-UNIVERSIDADE CATÓLICA DE BRASÍLIA
*/

/* faça um programa que usando funçoes de strings que a string digitada seja copiada e emitida no terminal*/

int main ()
{
	char str1[50];
    char str2[50];
    char strcopia[50];

	printf ("Digite uma palavra(cojunto de caracteres), nesse caso uma string: ");
	gets (str1);

	strcpy (str2,str1);	
	strcpy (strcopia,"foi informado a palavra/string: ");

	printf ("\n%s",strcopia);
    printf ("\n%s",str2);

	return 0;
}