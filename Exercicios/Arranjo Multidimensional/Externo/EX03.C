#include <stdio.h>
//Faça um programa que leia os valores de uma matriz 3x3 e mostre o elemento q o usuario desejar ver
int main() {
    int matriz[3][3];
    int linha, coluna;

  // leitura dos valores da matriz
    printf("Digite os valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
    }
  }

  // leitura da posição desejada
    printf("\nDigite a linha desejada (0 a 2): ");
    scanf("%d", &linha);
    printf("Digite a coluna desejada (0 a 2): ");
    scanf("%d", &coluna);

  // exibição do elemento
    printf("\nO elemento da linha %d e coluna %d eh: %d\n", linha, coluna, matriz[linha][coluna]);

    return 0;
}
