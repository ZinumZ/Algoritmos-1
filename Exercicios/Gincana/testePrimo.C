/*Leia um numero e digite todos os numeros primos do 2 até o numero digitado*/
#include <stdio.h>
 
int main() {
    int i, j, primo, num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    for(i = 2; i <= num; i++){
        primo = 0;
        for(j = 2; j < i; j++){
            if(i % j == 0){
                primo++;
            }
        }

        if (primo == 0){
            printf("[%d] ", i);
        }
    }

    return 0;
}
