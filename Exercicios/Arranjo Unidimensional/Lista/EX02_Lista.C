#include <stdio.h>
//Trabalhoso
int main() {
    int TAM = 115;
    int numeros[TAM], i, maior, segundoMaior, qtdDistintos = TAM;
    // lê 115 números inteiros e armazena no vetor
    for (i = 0; i < TAM; i++) {
        printf("Digite o %i°. número: ", i+1);
        scanf("%i", &numeros[i]);
    }
    // encontrando o maior valor
    if (numeros[0] > numeros[1]) {
        maior = numeros[0];
        segundoMaior = numeros[1];
    
    //encontrando o segundo maior valor
    } else {
        maior = numeros[1];
        segundoMaior = numeros[0];
    }

    for (i = 2; i < TAM; i++) {
        if (numeros[i] > maior) {
            segundoMaior = maior;
            maior = numeros[i];
        } else if (numeros[i] > segundoMaior && numeros[i] < maior) {
            segundoMaior = numeros[i];
        }
    }
    printf("O segundo maior valor é %i.\n", segundoMaior);

    // contando a quantidade de valores distintos
    for (i = 0; i < TAM-1; i++) {
        for (int j = i+1; j < TAM; j++) {
            if (numeros[i] == numeros[j]) {
                qtdDistintos--;
                break;
            }
        }
    }
    printf("A quantidade de valores distintos é %i.\n", qtdDistintos);
    return 0;
}

