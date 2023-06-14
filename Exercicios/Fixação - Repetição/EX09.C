#include <stdio.h>
/*Fazer um programa que calcule e imprima o resultado da soma: 3^0 + 3^1 + 3^2 + ... + 3^N (Sendo que N é um valor fornecido pelo usuário).*/
int main() {
    int n, i, expoente = 1, soma = 0;
    printf("Digite o valor de N: ");
    scanf("%i", &n);
    
    for (i = 0; i <= n; i++) {
        soma = soma + expoente;
        expoente = expoente * 3;
    }
    
    printf("O resultado da soma é: %i\n", soma);
    return 0;
}
