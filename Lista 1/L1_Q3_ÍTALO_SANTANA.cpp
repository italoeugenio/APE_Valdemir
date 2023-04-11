#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ÍTALO CEZAR EUGÊNIO DE SANTANA
// UC22102126

/*3. Elabore um programa que faça o sorteio de vários números e ao final
mostra:
a) A quantidade de números sorteados;
b) O Maior numero sorteado;
c) Quantos números pares foram sorteados;
Observação: O programa deve finalizar quando for sorteado o valor 0
(zero)e utilizar no máximo 3 variáveis não utilizar vetores ou matrizes.*/

int main(){

    long int num;
    int maior = 0, pares = 0, quantidade = 0;

    srand(time(NULL));

    do{
        num = rand() % 101; //Quais números serão sorteados Ex: 101 = 0 até 100, 20 = 0 até 19.
        printf("Numero: %ld\n", num);
        quantidade++;

        if(num > maior){
            maior = num;
        }

        if(num % 2 == 0){
            pares++;
        }
        
    } while (num != 0);

    printf("\n(O NUMERO 0 NAO FOI CONTABILIZADO, JA QUE FAZ O PROGRAMA PARAR)\n\n");
    printf("Quantidade de numeros sorteados: %i\n", quantidade - 1);
    printf("O maior numero sorteado foi: %i\n", maior);
    printf("Quantidade de numeros pares sorteados: %i", pares - 1);
    

    return 0;
}