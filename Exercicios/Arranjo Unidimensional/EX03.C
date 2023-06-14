#include <stdio.h>
/*Crie dois vetores de números inteiros de mesmo tamanho (e.g. 
5), insira valores e retorne um terceiro vetor com a soma dos 
valores correspondentes nos dois vetores recebidos*/
int main() {
    const int TAMANHO = 5;
    int vetor1[TAMANHO];
    int vetor2[TAMANHO];
    int vetor3[TAMANHO];
    int i;

    // leitura dos valores do vetor1
    printf("Digite os valores do primeiro vetor:\n");
    for (i = 0; i < TAMANHO; i++) {
        scanf("%i", &vetor1[i]);
    }

    // leitura dos valores do vetor2
    printf("Digite os valores do segundo vetor:\n");
    for (i = 0; i < TAMANHO; i++) {
        scanf("%i", &vetor2[i]);
    }

    // soma dos valores dos dois vetores
    for (i = 0; i < TAMANHO; i++) {
        vetor3[i] = vetor1[i] + vetor2[i];
    }

    // impressão do resultado
    printf("Resultado da soma dos vetores:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("[%i] ", vetor3[i]);
    }
    printf("\n");

    return 0;
}
