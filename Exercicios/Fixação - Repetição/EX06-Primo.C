#include <stdio.h>

int main() {
    int num, i, j, eh_primo;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    printf("Números primos entre 1 e %d: ", num);

    // loop de 1 até num
    for (i = 2; i <= num; i++) {
        eh_primo = 1; // assume que é primo

        // loop para verificar se i é primo
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                eh_primo = 0; // não é primo
                break;
            }
        }

        // se i é primo, imprime na tela
        if (eh_primo == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
