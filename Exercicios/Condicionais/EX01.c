#include <stdio.h>
/* Escreva um algoritmo que recebe três números e verifica se a soma dos dois primeiros 
é igual ao terceiro número. Caso a condição seja verdadeira, o algoritmo deve imprimir 
"A soma de X e Y é igual a Z". Caso contrário, deve imprimir "A soma de X e Y não é 
igual a Z".*/
int main(){
    int num1, num2, num3, soma;
    printf("Digite o primeiro numero (X): \n");
    scanf("%i", &num1);
    printf("Digite o segundo numero (Y): \n");
    scanf("%i", &num2);
    printf("Digite o terceiro numero (Z): \n");
    scanf("%i", &num3);

    soma = num1 + num2;
    if (soma == num3) {
        printf("A soma de %i + %i eh igual a %i", num1, num2, num3);
    }
    else {
        printf("A soma de %i + %i nao eh igual ao terceiro numero (%i)", num1, num2, num3);
    }         
    return 0;
}