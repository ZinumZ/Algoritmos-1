#include <stdio.h>
/*Considere os registros de alunos composto do campo nome e um campo notas. O campo 
notas é formado por três campos, p1, p2, p3, que guardam as notas da primeira, segunda e 
terceira  provas,  respectivamente.  Escreva  um  programa  que  lê  o  peso  de  cada  prova  e 
calcule a média dos alunos. Gere um relatório indicando, para cada aluno, o seu nome, a 
sua  média  e  se  ele  está  APROVADO  ou  REPROVADO,  considerando  que  a  nota  para 
aprovação é 5.*/

struct Alunos {
    char nome[50];
    float p1, p2, p3;
};

int main(){
    int QTD = 1;
    struct Alunos alunos[QTD];
    int i;
    float pesop1, pesop2, pesop3, media = 0;

    printf("Digite o peso da p1: \n");
    scanf("%f", &pesop1);
    printf("Digite o peso da p2: \n");
    scanf("%f", &pesop2);
    printf("Digite o peso da p3: \n");
    scanf("%f", &pesop3);

    for (i = 0; i < QTD; i++){
        printf("Digite o nome do aluno %d: \n", i+1);
        scanf("%s", &alunos[i].nome);

        printf("Digite a nota da primeira prova: \n");
        scanf("%f", &alunos[i].p1);

        printf("Digite a nota da segunda prova: \n");
        scanf("%f", &alunos[i].p2);

        printf("Digite a nota da terceira prova: \n");
        scanf("%f", &alunos[i].p3);
    }

    //Média
    printf("Média e Aprovação: \n");
    for (i = 0; i < QTD; i++){
        media = (alunos[i].p1 * pesop1 + alunos[i].p2 * pesop2 + alunos[i].p3 * pesop3) / (pesop1 + pesop2 + pesop3);
        printf("%s - Media: %.2f - Situacao: ", alunos[i].nome, media);
        if (media >= 5.0) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }
    return 0;
}