#include <stdio.h>

int main() {
    int numero, soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %iº número: ", i + 1);
        scanf("%i", &numero);
        soma += numero;
    }

    printf("A soma dos 5 números é: %i\n", soma);

    return 0;
}
