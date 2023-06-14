#include <stdio.h>
/*Uma loja fornece 5% de desconto para funcionários e 10% de desconto para clientes
especiais. Construa um programa que calcule o valor total a ser pago por uma pessoa
em uma compra. O programa deve ler o valor total da compra efetuada e um código
que identifique se o comprador é um cliente comum ou um dos dois tipos de clientes
que recebem desconto. No final, o programa deve informar o valor a pagar e o
desconto que foi dado, se for o caso.
*/

int main(){
    int codigo;
    float valor, desconto;
    printf("Digite o valor total da compra \nR$");
    scanf("%f", &valor);
    printf("\n[1] Funcionario, \n[2] Cliente especial, \n[3] Cliente comum \nDigite:");
    scanf("%i", &codigo);
    
    if (codigo == 1) {
        desconto = valor * 0.95;
        printf("Você é funcionário. A compra de R$%.2f irá custar R$%2.f.",valor, desconto);
    }
    else if (codigo == 2) {
        desconto = valor * 0.90;
        printf("Você é cliente especial. A compra de R$%.2f irá custar R$%2.f.",valor, desconto);
    } else {
        printf("Você é cliente comum. A compra de R$%.2f não terá desconto.", valor);
    }
    return 0;
}