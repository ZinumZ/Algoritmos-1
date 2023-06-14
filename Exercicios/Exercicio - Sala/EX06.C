/*Faça um algoritmo que preenche um vetor com números inteiros positivos (máximo 50 elementos). A cada novo número a ser incluído no vetor, o algoritmo deve inserir o novo elemento tal que o vetor permaneça ordenado. Um número negativo indica término de inclusão de elementos. Ao final, mostre a disposição dos elementos no vetor.*/
#include <stdio.h>

int main() {
    int vetor[50];
    int tamanho = 0;
    int i = 0, j = 0, aux;

    printf("Digite os elementos do vetor (negativo para terminar):\n");

    do {
        scanf("%d", &vetor[i]);

        if (vetor[i] >= 0) {
            tamanho++;
            if (tamanho > 50) {
                printf("Tamanho máximo do vetor atingido.\n");
                break;
            }
        }
        i++;
    } while (vetor[i-1] >= 0);

    for(i = 0; i < tamanho - 1; i++){
        for(j = 0; j < tamanho - 1; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
