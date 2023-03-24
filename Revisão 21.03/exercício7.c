#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Exercícios de Revisão - 21/03/23
// Ítalo Cezar Eugênio de Santana
// UC22102126
/*Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o
valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3
. Considere(atribua) para pi o valor 3.14159.*/

int main (){

    float raio;
    float volume;

    printf("Insira o raio de um esfera para descobrir o seu volume em cm3: ");
    scanf("%f", &raio);

    volume = (4 * 3.14159 *  pow (raio,3)) / 3;
    printf("\nVOLUME = %.3f cm3", volume);
    return 0;
}