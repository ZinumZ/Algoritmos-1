/*Faça um algoritmo que leia uma lista de 100 números reais, calcula a sua média e a inclua no vetor. Em seguida, faça com que todos os números menores que a média passe a ocupar as posições anteriores e os números maiores as posições posteriores.*/
#include <stdio.h>

int main() {
    int QTD = 10;
    float vetor[QTD];
    float soma = 0, media = 0, aux = 0;
    int i = 0, j;

    for(i = 0; i < QTD; i++){
        printf("Digite o %d° numero: \n", i);
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }
    media = soma / QTD;
    
    for (i = 0; i < QTD - 1; i++) {
        for (j = 0; j < QTD - 1; j++) {
            if (vetor[j] < media) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    
    for (i = 0; i < QTD - 1; i++) {
        for (j = 0; j < QTD - 1; j++) {
            if (vetor[j] > media) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    for(i = 0; i < QTD; i++){
        printf("[%f] ", vetor[i]);
    }
    return 0;
}
