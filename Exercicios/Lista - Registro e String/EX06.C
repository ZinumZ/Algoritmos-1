#include <stdio.h>
#include <string.h>
/* Faça  um  algoritmo  para  ler  uma  string,  representando  um  nome  próprio,  e  gere  uma 
segunda string que represente o mesmo nome abreviado, ou seja, a string deve ser formada 
apenas  pelos  primeiros  caracteres  de  cada  nome  segundo  de  um  ponto.  Lembre-se  de 
manter apenas um espaço em branco entre as abreviaturas. */
int main() {
    char nome[50], abreviado[50];
    int i, j = 0, tamanho;
    
    printf("Digite um nome: ");
    fgets(nome, 50, stdin); // leitura da string
    
    tamanho = strlen(nome); // tamanho da string
    
    for (i = 0; nome[i] != '\0'; i++) {
        if (i == 0 || nome[i - 1] == ' ') { // verificando se é o primeiro caractere ou se é um espaço
            abreviado[j] = nome[i]; // adicionando o caractere à string abreviada
            j++; // incrementando o índice da string abreviada
        }
    }
    abreviado[j] = '\0'; // adicionando o caractere nulo no final da string abreviada
    
    printf("Nome abreviado: %s", abreviado); // exibição da string abreviada
    
    return 0;
}
