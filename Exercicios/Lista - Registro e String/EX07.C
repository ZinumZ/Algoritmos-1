#include <stdio.h>
/*Faça um algoritmo que leia uma frase, transforme todos os espaços em branco múltiplos
em espaços simples, e reescreva a frase na saída.
Exemplo: entra: “ Um bom teste  de  lógico ” → sai: “ Um bom teste de lógico ”.*/
int main() {
    char frase[100];
    int i;

    printf("Digite uma frase: \n");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ' && frase[i + 1] == ' ') {
            continue; /*O comando continue, ele interrompe a execução atual do loop e passa imediatamente para a próxima iteração. Nesse caso, o continue é acionado para ignorar a impressão do espaço em branco repetido.*/
        }
        printf("%c", frase[i]);
    }

    return 0;
}
