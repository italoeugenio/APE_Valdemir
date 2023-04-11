#include <stdio.h>
#include <stdlib.h>

// ÍTALO CEZAR EUGÊNIO DE SANTANA
// UC22102126

/*4. Elabore um programa que receba como dados de entrada duas notas
de vários alunos
e ao final mostra:
a) A quantidade de alunos com media maior ou igual a 7,0;
b) A Menor media da Turma;
c) A Media geral da turma;
d) Quantas vezes o programa rodou;
Observação: O programa deve finalizar quando for digitado o valor 0
(zero) e utilizar no
máximo 6 variáveis não utilizar vetores ou matrizes.
*/

int main (){

    int cont = 0, alunosMediaMaior7 = 0;
    float menorMedia = 10.0, nota1, nota2, media_geral = 0.0;

    while (1) {

        printf("Informe a primeira nota (digite 0 para encerrar): ");
        scanf("%f", &nota1);
        if (nota1 == 0) {
            break;
        }

        printf("Informe a segunda nota: ");
        scanf("%f", &nota2);
        printf("\n");
        if (nota2 == 0) {
            break;
        }

        cont++;
        media_geral += (nota1 + nota2) / 2;

        if ((nota1 + nota2) / 2 < menorMedia) {
            menorMedia = (nota1 + nota2) / 2;
        }

        if ((nota1 + nota2) / 2 >= 7) {
            alunosMediaMaior7++;
        }

    }

    if (cont == 0) {
        printf("Nenhuma nota informada.\n");
        return 0;
    }

    system("cls"); //CASO UTILIZE LINUX OU MAC, TROCAR O "cls" por "clear"
    printf("Quantidade de alunos com media maior ou igual a 7,0: %d\n", alunosMediaMaior7);
    printf("Menor media da turma: %.2f\n", menorMedia);
    printf("Media geral da turma: %.2f\n", media_geral / cont);
    printf("Quantidade de vezes que o programa rodou: %d\n", cont);

    return 0;
}