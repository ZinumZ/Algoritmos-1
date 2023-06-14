/*Implemente um algoritmo que preenche um vetor com N números inteiros (máximo 
100 elementos) e em seguida classifique o vetor em ordem decrescente utilizando o 
método da bolha. Ao final, encontre a posição de um número informado pelo usuário 
utilizando pesquisa binária.*/
#include <stdio.h>
//Pesquisar mais sobre pesquisa binária...

int main(){
    int QTD = 100;
    int vetor[QTD];
    int i = 0, j = 0, n = 0, aux = 0;
    int busca = 0; int esquerda = 0; int direita = n - 1; int posicao = -1; int meio;

    printf("Digite o número de elementos (N): ");
    scanf("%d", &n);

    printf("Digite os %d números inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    // Ordem decrescente com método da bolha
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (vetor[j] < vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    printf("\nVetor classificado em ordem decrescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\nDigite o número a ser pesquisado: ");
    scanf("%d", &busca);

    while (esquerda <= direita) {
        meio = (esquerda + direita) / 2;

        if (vetor[meio] == busca) {
            posicao = meio;
            break;
        }

        if (vetor[meio] > busca) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }

    if (posicao != -1) {
        printf("O número %d foi encontrado na posição %d.\n", busca, posicao);
    } else {
        printf("O número %d não foi encontrado no vetor.\n", busca);
    }

    return 0;
}