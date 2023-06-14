#include <stdio.h>
#include <string.h>
/* Escreva um algoritmo que receba duas strings do usuário e verifique se a segunda string é 
um  anagrama  da  primeira  string.  Uma  palavra  A  é  um  anagrama  de  outra  palavra  B  se 
podemos  transformar  a  palavra  A  na  palavra  B  apenas  trocando  de  posição  as  letras  da 
palavra A. Por exemplo, "iracema" é um anagrama de "america", e "estudo" é um anagrama 
de "duetos". */


#define MAX 100

int main() {
    char str1[MAX], str2[MAX];
    int i;

    printf("Digite a primeira string: ");
    fgets(str1, MAX, stdin);

    printf("Digite a segunda string: ");
    fgets(str2, MAX, stdin);

    // converte as strings para letras minúsculas
    strlwr(str1);
    strlwr(str2);

    // ordena as letras das strings
    qsort(str1, strlen(str1) - 1, sizeof(char), strcmp);
    qsort(str2, strlen(str2) - 1, sizeof(char), strcmp);

    // verifica se as strings são iguais
    if (strcmp(str1, str2) == 0) {
        printf("As strings são anagramas.\n");
    } else {
        printf("As strings não são anagramas.\n");
    }

    return 0;
}
