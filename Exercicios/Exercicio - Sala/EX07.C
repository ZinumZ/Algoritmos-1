/*Implemente um algoritmo que preenche um vetor com N números inteiros (máximo 100 elementos) e em seguida classifique o vetor em ordem decrescente utilizando o método da bolha. Ao final, encontre a posição de um número informado pelo usuário utilizando pesquisa binária*/
#include <stdio.h>

int main() {
    int arr[5];
    int n, i, j, temp, key, pos;

    printf("Informe o número de elementos (máximo 100): ");
    scanf("%d", &n);

    printf("Informe os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ordenação pelo método da bolha
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Vetor ordenado em ordem decrescente: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Informe o número a ser pesquisado: ");
    scanf("%d", &key);

    // Pesquisa binária
    int low = 0;
    int high = n - 1;
    pos = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            pos = mid;
            break;
        } else if (arr[mid] < key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (pos == -1) {
        printf("Número não encontrado no vetor.\n");
    } else {
        printf("Número encontrado na posição %d do vetor.\n", pos + 1);
    }

    return 0;
}
