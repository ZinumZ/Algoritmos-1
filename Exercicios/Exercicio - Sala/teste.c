#include <stdio.h>

int main() {
    float numeros[10];
    float soma = 0.0;
    float media, aux = 0;
    int i, j;

    // Leitura dos números e cálculo da soma
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    // Cálculo da média
    media = soma / 10.0;

    // Rearranjo dos números no vetor
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (numeros[j] < media){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;                    
            }
        }
    }

    // Impressão do vetor rearranjado
    printf("Vetor rearranjado:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }

    return 0;
}
