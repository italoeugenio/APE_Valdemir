#include <stdio.h>
#include <stdlib.h>

// Exercícios de Revisão - 21/03/23
// Ítalo Cezar Eugênio de Santana
// UC22102126

/*Construa um algoritmo que receba como entrada três valores e os imprima em ordem
crescente. */

int main (){

    float num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

  if(num1 > num2 && num1 > num3){
        if (num2 > num3)
        {                                                   /*Exemplos de possibilidaes*/
            printf("\n%.2f %.2f %.2f", num3, num2, num1);   // 123
        } else {                                            // 132
            printf("\n%.2f %.2f %.2f", num2, num3, num1);   // 213
        }                                                   // 231
    } else if (num2 > num1 && num2 > num3){                 // 321
        if (num1 > num3)                                    // 312
        {
            printf("\n%.2f %.2f %.2f", num3, num1, num2);
        } else {
            printf("\n%.2f %.2f %.2f", num1, num3, num2);
        }
    } else {
        if (num1 > num2) {
            printf("\n%.2f %.2f %.2f", num2, num1, num3); 
        } else {
            printf("\n%.2f  %.2f %.2f", num1, num2, num3); 
        }
    }


    
    return 0;
}