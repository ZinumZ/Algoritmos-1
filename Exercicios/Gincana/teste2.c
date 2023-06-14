/*Faça um algoritmo que leia um vetor de 5 números e organize os números na ordem crescente*/
#include <stdio.h>

int main() {
    int QTD = 5;
    int vetor[QTD];
    int i = 0, j = 0, aux = 0;

    for (i = 0; i < QTD; i++) {
        printf("Digite o %d° numero: \n", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < QTD - 1; i++) {
        for (j = 0; j < QTD - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    printf("Números em ordem crescente:\n");
    for (i = 0; i < QTD; i++) {
        printf("[%d] ", vetor[i]);
    }

    return 0;
}
