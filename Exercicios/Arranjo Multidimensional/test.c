#include <stdio.h>

int main(){
    int N, i, anterior = 0, posterior = 0, definitivo = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &N);
    
    for (i = 0; i = N; i++) {
        anterior = anterior + i;
        posterior = anterior + (i+1);
        definitivo = anterior - posterior;
        printf("%i", definitivo);
    }
    return 0;
}