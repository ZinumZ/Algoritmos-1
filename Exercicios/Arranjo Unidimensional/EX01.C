#include <stdio.h>
/*leia a nota de 6 alunos, calcule a média e mostre a média e a 
quantidade de alunos que estão acima da média.*/
int main() {
    int i, quantidade = 0;
    float notas[6], media = 0;

    // Leitura das notas
    for (i = 0; i < 6; i++) {
        printf("Digite a nota do aluno %i: ", i + 1);
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }

    // Cálculo da média
    media = media / 6.0;

    // Contagem de alunos acima da média
    for (i = 0; i < 6; i++) {
        if (notas[i] > media) {
            quantidade++;
        }
    }
    
    // Exibição dos resultados
    printf("Média da turma: %.2f\n", media);
    printf("%i aluno(s) acima da média.\n", quantidade);

    return 0;
}
