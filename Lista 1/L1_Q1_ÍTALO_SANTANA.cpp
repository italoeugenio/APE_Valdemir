#include <stdio.h>
#include <stdlib.h>

// ÍTALO CEZAR EUGÊNIO DE SANTANA
// UC22102126

/*1. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
coletando dados sobre o salário e o número de filhos. A prefeitura deseja
saber:
a) média salarial da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$ 100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.
*/

int main () {
    int numFilhos = 0, numPessoas = 0, numPessoasSalarioAte100 = 0;
    float salario = 0, somaSalario = 0, mediaSalario = 0, mediaNumFilhos = 0, maiorSalario = 0;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    while (salario >= 0) {
        printf("Digite o numero de filhos: ");
        scanf("%d", &numFilhos);

        somaSalario += salario;
        numPessoas++;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100) {
            numPessoasSalarioAte100++;
        }

        mediaNumFilhos += numFilhos;
        
        printf("\nDIGITE UM SALARIO NEGATIVO PARA PARAR O PROGRAMA");
        printf("\nDigite o salario: ");
        scanf("%f", &salario);

       
    }

    mediaSalario = somaSalario / numPessoas;
    mediaNumFilhos = mediaNumFilhos / numPessoas;

    system("cls"); //CASO UTILIZE LINUX OU MAC, TROCAR O "cls" por "clear"
    printf("Media salarial: R$ %.2f\n", mediaSalario);
    printf("Media do numero de filhos: %.2f\n", mediaNumFilhos);
    printf("Maior salario: R$ %.2f\n", maiorSalario);
    printf("Percentual de pessoas com salario ate R$ 100,00: %.2f%%\n", (float) numPessoasSalarioAte100 / numPessoas * 100); //Usamos o (float) para alterar o tipo e garatir que o resultado seja um float.


    return 0;
}