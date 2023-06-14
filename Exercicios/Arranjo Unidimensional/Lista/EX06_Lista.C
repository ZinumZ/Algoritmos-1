#include <stdio.h>

int main() {
    int MAX = 100;
    int vetor[MAX];
    int i, j, aux;

    for (i = 0; i < MAX; i++) {
        printf("Digite um numero: ");
        scanf("%d", &aux);

        j = i;
        while (j > 0 && aux < vetor[j-1]) {
            vetor[j] = vetor[j-1];
            j--;
        }

        vetor[j] = aux;
    }

    printf("Vetor ordenado:\n");
    for (i = 0; i < MAX; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
