#include <stdio.h>
#include <string.h>
/*Faça um algoritmo para ler uma frase, montar uma segunda frase que não tenha nenhum 
dos espaços em branco e escrevê-la na saída. */

int main() {
    char frase[100], nova_frase[100];
    int i = 0, j = 0;
    
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin); // lê a frase do usuário
    
    while (frase[i] != '\0') { // \0 fica no final da frase. Enquanto frase[i] for diferente de \0
        if (frase[i] != ' ') { // se o caractere não for um espaço em branco
            nova_frase[j] = frase[i]; // adiciona o caractere na nova frase
            j++;
        }
        i++;
    }
    
    nova_frase[j] = '\0'; // adiciona o caractere nulo ao final da nova frase
    
    printf("Nova frase sem espaços em branco: %s\n", nova_frase);
    
    return 0;
}