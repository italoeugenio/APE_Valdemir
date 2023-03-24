#include <stdio.h>
#include <stdlib.h>

// Exercícios de Revisão - 21/03/23
// Ítalo Cezar Eugênio de Santana
// UC22102126

/*Faça um algoritmo que leia um número N e imprima “F1”, “F2” ou “F3”, conforme a
condição:
“F1”, se N <= 10
“F2”, se N > 10 e N <= 100
“F3”se n > 100*/

int main() {

    int num1;
    printf("Digite um numero: ");
    scanf("%i", &num1);

    if (num1 <= 10) 
    {
        printf("F1\n");

    } else if (num1 > 10 && num1 <= 100) 
    {
        printf("F2\n");

    } else 
    {
        printf("F3\n");
    }

    return 0;
}
