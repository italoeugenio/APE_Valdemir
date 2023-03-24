#include <stdio.h>
#include <stdlib.h>

// Exercícios de Revisão - 21/03/23
// Ítalo Cezar Eugênio de Santana
// UC22102126
/*Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15%
de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês.*/

int main (){

    char nome [20];
    float salario, vendas;
    float comissao;

    printf("Digite o seu primeiro nome: ");
    scanf("%s", nome);

    printf("Digite o seu salario fixo: ");
    scanf("%f", &salario);

    printf("Digite o total de vendas que realizou em dinheiro: ");
    scanf("%f", &vendas);

    comissao = salario + (vendas * 0.15);

    printf("\nTOTAL A RECEBER =  R$ %.3f", comissao);
}
