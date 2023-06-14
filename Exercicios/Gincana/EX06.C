/*Faça um algoritmo para ler 100 valores numéricos inteiros. Depois leia um número, e realize uma pesquisa sequencial e informe a posição em que se encontra o valor buscado. Caso esse valor não seja encontrado, informe a posição -1*/
#include <stdio.h>

int main(){
    int QTD = 5;
    int vetor[QTD];
    int i = 0, pesquisa = 0, num;

    for (i = 0; i < QTD; i++){
        printf("Digite o %d° numero \n", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o numero desejado: \n");
    scanf("%d", &pesquisa);

    i = 0;
    while (i < QTD){
        if (pesquisa == vetor[i]){
            num = i;
            break;
        }
        i++;
    }

    if (pesquisa != vetor[i])
        printf("-1");
    else
        printf("Valor encontrado!\nPosicao: %d", num+1);

    return 0;    
}

