#include <stdio.h>

int main() {
    int n, i, primeiro = 0, segundo = 1, proximo;

    printf("Digite o número de termos desejado: ");
    scanf("%i", &n);

    printf("Sequência de Fibonacci com %i termos:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            proximo = i;
        } else {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("%i ", proximo);
    }

    return 0;
}
