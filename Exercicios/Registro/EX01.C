#include <stdio.h>

struct Pessoa
{
    char nome[50];
    float altura;
    float peso;
    int cpf;
    char sexo;
};

int main (){
    int QTD = 1;
    int i = 0, cpf_busca;
    struct Pessoa pessoa[QTD];
    float imc = 0;

    for (i = 0; i < QTD; i++){
        printf("Digite o nome da %d pessoa: \n", i+1);
        scanf("%s", &pessoa[i].nome);
        printf("Digite a altura: \n");
        scanf("%f", &pessoa[i].altura);
        printf("Digite o peso: \n");
        scanf("%f", &pessoa[i].peso);
        printf("Digite o CPF: \n");
        scanf("%d", &pessoa[i].cpf);
        printf("Digite o sexo [M/F]: \n");
        scanf(" %c", &pessoa[i].sexo);
    }

    //Localizar CPF
    for (i = 0; i < QTD; i++){
        printf("Digite o CPF para calcular IMC: \n");
        scanf("%d", &cpf_busca);
        if (cpf_busca == pessoa[i].cpf){
            imc = pessoa[i].peso / (pessoa[i].altura * pessoa[i].altura);
            printf("IMC da pessoa %s: %f \n", pessoa[i].nome, imc);
        }
    }
    return 0;
}