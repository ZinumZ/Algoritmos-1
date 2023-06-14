#include <stdio.h>

/*simule uma calculadora. Devem ser efetuadas as operações aritméticas 
soma, subtração, multiplicação e divisão. O algoritmo deve ler dois valores 
numéricos e a operação a ser efetuada. Após o cálculo, o algoritmo deve 
apresentar a resposta*/

int main()
{
    float num1, num2;
    char operacao;

    printf("====Calculadora====\n");
    printf("Digite a operação desejada[+],[-],[*],[/]: \n");
    scanf(" %c", &operacao);
    printf("Digite o primeiro número: \n");
    scanf("%f", &num1);
    printf("Digite o segundo número: \n");
    scanf("%f", &num2);

    switch (operacao)
    {
        case '+':
            printf("Soma %.2f + %.2f = %.2f", num1, num2, num1+num2);
            break;
        case '-':
            printf("Subtração %.2f - %.2f = %.2f", num1, num2, num1-num2);
            break;
        case '*':
            printf("Produto %.2f * %.2f = %.2f", num1, num2, num1*num2);
            break;
        case '/':
            if (num1 != 0 || num2 != 0)
                printf("Divisão %.2f / %.2f = %.2f", num1, num2, num1/num2);
            else
                printf("Divisão por 0!");   
            break;
        default:
            printf("Operação Inválida!");
            break;            
    }         
    return 0;
}