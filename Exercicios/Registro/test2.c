#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i, tam;
    int palindromo = 1; // considera que a palavra é um palíndromo

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tam = strlen(palavra);

    for (i = 0; i < tam / 2; i++) {
        if (palavra[i] != palavra[tam - i - 1]) {
            palindromo = 0; // não é um palíndromo
            break;
        }
    }

    if (palindromo) {
        printf("%s é um palíndromo.\n", palavra);
    } else {
        printf("%s não é um palíndromo.\n", palavra);
    }

    return 0;
}
