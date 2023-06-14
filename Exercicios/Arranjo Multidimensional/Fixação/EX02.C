#include <stdio.h>
/*(2) preencha uma matriz 6x4 com números inteiros, calcule e mostre
quantos elementos dessa matriz são maiores que 15, e em seguida,
monte uma segunda matriz com os elementos diferentes de 15. No
lugar do número 15 da segunda matriz coloque -10.*/

int main(){
    int matriz[6][4];
    int matriz2[6][4];
    int i, j, num_maior15 = 0;

    for (i = 0; i < 6; i++){
        for (j = 0; j < 4; j++){
            printf("[%d]x[%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 15)
                num_maior15++;
        }
    }
    printf("\nA matriz 1 possui %d elemento(s) maiores que 15.\n", num_maior15);

    // preenche matriz2 com valores diferentes de 15 e -10 no lugar de 15
    printf("\nMatriz 2:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] != 15) {
                matriz2[i][j] = matriz[i][j];
            } else {
                matriz2[i][j] = -10;
            }

            printf("[%d] ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}