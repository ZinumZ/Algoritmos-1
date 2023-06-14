#include <stdio.h>
/*(3) crie uma matriz 3x3 preenchida com números inteiros. Em seguida,
exiba na tela a soma de cada linha da matriz.*/

int main() {
    int matriz[3][3];
    int soma_linha = 0, i, j;

    // preenche a matriz com valores digitados pelo usuário
    printf("Digite os valores para a matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // calcula a soma de cada linha e exibe na tela
    printf("\nSoma das linhas da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma_linha = soma_linha + matriz[i][j];
        }
        printf("Linha %d: %d\n", i+1, soma_linha);
    }

    return 0;
}
