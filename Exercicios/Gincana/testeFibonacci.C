#include <stdio.h>

int main() {
    int n, i;
    int primeiro = 0;
    int segundo = 1;
    int fibonacci;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: O número deve ser inteiro não negativo.\n");
        return 0;
    }

    if (n == 0) {
        fibonacci = primeiro;
    } else if (n == 1) {
        fibonacci = segundo;
    } else {
        for (i = 2; i <= n; i++) {
            fibonacci = primeiro + segundo; // = 0 + 1
            primeiro = segundo; // = 1
            segundo = fibonacci; //  = 1
        }
    }

    printf("O termo %d da sequência de Fibonacci é: %d\n", n, fibonacci);

    return 0;
}
