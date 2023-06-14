#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o valor do primeiro lado do triângulo: ");
    scanf("%f", &a);

    printf("Digite o valor do segundo lado do triângulo: ");
    scanf("%f", &b);

    printf("Digite o valor do terceiro lado do triângulo: ");
    scanf("%f", &c);

    if (a + b > c && b + c > a && c + a > b) {
        printf("Formam um triângulo\n");
    } else {
        printf("Não formam um triângulo\n");
    }

    return 0;
}