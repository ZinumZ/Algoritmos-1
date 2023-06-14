#include <stdio.h>
int main() {
    int i = 1;
    int numero, fatorial = 1;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("O fatorial não está definido para números negativos.\n");
        return 0;
    }
    
    for (i = 1; i <= numero; i++) {
        fatorial *= i;
    }
    
    printf("O fatorial de %d é: %d\n", numero, fatorial);
    
    return 0;
}