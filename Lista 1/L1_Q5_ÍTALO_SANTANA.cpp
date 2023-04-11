#include <stdio.h>
#include <stdlib.h>

// ÍTALO CEZAR EUGÊNIO DE SANTANA
// UC22102126

/*5. Desenvolva um programa que calcula a metragem quadrada de um
terreno, usando o teste no final para criar a opção de digitar novos
valores sem sair do programa.
O programa deverá pedir ao usuário para digitar a metragem1 do terreno,
a metragem 2 e em seguida mostrar o tamanho total do terreno em
metros quadrados. O programa deverá perguntar ao usuário se ele quer
continuar para digitar outras metragens ou encerrar o programa.*/

int main (){

    float metragem1, metragem2, area;
    char cont;

    do{

        //COMPRIMENTO
        printf("Digite o comprimento em METROS: ");
        scanf("%f", &metragem1);
        while (metragem1 <= 0){
            printf("Comprimento invalido, digite novamente: ");
            scanf("%f", &metragem1);
        }
        

        //LARGURA
        printf("Digite a largura em METROS: ");
        scanf("%f", &metragem2);
        while (metragem2 <= 0){
            printf("Largura invalida, digite novamente: ");
            scanf("%f", &metragem2);
        } 
        
        area = metragem1 * metragem2;
    
        printf("O tamanho total do terreno em metros quadrados e de %.2f(m2)\n", area);

        printf("Deseja digitar novas metragens? (S/N): ");
        scanf(" %c", &cont);
        printf("\n");
    } while (cont == 'S' || cont == 's');

    return 0;
}
