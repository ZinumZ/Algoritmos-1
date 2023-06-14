#include <stdio.h>
//3 variaveis de repetição??
int main() {
    int MAX = 210;
    int vetor[MAX];
    int i, j, k, duplicado;

    // Leitura dos números do usuário
    printf("Digite até %d números inteiros:\n", MAX);
    for (i = 0; i < MAX; i++) {
        scanf("%d", &vetor[i]);
    }

    // Removendo valores duplicados
    k = MAX;
    for (i = 0; i < k; i++) {
        duplicado = 0;
        for (j = i+1; j < k; j++) {
            if (vetor[j] == vetor[i]) {
                duplicado = 1;
                break;
            }
        }

        if (duplicado) {
            k--;
            for (j = i; j < k; j++) {
                vetor[j] = vetor[j+1];
            }
            i--;
        }
    }

    // Imprime o vetor sem valores duplicados
    printf("Vetor sem valores duplicados:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
