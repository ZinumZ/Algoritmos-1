#include <stdio.h>

int main() {
    int x, n, i, aux;
    /*Fazer um programa que leia um número X e um número N. Mostrar na tela os valores da tabuada de multiplicação de X para os valores de 0 a N. Exemplo: Tabuada de 5, de 0 a 7: Mostrar: 0, 5, 10, 15, 20, 25, 30, 35.*/
    printf("Digite um número X: ");
    scanf("%i", &x);
    
    printf("Digite um número N: ");
    scanf("%i", &n);
    
    printf("Tabuada do %i, de 0 a %i:\n", x, n);
    for (i = 0; i <= n; i++) {
        aux = x * i;
        printf("%i ", aux);
    }
    
    return 0;
}
