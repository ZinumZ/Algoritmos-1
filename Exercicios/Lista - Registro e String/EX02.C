#include <stdio.h>

struct Entrevista {
    char sexo;
    int idade;
    char resposta;
};

int main() {
    int QTD = 1000;
    int i, sim=0, nao=0, maiores18_gostaram=0, maiores18_feminino_nao_gostaram=0;
    Entrevista entrevistas[QTD];

    for(i=0; i<QTD; i++) {
        printf("Entre com o sexo da pessoa %d (M/F):\n", i+1);
        scanf(" %c", &entrevistas[i].sexo);

        printf("Entre com a idade da pessoa %d:\n", i+1);
        scanf("%d", &entrevistas[i].idade);

        printf("Entre com a resposta (S/N) da pessoa %d:\n", i+1);
        scanf(" %c", &entrevistas[i].resposta);

        if(entrevistas[i].resposta == 'S') {
            sim++;
        } else if(entrevistas[i].resposta == 'N') {
            nao++;
        }

        if(entrevistas[i].idade > 18 && entrevistas[i].resposta == 'S') {
            maiores18_gostaram++;
        }

        if(entrevistas[i].idade > 18 && entrevistas[i].sexo == 'F' && entrevistas[i].resposta == 'N') {
            maiores18_feminino_nao_gostaram++;
        }
    }

    printf("Número de pessoas que responderam 'Sim': %d\n", sim);
    printf("Número de pessoas que responderam 'Nao': %d\n", nao);
    printf("Quantidade de pessoas maiores de 18 anos que gostaram do produto: %d\n", maiores18_gostaram);
    printf("Quantidade de pessoas maiores de 18 anos, do sexo feminino, que não gostaram do produto: %d\n" ,maiores18_feminino_nao_gostaram);

    return 0;
}