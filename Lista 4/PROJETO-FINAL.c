#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define R 25

/*Nomes do grupo:
JOEL ALVES DOS SANTOS (UC22102248) , ÍTALO CEZAR EUGÊNIO DE SANTANA (UC22102126),
LUÍZ HENRIQUE SOUZA OLIVEIRA DOS SANTOS (UC22101329), KAUÃ MIGUEL COSTA MATOS (UC22101679)

Data: 19/06/2023
*/

//Função do calculo
float calcularPeso(float V)
{
    return V * R;
}

//Função principal
int main(void)
{
    //Declarando a variável escolha para o switch
    int escolha;

    //System color para definir uma cor
    system("color 02");

    for (int i = 0; i < 1; i++)
    {
        printf("        ######  ##### ##########\n");
        usleep(100000);
        printf("    ######      #####  #######################\n");
        usleep(100000);
        printf("#######         #####           ################\n");
        usleep(100000);
        printf("#######                              ###############\n");
        usleep(100000);
        printf("#####################################################\n");
        usleep(100000);
        printf("######################################################\n");
        usleep(100000);
        printf("    #####        ######                    ####\n");
        usleep(100000);
        printf("                 ######                    ####\n");
        usleep(100000);
        printf("                 ######                     ####\n");
        usleep(100000);
        printf("                 ######                     ####\n");
        usleep(100000);
        printf("                 ######                     ####\n");
        usleep(100000);
        printf("                 ######                     ####\n");
        usleep(100000);
        printf("                 ######                     ####\n");
        usleep(100000);
        printf("                 ######                     ####\n");
        usleep(100000);
        printf("                 ######                 ####    ####\n");
        usleep(100000);
        printf("                 ######                 # ##    # ##\n");
        usleep(100000);
        printf("                 ######                $$$$$$$$$$$$$$$$\n");
        usleep(100000);
        printf("                 ######                $$$$$$$$$$$$$$$$\n");
        usleep(100000);
        printf("                 ######\n");
        usleep(100000);
        printf("        ######## #####  ####\n");
        usleep(100000);
        printf("       ######    ######    ####\n");
        usleep(100000);
        printf("      ####       ######     ####\n");
        usleep(100000);
        printf("     #####       ######      ####\n");
        usleep(100000);
        printf("    ######       #######     #####\n");

        system("cls"); // Limpa a tela (Windows)
        // system("clear"); // Limpa a tela (Linux/Mac)
    }

    do
    {
        printf("1- para acessar o programa\n2- para encerrar\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            system("cls");

            // Variaveis do volume
            float altura, largura, comprimento, volumeTotal;
            float pesoGuindaste;

            // pegando as informações do usuario
            printf("Digite o valor da altura: \n");
            scanf("%f", &altura);
            printf("Digite o valor da largura: \n");
            scanf("%f", &largura);
            printf("Digite o valor da comprimento: \n");
            scanf("%f", &comprimento);

            // Calculando o peso do guindaste
            volumeTotal = altura * comprimento * largura;
            pesoGuindaste = calcularPeso(volumeTotal);

            // G1 suporta 2000 kg; G2 suporta 4000 kg e G3 8000 KG

            if (volumeTotal <= 2000)
            {
                printf("Guindaste a ser utilizado: G1\n");
            }
            else if (volumeTotal > 2000 && volumeTotal <= 4000)
            {
                printf("Guindaste a ser utilizado: G3\n");
            }
            else if (volumeTotal > 4000 && volumeTotal <= 8000)
            {
                printf("Guindaste a ser utilizado: G2\n");
            }
            else
            {
                printf("O guingade a ser utilizado é o G2");
            }

            exit(0);
            break;

        case 2:
            printf("Encerrando o programa\n");
            exit(0);
            break;

        default:
            printf("Opcao invalida!\n");
            system("pause\n");
            system("cls");
            break;
        }
    } while (escolha == 1);
}