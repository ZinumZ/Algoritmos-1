#include <stdio.h>
/*Crie um registro para armazenar informações sobre alunos de uma escola. O registro deve 
conter o nome do aluno, a idade, a nota em uma disciplina e o número de faltas. Escreva 
um algoritmo que leia as informações de cinco alunos e imprima o nome do aluno com a 
maior nota.*/

struct Pessoa
{
    char aluno[50];
    int idade;
    int falta;
    float nota;
};

int main(){
    int i, QTD = 5;
    float maior_nota = 0;
    int indice_maior;
    struct Pessoa pessoa[QTD];

    for (i = 0; i < QTD; i++){
        printf("Digite o nome do %d° Aluno: \n", i+1);
        scanf("%s", &pessoa[i].aluno);

        printf("Digite a idade do aluno: \n");
        scanf("%d", &pessoa[i].idade);

        printf("Digite a nota: \n");
        scanf("%f", &pessoa[i].nota);

        printf("Digite a quantidade de faltas: \n");
        scanf("%d", &pessoa[i].falta);

         if (pessoa[i].nota > maior_nota)
            maior_nota = pessoa[i].nota;
            indice_maior = i;
    }
    printf("O aluno com nota maior eh: %s", pessoa[indice_maior].aluno);
    return 0;
}
