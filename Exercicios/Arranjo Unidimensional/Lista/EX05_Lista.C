#include <stdio.h>
//Dificil
int main(){
    int i = 0, j = 0, MAX = 100;
    float lista[MAX], num, media = 0, aux;

    for (i = 0; i < MAX; i++){
        printf("Digite o valor do %i° numero\n", i+1);
        scanf("%f", &lista[i]);
        media = media + lista[i];
    }
    media = media / MAX;

    printf("Media: %.2f\n", media);
    // Ordenação dos números em relação à média
    for (int i = 0, j = MAX - 1; i < j;) {
        if (lista[i] <= media) {
            i++;
        } else if (lista[j] > media) {
            j--;
        } else {
            aux = lista[i];
            lista[i] = lista[j];
            lista[j] = aux;
        }
    }

    // Exibição dos números em relação à média
    printf("\nNúmeros menores ou iguais à média:\n");
    for (int i = 0; lista[i] <= media; i++) {
        printf("%.2f ", lista[i]);
    }

    printf("\nNúmeros maiores que a média:\n");
    for (int i = MAX - 1; lista[i] > media; i--) {
        printf("%.2f ", lista[i]);
    }

    return 0;
}