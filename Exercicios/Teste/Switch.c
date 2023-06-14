#include <stdio.h>

int main()
{
float num1,num2;
char operador;

printf ("\nDigite o operador [+],[-],[*],[/]: "); 
scanf ("%c", &operador);
printf ("\nDigite o operando 1: "); 
scanf ("%f", &num1);
printf ("\nDigite o operando 2: "); 
scanf ("%f", &num2);

switch (operador)
{
    case '+':
        printf ("\n\n%.2f + %.2f = %.2f", num1, num2, num1+num2);
    break;

    case '-':
        printf ("\n\n%.2f - %.2f = %.2f", num1, num2, num1-num2);
    break;

    case '*':
        printf ("\n\n%.2f * %.2f = %.2f", num1, num2, num1*num2);
    break;

    case '/':
        printf ("\n\n%.2f / %.2f = %.2f", num1, num2, num1/num2);
    break;

    default:    
        printf ("\nOperacao invalida.\n");
}
return 0;
}