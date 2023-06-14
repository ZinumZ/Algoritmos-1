#include <stdio.h>
/*Escreva um algoritmo que recebe o horário atual (em horas), a indicação se é criança 
ou adulto e verifica se a pessoa deve estar acordada ou dormindo. Ambos podem estar 
acordadas desde às 6h, a criança deve estar dormindo a partir das 20h e o adulto a 
partir das 22h. O algoritmo deve imprimir "Você deve estar acordado". Caso contrário, 
deve imprimir "Você deve estar dormindo"*/

int main() {
    int horaAtual;
    char tipoPessoa;

    printf("Informe o horário atual (em horas): ");
    scanf("%d", &horaAtual);

    printf("Informe o tipo de pessoa ('C' para criança ou 'A' para adulto): ");
    scanf(" %c", &tipoPessoa);

    if (horaAtual >= 6 && ((tipoPessoa == 'C' && horaAtual < 20) || (tipoPessoa == 'A' && horaAtual < 22))) {
        printf("Você deve estar acordado.\n");
    } else {
        printf("Você deve estar dormindo.\n");
    }

    return 0;
}