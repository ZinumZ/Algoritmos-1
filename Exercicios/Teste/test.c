#include <stdio.h>

int main() {
    int dec;
    int bin1, bin2;

    printf("Digite um numero decimal de 2 digitos: ");
    scanf("%i", &dec);

    bin1 = dec / 2;
    bin2 = dec % 2;

    printf("O valor em binario é: %i%i", bin1, bin2);

    return 0;
}
/*Errado*/
