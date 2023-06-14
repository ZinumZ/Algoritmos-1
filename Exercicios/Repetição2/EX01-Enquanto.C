#include <stdio.h>

int main() {
    float S = 0;
    int i = 1;
    
    while (i <= 50) {
        S = S + (float)(2*i - 1) / i; //(float) é necessário para fazer divisão de ponto flutuante
        i++;
    }
    printf("O valor de S é: %.2f\n", S);
    return 0;
}
