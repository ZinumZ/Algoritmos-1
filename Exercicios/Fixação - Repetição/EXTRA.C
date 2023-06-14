#include <stdio.h>
/*leia vários números inteiros positivos e imprima o produto dos
números ímpares e a soma dos números pares. Pare quando a
entrada for um número negativo.*/

int main(){
    int num, produto = 1, soma = 0;

    while (num > 0) {
        printf("Digite um numero inteiro positivo: \n");
        scanf("%i", &num);

        if (num > 0){
            if (num % 2 == 0){
                soma += num;
            } else {
                produto *= num;
            }
        }
    }
    printf("Produto dos numeros impares: %i \n", produto);
    printf("Soma dos numeros pares: %i \n", soma);
}