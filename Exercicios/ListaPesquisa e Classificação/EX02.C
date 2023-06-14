/*Considere  um  vetor  com  75  números  inteiros.  Faça  um  algoritmo  que  o  ordene 
utilizando a classificação por seleção. Depois, peça ao usuário um valor, e exclua um 
elemento do vetor tal que o vetor ainda permaneça ordenado ao final do algoritmo.*/
#include <stdio.h>
//PESQUISAR SE TEM COMO SIMPLIFICAR/OTIMIZAR
int main() {
    int QTD = 75;
    int vetor[QTD];
    int i, j, valor, encontrado = 0;

    // Preencher o vetor com números inteiros
    for (i = 0; i < QTD; i++) {
        printf("Digite um numero inteiro para a posicao %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Ordenar o vetor utilizando o algoritmo de seleção
    for (i = 0; i < QTD - 1; i++) {
        int minIndex = i;

        for (j = i + 1; j < QTD; j++) {
            if (vetor[j] < vetor[minIndex])
                minIndex = j;
        }

        if (minIndex != i) {
            int temp = vetor[minIndex];
            vetor[minIndex] = vetor[i];
            vetor[i] = temp;
        }
    }

    // Exibir o vetor ordenado
    printf("Vetor ordenado: ");
    for (i = 0; i < QTD; i++) {
        printf("%d ", vetor[i]);
    }

    // Solicitar ao usuário um valor a ser removido
    printf("\nDigite o valor a ser removido: ");
    scanf("%d", &valor);

    // Encontrar a posição do valor no vetor
    for (i = 0; i < QTD; i++) {
        if (vetor[i] == valor) {
            encontrado = 1;
            break;
        }
    }

    // Remover o valor do vetor e ajustar os elementos restantes
    if (encontrado) {
        for (j = i; j < QTD; j++) {
            vetor[j] = vetor[j + 1];
        }

        // Exibir o vetor atualizado
        printf("Vetor atualizado: ");
        for (i = 0; i < QTD - 1; i++) {
            printf("%d ", vetor[i]);
        }
    } else {
        printf("Valor nao encontrado no vetor.\n");
    }

    return 0;
}
