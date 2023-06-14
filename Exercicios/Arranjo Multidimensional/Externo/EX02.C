#include <stdio.h>

int main() {
  int linha = 3, coluna = 3, i, j;
  int matriz[linha][coluna];
  
  // Laço for para preencher a matriz
  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      printf("Insira o valor da posição [%d]x[%d]: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }
  
  // Imprimir a matriz para verificar se foi preenchida corretamente
  printf("\nMatriz preenchida:\n");
  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
