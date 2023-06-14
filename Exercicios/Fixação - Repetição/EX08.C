#include <stdio.h>
#include <stdlib.h>
/*Fazer um programa para ler um valor de temperatura em Celsius e convertê-lo para
Fahrenheit. Logo em seguida, perguntar ao usuário se ele deseja repetir o processo
(S/N). Se o usuário responder "S", o programa deve repetir o processo. O programa
termina quando o usuário responde "N“. Lembrete: F = (9C/5) + 32*/
int main() {
    float celsius, fahrenheit;
    char resposta;

    do {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &celsius);

        fahrenheit = (9.0 * celsius / 5.0) + 32.0;
        printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit\n", celsius, fahrenheit);

        printf("Deseja repetir o processo? (S/N) \n");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');
    system ("pause");
    return 0;
}