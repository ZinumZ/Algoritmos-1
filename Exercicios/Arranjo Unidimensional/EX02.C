#include <stdio.h>
/*Leia uma lista de números positivos e escreva-os na ordem 
inversa da entrada. A entrada de um número negativo é utilizada 
como flag, que marca o fim do algoritmo. A quantidade máxima 
de números válidos a serem digitados é 100.*/
int main() {
    const int MAX_NUMEROS = 100;
    int numeros[MAX_NUMEROS];
    int i = 0, num;

    // leitura dos números
    printf("Digite uma varios números inteiros positivos (use um número negativo para finalizar):\n");
    while (i < MAX_NUMEROS) {
        scanf("%i", &num);
        if (num < 0) {
            break;
        }
        numeros[i] = num;
        i++;
    }

    // impressão dos números na ordem inversa
    printf("Números na ordem inversa:\n");
    while (i > 0) {
        i--;
        printf("%i\n", numeros[i]);
    }

    return 0;
}
