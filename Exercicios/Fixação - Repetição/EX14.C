#include <stdio.h>
/*14. Desenvolver um algoritmo que, a partir da tela com o menu abaixo, efetue conversões
de temperaturas:
Conversões Online
1. Celsius para Fahrenheit 
2. Fahrenheit para Celsius 
3. Celsius para Kelvin 
4. Kelvin para Celsius
5. Encerrar programa Informe a opção desejada:
As fórmulas de conversão entre temperaturas são:
C ← (F–32)/1,8 
F ← C×1,8+32 
C ← K–273,15 
K ← C+273,15*/

int main() {
    int operacao;
    float C,F,K;

    printf("====CONVERSAO DE TEMPERATURA====\n");
    printf("\n1. Celsius para Fahrenheit \n2. Fahrenheit para Celsius \n3. Celsius para Kelvin \n4. Kelvin para Celsius\n5. Encerrar programa\n\n");
    while (operacao != 5){
        printf("Informe a opcao desejada: \n");
        scanf("%i", &operacao);
        switch (operacao)
        {
        case 1:
            printf("\nDigite o valor em Celsius: \n");
            scanf("%f", &C);
            F = C*1.8 + 32;
            printf("%f°C = %f°F\n", C,F);
            break;
        case 2:
            printf("\nDigite o valor em Fahrenheit:\n");
            scanf("%f", &F);
            C = (F-32)/1.8;
            printf("%f°F = %f°C\n", F,C);
            break;
        case 3:
            printf("\nDigite o valor em Celsius:\n");
            scanf("%f", &C);
            K = C + 273.15;
            printf("%f°C = %fK\n", C,K);
            break;
        case 4:
            printf("\nDigite o valor em Kelvin:\n");
            scanf("%f", &C);
            C = K - 273.15;
            printf("%fK = %f°C\n", K,C);
            break;                
        default:
            printf("Comando Invalido ou ");
            break;
        }
    }
    printf("Programa Encerrado.");
    return 0;
}