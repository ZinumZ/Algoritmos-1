#include <stdio.h>

int main(){
    int num, i, j, eh_primo;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%i", &num);

    printf("Numeros primos de 1 até %i: \n", num);

    for (i = 2; i <= num; i++){
        eh_primo = 1;

        for (j = 2; j < i; j++){
            if (i % j == 0){
                eh_primo = 0;
                break;
            }
        }

        if (eh_primo == 1)
            printf("%i ", i);
    }
    return 0;
}