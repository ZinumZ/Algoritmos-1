#include <stdio.h>
/*Escrever um algoritmo que receba uma quantidade indeterminada de números
positivos e diga quantos deles estão no intervalo de 0 a 25, quantos estão no intervalo
de 26 a 50 e quantos são maiores que 50. O algoritmo deve parar quando o usuário
digitar um número negativo.*/
int main(){
    int num, maior = 0, intervalo025 = 0, intervalo26 = 0;
    printf("Calculando números nos intervalo. Digite um número negativo para parar a operação.\n");
    do {
        printf("Digite um numero inteiro positivo: \n");
        scanf("%i", &num);

        if (num >= 0) {
            if (num <= 25)
                intervalo025++; //intervalo025 = intervalo025 +1
            else if ((num > 25) && (num <= 50))
                intervalo26++;    
            else if (num > 50)
                maior++;    
        }
    } while (num > 0);
    printf("Quantidade de números no intervalo de 0 a 25: %i\n", intervalo025);
    printf("Quantidade de números no intervalo de 26 a 50: %i\n", intervalo26);
    printf("Quantidade de números maiores que 50: %i\n", maior);

    return 0;
}