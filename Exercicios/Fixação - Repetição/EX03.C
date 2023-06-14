#include <stdio.h>
/*Fazer um algoritmo que sempre recebe números ímpares. Caso receba um número
par, sua execução deverá ser encerrada. */
int main(){
    int num;
    do {
        printf("Digite um numero inteiro impar: \n");
        scanf("%i", &num);

    } while (num % 2 != 0);
    printf("Você digitou um número par [%i]\n", num);
    
    return 0;
}