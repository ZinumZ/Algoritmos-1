/*Faça um algoritmo que leia uma frase, transforme todos os espaços em branco múltiplos
em espaços simples, e reescreva a frase na saída.
Exemplo: entra: “ Um bom teste  de  lógico ” → sai: “ Um bom teste de lógico ”.*/
#include <stdio.h>
#include <string.h>

int main(){
    char frase[50];
    int i, j = 0;

    printf("Digite uma frase de até 50 caracteres: \n");
    fgets(frase, 50, stdin);

    for(i = 0; frase[i] != '\0'; i++){
        if(frase[i] == ' ' && frase[i+1] == ' '){
            continue;
        }
        printf("%c", frase[i]);
    }
    return 0;
}