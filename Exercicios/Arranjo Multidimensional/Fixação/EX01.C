#include <stdio.h>

/*(1) preencha uma matriz 3x3 com números inteiros digitados pelo
usuário e, em seguida, exiba o maior número e a posição (linha e coluna)
em que ele se encontra na matriz.*/
int main(){
    int matriz[3][3]; //Linha x Coluna
    int i, j, maior = 0, linha_maior = 0, coluna_maior = 0;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("[%d]x[%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    } //Preenchendo a matriz

    // encontrando o maior número na matriz e sua posição
    for (i = 0; i < 3; i++){
        for(j = 0 ; j < 3; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("Maior número: %d\n", maior);
    printf("Posicao: (%d, %d)", linha_maior+1, coluna_maior+1);
    
    return 0;
}

