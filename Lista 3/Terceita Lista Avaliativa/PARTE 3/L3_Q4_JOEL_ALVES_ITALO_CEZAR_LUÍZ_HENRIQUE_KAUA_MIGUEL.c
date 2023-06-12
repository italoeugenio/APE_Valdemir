#include <stdio.h>

/*
Nomes do grupo:
JOEL ALVES DOS SANTOS (UC22102248) , ÍTALO CEZAR EUGÊNIO DE SANTANA (UC22102126),
LUÍZ HENRIQUE SOUZA OLIVEIRA DOS SANTOS (UC22101329), KAUÃ MIGUEL COSTA MATOS (UC22101679)

4. Crie uma função que aceite como parâmetro um vetor de inteiros com N valores,
 e determina o maior elemento do vetor e o número de vezes que este elemento ocorreu no vetor. 
 Por exemplo, para um vetor com os seguintes elementos: 3, 5, 12, 6, 7, 27, 9, 16, 27, a função deve retorna para
  o programa que a chamou o valor 27 e o número 2 (indicando que o número 27 ocorreu 2 vezes).
   A função deve ser do tipo void.
*/

void func(int vet[], int tam){
    int quantidadeDeVezesRepetidas = 0;
    int maiorValor = 0;

    for(int i = 0; i<tam; i++){
        if(maiorValor < vet[i]){
            maiorValor = vet[i];
        }
    }

    for(int i = 0; i<tam; i++){
        if(vet[i] == maiorValor){
            quantidadeDeVezesRepetidas++;
        }
    }

    printf("Maior valor: %d\nQuantidade de vezes que se repetiu: %d\n", maiorValor, quantidadeDeVezesRepetidas);
}


int main(){
    int tamanhoDoVetor;

    printf("Informe o tamanho do vetor: \n");
    scanf("%d", &tamanhoDoVetor);

    int vet[tamanhoDoVetor];    
    for(int i = 0; i<tamanhoDoVetor; i++){
        printf("Informe o %d elemento: \n", i+1);
        scanf("%d", &vet[i]);
    }

     func(vet, tamanhoDoVetor);

}