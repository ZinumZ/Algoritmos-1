/*Faça um algoritmo que leia 50 números e armazene num vetor. Indique destes números lidos, quantos são números primo. Depois remova os números não primos do vetor*/
#include <stdio.h>

int main() {
    const int QTD = 5;
    int vetor[QTD];
    int i = 0, j = 0, contador = 0, primo = 0;

    for (i = 0; i < QTD; i++) {
        printf("Digite o %d° numero: \n", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Numeros primos: \n");
    for (i = 0; i < QTD; i++) {
        primo = 0;
        for (j = 2; j < vetor[i]; j++) {
            if (vetor[i] % j == 0) {
                primo++;
            }
        }
        if (primo == 0) {
            printf("[%d] ", vetor[i]);
            contador++;
        }
    }

    printf("Quantidade de numeros primos: %d\n", contador);
    return 0;
}
