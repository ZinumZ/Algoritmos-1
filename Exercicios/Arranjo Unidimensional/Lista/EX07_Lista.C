#include <stdio.h>
//Pesquisar se há maneira mais facil de resolver

int main() {
    int TAM = 29;
    int vetor[TAM];
    int i, inicio, fim, max_inicio, max_fim;
    int soma_atual, soma_maxima;

    // Leitura dos números do usuário
    printf("Digite ate %d numeros inteiros:\n", TAM);
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]);
    }

    // Encontrando o subvetor de maior soma contígua
    inicio = fim = max_inicio = 0;
    soma_atual = soma_maxima = vetor[0];

    for (i = 1; i < TAM; i++) {
        if (vetor[i] > soma_atual + vetor[i]) {
            inicio = i;
            soma_atual = vetor[i];
        } else {
            soma_atual += vetor[i];
        }

        if (soma_atual > soma_maxima) {
            soma_maxima = soma_atual;
            max_inicio = inicio;
            max_fim = i;
        }
    }

    // Imprimindo o subvetor de maior soma contígua
    printf("Subvetor de maior soma contigua:\n");
    for (i = max_inicio; i <= max_fim; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
