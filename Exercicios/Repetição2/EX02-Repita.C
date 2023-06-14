#include <stdio.h>

int main() {
    float altura, maior_altura = 0, menor_altura = 9999, media_altura_homem = 0;
    int genero, cont_mulheres = 0, cont_homens = 0, i = 0;

    do {
        printf("Informe a altura da pessoa %i (em metros): ", i+1);
        scanf("%f", &altura);
    
        printf("Informe o gênero da pessoa %i (masculino = 1, feminino = 0): ", i+1);
        scanf("%i", &genero);
        i++;

        if (altura > maior_altura)
            maior_altura = altura;

        if (altura < menor_altura)
            menor_altura = altura;

        if (genero == 1) {
            media_altura_homem += altura;
            cont_homens++;
    } else
        cont_mulheres++;
    } while (i < 10);

    printf("\nMaior altura: %.2f metros", maior_altura);
    printf("\nMenor altura: %.2f metros", menor_altura);
    printf("\nMédia de altura dos homens: %.2f metros", media_altura_homem/cont_homens);
    printf("\nNúmero de mulheres: %i\n", cont_mulheres);
    return 0;
}   