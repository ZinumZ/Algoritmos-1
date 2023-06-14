#include <stdio.h>
/*Faça um programa que leia um valor N inteiro e positivo, calcule e mostre o valor de 
S, conforme a fórmula a seguir: S = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N! */

int main() {
    int n, i;
    float fatorial = 1.0, soma = 1.0;
    
    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%i", &n);
    
    for (i = 1; i <= n; i++) {
        fatorial = fatorial * i;
        soma = soma + 1.0 / fatorial;
    }
    
    printf("O valor de S é: %f\n", soma);
    
    return 0;
}
