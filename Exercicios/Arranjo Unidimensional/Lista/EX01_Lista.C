#include <stdio.h>
//Facil/Medio
int main() {
    const int TAMANHO = 20;
    int sequencia1[TAMANHO];
    int sequencia2[TAMANHO];
    int i, erros = 0;

    // leitura da primeira sequência
    printf("Digite a primeira sequencia de %d numeros:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &sequencia1[i]);
    }

    // leitura da segunda sequência
    printf("Digite a segunda sequencia de %d numeros:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &sequencia2[i]);
    }

    // comparação das sequências
    for (i = 0; i < TAMANHO; i++) {
        if (sequencia1[i] != sequencia2[i]) {
            erros++;
        }
    }

    // verificação da similaridade
    if (erros <= 2) {
        printf("As sequencias sao similares(Sucesso).\n");
    } else {
        printf("As sequencias sao diferentes(Fracasso).\n");
    }

    return 0;
}
