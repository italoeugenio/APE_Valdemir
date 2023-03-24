#include <stdio.h>
#include <stdlib.h>

// Exercícios de Revisão - 21/03/23
// Ítalo Cezar Eugênio de Santana
// UC22102126

/*Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma
comissão calculada de acordo com o valor de suas vendas. Se o valor da venda de
um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor vendido. Se
o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo
extremos) a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%.
Escreva um algoritmo que gere um relatório contendo nome, valor da venda e
comissão de cada um dos corretores. O relatório deve mostrar também o total de
vendas da empresa */


int main (){

    char corretor1[30], corretor2[30], corretor3[30];
    float valor_venda1, valor_venda2, valor_venda3, comissao1, comissao2, comissao3, total_vendas;

    printf("Digite o nome do primeiro corretor: ");
    scanf("%s", corretor1);
    while(getchar() != '\n');
    printf("Digite o valor da venda do primeiro corretor: R$");
    scanf("%f", &valor_venda1);
    while(getchar() != '\n');

    printf("\nDigite o nome do segundo corretor: ");
    scanf("%s", corretor2);
    while(getchar() != '\n');
    printf("Digite o valor da venda do primeiro corretor: R$");
    scanf("%f", &valor_venda2);
    while(getchar() != '\n');

    printf("\nDigite o nome do terceiro corretor: ");
    scanf("%s", corretor3);
    while(getchar() != '\n');
    printf("Digite o valor da venda do primeiro corretor: R$");
    scanf("%f", &valor_venda3);
    while(getchar() != '\n');
    

    //Corretor 1
    if (valor_venda1 > 50000) {
        comissao1 = valor_venda1 * 0.12;
    } else if (valor_venda1 >= 30000 && valor_venda1 <= 50000) {
        comissao1 = valor_venda1 * 0.095;
    } else {
        comissao1 = valor_venda1 * 0.07;
    }

    // Correto 2
    if (valor_venda2 > 50000) {
        comissao2 = valor_venda2 * 0.12;
    } else if (valor_venda2 >= 30000 && valor_venda2 <= 50000) {
        comissao2 = valor_venda2 * 0.095;
    } else {
        comissao2 = valor_venda2 * 0.07;
    }

    // Corretor 3
    if (valor_venda3 > 50000) {
        comissao3 = valor_venda3 * 0.12;
    } else if (valor_venda3 >= 30000 && valor_venda3 <= 50000) {
        comissao3 = valor_venda3 * 0.095;
    } else {
        comissao3 = valor_venda3 * 0.07;
    }

    total_vendas = valor_venda1 + valor_venda2 + valor_venda3;

    system("cls"); //CASO UTILIZE MAC OU LINUX TROCAR O "cls" por "clear"

    printf("\n ---RELATORIO---");
    printf("\nCorretor: %s\nVendas: R$%.2f\nComissao: R$%.2f\n\n", corretor1, valor_venda1, comissao1);
    printf("Corretor: %s\nVendas: R$%.2f\nComissao: R$%.2f\n\n", corretor2, valor_venda2, comissao2);
    printf("Corretor: %s\nVendas: R$%.2f\nComissao: R$%.2f\n\n", corretor3, valor_venda3, comissao3);
    printf("TOTAL DE VENDAS DA EMPRESA: R$%.2f", total_vendas);
    return 0;
}
