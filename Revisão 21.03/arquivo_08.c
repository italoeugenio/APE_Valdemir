#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Exercícios de Revisão - 21/03/23
// Ítalo Cezar Eugênio de Santana
// UC22102126
/*Escreva um programa que leia três valores reais: A, B e C. Em seguida, calcule e
mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.*/

int main (){

    float A,B,C;
    float triangulo, circulo, trapezio, quadrado, retangulo;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f",&C);
    
    triangulo = (A*C)/2;
    printf("\nAREA DO TRIANGULO= %f\n", triangulo);

    circulo = 3.14159 * pow(C,2);
    printf("AREA DO CIRCULO= %f\n", circulo);

    trapezio = ((A+B)*C)/2;
    printf("AREA DO TRAPEZIO= %f\n", trapezio);

    quadrado = pow(B,2);
    printf("AREA DO QUADRADO= %f\n", quadrado);

    retangulo = A * B;
    printf("AREA DO RETANGULO= %f",retangulo);

    return 0;
}
