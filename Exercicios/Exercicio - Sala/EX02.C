#include <stdio.h>

#define TAMANHO 100

int main() {
    float numeros[TAMANHO];
    float media = 0;
    int soma = 0;
    int i = 0;

    // Leitura dos números e cálculo da média
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma = soma + numeros[i];
    }
    media = soma / TAMANHO;

    // Reorganização dos números com base na média
    int indiceMenor = 0;
    int indiceMaior = TAMANHO - 1;

    while (indiceMenor < indiceMaior) {
        if (numeros[indiceMenor] >= media && numeros[indiceMaior] < media) {
            float temp = numeros[indiceMenor];
            numeros[indiceMenor] = numeros[indiceMaior];
            numeros[indiceMaior] = temp;
        }

        if (numeros[indiceMenor] < media)
            indiceMenor++;
        
        if (numeros[indiceMaior] >= media)
            indiceMaior--;
    }

    // Imprime o resultado
    printf("\nNúmeros reorganizados:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");

    return 0;
}
