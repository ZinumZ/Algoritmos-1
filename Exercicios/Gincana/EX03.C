/*Faça um algoritmo que leia os elementos (numeros inteiros) de uma matriz inteira 5x5 e escreva os elementos no qual a soma das posições seja ímpar (12,21,23,32)*/

#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;

    // Lendo os elementos da matriz
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Escrevendo os elementos com soma das posições ímpar
    printf("\nElementos com soma das posições ímpar:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if ((i + j) % 2 != 0) {
                printf("%d ", matriz[i][j]);
            }
        }
    }

    return 0;
}
