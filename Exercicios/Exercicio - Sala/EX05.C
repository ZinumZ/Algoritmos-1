#include <stdio.h>
/*Leia uma matriz 10x10 e escreva a localização (linha e coluna) do maior valor*/
int main() {
    int matriz[10][10];
    int i, j, maiorValorL = 0, maiorValorC = 0;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("[%i]x[%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (matriz[i][j] > matriz[maiorValorL][maiorValorC]) { //MaiorValorLinha, MaiorValorColuna
                maiorValorL = i;
                maiorValorC = j;
            }
        }
    }
    printf("O maior valor está na linha %i coluna %i", maiorValorL, maiorValorC);

    return 0;
}
