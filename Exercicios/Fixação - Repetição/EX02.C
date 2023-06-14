#include <stdio.h>
/*Ler a idade de várias pessoas e calcular a média das idades. Encerrar a execução
quando um valor negativo for digitado.*/
int main(){
    int soma = 0, idade = 0, quantidade = 0;
    float media;
    printf("Calculo de média das idades:\n");
    printf("Digite um número negativo para parar a operação.\n");

    while (idade >= 0){
        printf("Idade da %i° pessoa: \n", quantidade+1);
        scanf("%i", &idade);

        if (idade >= 0){
            soma = soma + idade;
            quantidade++;
        }
    }

    printf("Soma das idades: %i\n", soma); //teste
    media = soma / quantidade;
    printf("Media das idades: %.2f", media);

    return 0;
}