#include <stdio.h>
#include <stdlib.h>

/*
TEMA DO TRABALHO: ARRAYS,FUNÇÕES E PONTEIROS

NOMES DO GRUPO:
JOEL ALVES DOS SANTOS (UC22102248) , ÍTALO CEZAR EUGÊNIO DE SANTANA (UC22102126),
LUÍZ HENRIQUE SOUZA OLIVEIRA DOS SANTOS (UC22101329), KAUÃ MIGUEL COSTA MATOS (UC22101679)

TEMA DA PARTE 1: MATRIZ

QUESTÃO 1:
CRIE UM PROGRAMA QUE CARREGUE (ARMAZENE) NÚMEROS NUMA MATRIZ 3 X 3.
APÓS A LEITURA DOS NÚMEROS, VOCÊ DEVERÁ CRIAR UM *MENU* QUE OFEREÇA
AS SEGUINTES OPÇÕES:

1- MOSTRA A *QUANTIDADE* DE NÚMEROS PARES ARMAZENADOS;

2- MOSTRA A *SOMA* DOS NÚMEROS ÍMPARES ARMAZENADOS;

3- MOSTRA O *MAIOR* E O *MENOR* NÚMERO ARMAZENADO;

4- MOSTRA A *MÉDIA* DOS NÚMEROS ARMAZENADOS;

5- MOSTRA A *QUANTIDADE* DE NÚMEROS ARMAZENADOS QUE SÃO IGUAIS A 10;

6- MOSTRA A *MULTIPLICAÇÃO* DOS NÚMEROS ARMAZENADOS NA DIAGONAL PRINCIPAL
(ÍNDICE DA LINHA IGUAL AO ÍNDICE DA COLUNA);

7- MOSTRA A *SOMA* DOS NÚMEROS ARMAZENADOS QUE SÃO DIVISÍVEIS POR 5.

8- ARMAZENA NUM VETOR TODOS OS NÚMEROS MENORES QUE 8. MOSTRAR O VETOR RESULTANTE.

9- *CONSULTA* UM NÚMERO NA MATRIZ. O USUÁRIO DEVERÁ INFORMAR QUAL O NÚMERO
DESEJA PROCURAR NA MATRIZ, CASO ENCONTRE, INFORMAR O NÚMERO E QUAL A POSIÇÃO (ÍNDICES)
NA MATRIZ.

10- SAIR.
*/

int main(void)
{
    //Declarando variáveis e Array
    int matriz[3][3] = {0};
    int pares = 0,opcao;
    int soma_impar = 0,maior = 0,menor,media = 0;
    int num_dez = 0;

    //Escrevendo uma parte do codigo;
    printf("Insira os valores da MATRIZ: \n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; ++j){
            scanf("%d",&matriz[i][j]);           
        }
    }

    //Limpando o prompt/terminal
    system("cls");

    //Escrevendo o Menu
    do
    {
        printf("Insira entre os numeros de 1 a 10\n");
        printf("1- Quantidade de numeros pares\n2- Soma dos numeros impares\n");
        printf("3- Maior e Menor numero\n4- Media dos numeros armazenados\n");
        printf("5- Quantidade de numeros iguais a 10\n6- Mult dos numeros na diagonal principal\n");
        printf("7- Soma dos numeros que sao divisiveis por 5\n8- Armazenar todos os numeros menor que 8 no array\n");
        printf("9-Consultar um numero na matriz,e informacao de sua posicao\n10- SAIR\nEscolha: ");
        scanf("%i",&opcao);

            switch(opcao)
            {
                case 1:
                    system("cls");

                    for(int i = 0; i < 3 ; i++){
                        for(int j = 0; j < 3; j++){
                            if(matriz[i][j] % 2 == 0){
                                pares++;
                            }
                        }
                    }
                        
                    printf("A quantidade de numeros pares e: %d\n",pares);

                    system("pause");
                    system("cls");
                break;

                case 2:
                    system("cls");

                    for(int i = 0; i < 3; i++){
                        for(int j = 0; j < 3; j++){
                            if(matriz[i][j] % 2 != 0){
                                soma_impar += matriz[i][j];          
                            }
                        }
                    }

                    printf("A soma dos numeros impares e: %d\n",soma_impar);
                    
                    system("pause");
                    system("cls");
                break;

                case 3:
                    system("cls");
                    
                    for(int i = 0;i < 3; i++){
                        for(int j = 0;j < 3; j++){
                            if(maior < matriz[i][j]){
                                maior = matriz[i][j];
                            }
                            if(matriz[i][j] < menor){
                                menor = matriz[i][j];
                            }
                        }
                    }
                    printf("Maior numero: %d",maior);
                    printf("\nMenor numero: %d\n",menor);

                    system("pause");
                    system("cls");
                break;

                case 4:
                    system("cls");
                    
                    int div = 9;
                    for(int i = 0;i < 3; i++){
                        for(int j = 0;j < 3; j++){
                            media += matriz[i][j];
                        }
                    }

                    printf("Media: %d\n",media/div);
                    
                    system("pause");
                    system("cls");
                break;

                case 5:
                    system("cls");

                    for(int i = 0;i < 3; i++){
                        for(int j = 0;j < 3; j++){
                            if(matriz[i][j] == 10){
                                num_dez++;
                            }
                        }
                    }
                    printf("Quantidade de dez na matriz: %d\n",num_dez);
                    
                    system("pause");
                    system("cls");
                break;

                case 6:
                    system("cls");

                    int mult=1;

                    for(int i = 0;i < 3; i++){
                        for(int j = 0;j < 3; j++){
                            if(i == j){
                                mult *= matriz[i][j];
                            }
                        }
                    }
                    printf("Multiplicacao da diagonal: %d\n",mult);

                    system("pause");
                    system("cls");
                break;

                case 7:
                    system("cls");
                    
                    int somar_cinco = 0;

                    for(int i = 0;i < 3; i++){
                        for(int j = 0;j < 3; j++){
                            if(matriz[i][j] % 5 == 0){
                                somar_cinco += matriz[i][j];
                            }
                        }
                    }
                    printf("A soma e: %d\n",somar_cinco);

                    system("pause");
                    system("cls");
                break;

                case 8:
                    system("cls");

                    int vetor[9];
                    int acrescimo = 0;

                    for(int i = 0;i < 3; i++){
                        for(int j = 0;j < 3; j++){
                            if(matriz[i][j] < 8){
                                vetor[acrescimo] = matriz[i][j] ;
                                acrescimo++;
                            }
                        }
                    }

                    for(int z = 0; z < acrescimo; z++){
                        printf("Vetor: %d\n",z);
                    }

                    system("pause");
                    system("cls");
                break;

                case 9:
                    system("cls");

                    int buscar_numero = 0,linha;
                    int numero_encontrado = 0 ,coluna;
                    
                    printf("Buscar o numero: ");
                    scanf("%d",&buscar_numero);

                    for(int i = 0;i < 3; i++){
                        for(int j = 0;j < 3; j++){
                            if(matriz[i][j] == buscar_numero){
                                numero_encontrado = 1;
                                linha = i;
                                coluna = j;
                            }
                        }
                    }

                    if(numero_encontrado == 1){
                        printf("Numero encontrado: %d",buscar_numero);
                        printf("\nLinha: %d",linha);
                        printf("\nColuna: %d",coluna);
                    }
                    else{
                        printf("\nNumero nao encontrado");
                    }

                    system("pause");
                    system("cls");
                break;

                default:
                break;
            }
    }while(opcao != 10);

    return 0;
}