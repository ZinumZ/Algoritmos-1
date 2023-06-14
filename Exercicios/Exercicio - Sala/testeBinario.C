#include <stdio.h>

int main() {
    int vetor[] = {2, 5, 7, 12, 18, 20, 27, 31, 39, 42};
    int busca = 18;
    int esquerda = 0;
    int direita = sizeof(vetor) / sizeof(vetor[0]) - 1;
    int meio = 0;
    while (esquerda <= direita) {
        meio = (esquerda + direita) / 2;

        if (vetor[meio] == busca) {
            printf("O valor %d foi encontrado na posição %d.\n", busca, meio);
            return 0;
        }

        if (vetor[meio] < busca)
            esquerda = meio + 1;
        else
            direita = meio - 1;
    }

    printf("O valor %d não foi encontrado.\n", busca);
    return 0;
}
