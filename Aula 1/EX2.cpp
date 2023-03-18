#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Lista de Exercício 14/03/2023
// Ítalo Cezar Eugênio de Santana
//2. Um programa que calcule a área do triângulo.

int main () {
    
setlocale(LC_ALL, "Portuguese");

float base, altura, area;

printf("Insira a base do triângulo:");
scanf("%f", &base);

printf("Insira a altura do triângulo:");
scanf("%f", &altura);

area = (base*altura)/2;

printf("A área do triângulo é:%.3f", area);


return 0;
}