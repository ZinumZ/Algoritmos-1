#include <stdio.h>
#include <string.h>
/* Faça um algoritmo para ler uma string e verificar se cada caracter nela existente é, 
alternadamente (comparação em pares), maior e menor que o anterior, escrevendo 
“Sucesso” em caso afirmativo, e “Falha” caso contrário. A string tanto pode começar por 
uma sequência maior-menor quanto por uma menor-maior.
Exemplo: entrada: “KBLDZJMFGAOHIEWVXE” → saída: “Sucesso”*/

int main() {
    int i; 
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);
    int successo = 1; // flag para verificar se a sequência é válida

    for (i = 1; i < strlen(str); i++) {  //lembrando que strlen verifica o tamanho da string
        if ((str[i] > str[i - 1]) == (str[i] > str[i + 1])) {
            successo = 0;
            break;
        }
    }

    if (successo) { //sucesso = 1
        printf("Sucesso\n");
    } else { //sucesso = 0
        printf("Falha\n");
    }

    return 0;
}
