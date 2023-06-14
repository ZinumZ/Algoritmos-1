#include <stdio.h>

int isPrime(int number) {
    if (number <= 1)
        return 0;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int numbers[5];
    int primeCount = 0;

    // Leitura dos números
    printf("Digite 50 números:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Identificação dos números primos e contagem
    for (int i = 0; i < 5; i++) {
        if (isPrime(numbers[i])) {
            primeCount++;
        } else {
            numbers[i] = -1; // Marcador para remover o número
        }
    }

    // Remoção dos números não primos
    int writeIndex = 0;
    for (int readIndex = 0; readIndex < 5; readIndex++) {
        if (numbers[readIndex] != -1) {
            numbers[writeIndex] = numbers[readIndex];
            writeIndex++;
        }
    }

    // Exibição do resultado
    printf("Quantidade de números primos: %d\n", primeCount);
    printf("Números primos: ");
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
