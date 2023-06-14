/*Faça um algoritmo que leia uma palavra com tamanho maximo de 10 caracteres e informe se a palavra é um palíndromo*/
#include <stdio.h>
#include <string.h>

int main(){

    char palavra[10];
    int i, tam, diferentes = 0;

    printf("Digite uma palavra de até 10 caracteres: ");
    scanf("%s", palavra);

    // ------- PRIMEIRA VERSÃO --------------------
    tam = strlen(palavra);
    tam--;// último índice válido da string (vetor)
    i = 0; // primeiro índice válido da string (vetor)

    while(tam >= i){
        if(palavra[i] != palavra[tam]) // conta as letras diferentes
            diferentes++;
        i++;
        tam--;
    }

    if (diferentes == 0)
        printf("\nEh palindroma...\n");
    else
        printf("\nNao eh palindroma...\n");

    return 0;
}
