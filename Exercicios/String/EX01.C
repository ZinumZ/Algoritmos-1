#include <stdio.h>
#include <string.h>
/*leia uma palavra do usuário e diga se ela é ou não palíndromo. Uma 
palavra é dita palíndromo se ela puder ser lida da mesma forma nos dois 
sentidos de escrita. Exemplos de palíndromos : mirim, mussum, arara, 
salas, osso.*/

int main() {
    char palavra[100], invertida[100];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    strcpy(invertida, palavra); //strcpy copia a string "palavra" e cola na "invertida"
    strrev(invertida); //strrev inverte
    
    if (strcmp(palavra, invertida) == 0) { //strcmp compara
        printf("%s é um palíndromo.\n", palavra);
    } else {
        printf("%s não é um palíndromo.\n", palavra);
    }
    
    return 0;
}
