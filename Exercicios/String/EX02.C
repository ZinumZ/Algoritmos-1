#include <stdio.h>
#include <string.h>
/*Dado um literal origem, a ser lido do usuário, construa um literal 
destino que não contenha qualquer ocorrência de um determinado 
caractere x, também lido do usuário. Ao final, escreva o conteúdo da 
variável gerada.
Exemplo:
origem = Instituto da Computação
x = t
destino = Insiuo da Compuação*/
int main() {
    char origem[100];
    char destino[100];
    char x;
    int i = 0, j = 0;

    printf("Digite a string de origem: ");
    fgets(origem, 100, stdin);

    printf("Digite o caractere que deseja remover: ");
    scanf("%c", &x);

    for ( i = 0; origem[i] != '\0'; i++) {
        if (origem[i] != x) {
            destino[j] = origem[i];
            j++;
        }
    }
    destino[j] = '\0'; //caracter final

    strcpy(origem, destino); //copia

    printf("String gerada: %s", origem);

    return 0;
}
