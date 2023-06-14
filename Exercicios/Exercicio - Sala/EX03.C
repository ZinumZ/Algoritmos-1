//Escreva um algoritmo que receba uma cadeia de caracteres do usuario e imprima a mesma sem as vogais
#include <stdio.h>

int main() {
    char texto[100];
    char textoSemVogais[100];
    int i, j = 0;

    printf("Digite uma cadeia de caracteres: ");
    fgets(texto, sizeof(texto), stdin);

    for (i = 0; texto[i] != '\0'; i++) {  //Aqui vai ler até o caracter nulo
        if (texto[i] != 'a' && texto[i] != 'A' &&
            texto[i] != 'e' && texto[i] != 'E' &&
            texto[i] != 'i' && texto[i] != 'I' &&
            texto[i] != 'o' && texto[i] != 'O' &&
            texto[i] != 'u' && texto[i] != 'U') {
            textoSemVogais[j++] = texto[i];
        }
    }
    textoSemVogais[j] = '\0'; //caracter nulo obrigatório

    printf("Texto sem vogais: %s\n", textoSemVogais);

    return 0;
}
