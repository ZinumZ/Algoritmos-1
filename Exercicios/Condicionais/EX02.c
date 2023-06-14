#include <stdio.h>
/*Escreva um algoritmo que leia um número inteiro e verifique se ele é múltiplo de 3 e 
de 5 ao mesmo tempo.*/
/*PROVA*/
/*PROVA*/
/*PROVA*/
/*PROVA*/
int main(){
    int num;
    printf("====Verificador de multiplos de 3 e 5====\n");
    printf("Digite um numero:");
    scanf("%i", &num);

    if ((num % 3 == 0) && (num % 5 == 0)) {
        printf("O numero %i eh multiplo de 3 e 5", num);
    }
    else {
        printf("O numero %i nao eh multiplo de 3 e 5", num);
    }
    return 0;        
}