#include <stdio.h>
/*dada a nota de um aluno, retorne a sua situação: "Aprovado", 
"Recuperação" ou "Reprovado", de acordo com as seguintes regras:
 Nota igual ou superior a 7: "Aprovado"
 Nota entre 5 e 6.9: "Recuperação"
 Nota inferior a 5: "Reprovado“*/
int main()
{
    int nota;
    printf("Digite a nota do aluno: \n");
    scanf("%i", &nota);

    switch (nota)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            printf("Reprovado");
            break;
        case 5:
        case 6:
            printf("Recuperação");
            break;
        default:
            printf("Aprovado");
            break;        
    }
    return 0;
}