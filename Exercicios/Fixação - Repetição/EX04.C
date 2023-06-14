#include <stdio.h>
/*Ler um número real. Depois, ficar multiplicando ele por dois e mostrando o resultado
enquanto ele for menor que 2000.
*/
int main(){
    float num;
    printf("Digite um numero real: \n");
    scanf("%f", &num);
    
    while (num < 2000){
        printf("%.2f\n", num);
        num = num * 2; // é o mesmo que num = num *2;
    }
    return 0;
}