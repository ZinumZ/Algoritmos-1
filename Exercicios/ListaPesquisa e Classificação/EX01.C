/*Faça um algoritmo que preenche um vetor com números inteiros positivos (máximo 
50 elementos). A cada novo número a ser incluído no vetor, o algoritmo deve inserir 
o  novo  elemento  tal  que  o  vetor  permaneça  ordenado.  Um  número  negativo  indica 
término  de  inclusão  de  elementos.  Ao  final,  mostre  a  disposição  dos  elementos  no 
vetor. */
#include <stdio.h>

int main() {
    int QTD = 50;
    int vetor[QTD];
    int tamanho = 0;
    int num;
    int i, j;

    // Leitura dos números e inserção no vetor
    do {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num >= 0) {
            // Encontrando a posição correta
            for (i = 0; i < tamanho; i++) {
                if (vetor[i] > num) {
                    // Movendo os elementos maiores para a direita
                    for (j = tamanho; j > i; j--) {
                        vetor[j] = vetor[j - 1];
                    }
                    break;
                }
            }

            // Insere o elemento na posição correta
            vetor[i] = num;
            tamanho++;
        }
    } while (num >= 0 && tamanho < QTD);

    // Exibe a disposição dos elementos no vetor
    printf("\nElementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
