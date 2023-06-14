#include <stdio.h>
/* Em uma eleição presidencial existem quatro candidatos. Os votos são informados 
através de códigos. Os dados utilizados para a contagem dos votos obedecem à 
seguinte codificação: 
1, 2, 3, 4 = voto para os respectivos candidatos; 
5 = voto nulo; 
6 = voto em branco; 
Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva: 
a. total de votos para cada candidato; 
b. total de votos nulos; 
c. total de votos em branco.
Como finalizador do conjunto de votos, tem-se o valor 0. */

int main (){
    int codigo = 1, totalJ = 0,totalM = 0 ,totalC = 0,totalP = 0, totalnulo = 0, totalbranco = 0;

    printf("1-Joao\n2-Maria\n3-Carlos\n4-Pedro\n5-Nulo\n6-Branco\n0-Finalizar contagem\n\n");

    while (codigo != 0) {
        printf("Digite um numero:\n");
        scanf("%i", &codigo);

        switch (codigo)
        {
        case 1:
            totalJ++;
            break;
        case 2:
            totalM++;
            break;
        case 3:
            totalC++;
            break;
        case 4:
            totalP++;
            break;
        case 5:
            totalnulo++;
            break;
        case 6:
            totalbranco++;
            break;                
        default:
            break;
        }   
    }
    printf("====CONTAGEM====\n");
    printf("1-Joao: %i votos\n", totalJ);
    printf("2-Maria: %i votos\n", totalM);
    printf("3-Carlos: %i votos\n", totalC);
    printf("4-Pedro: %i votos\n", totalP);
    printf("5-Nulo: %i votos\n", totalnulo);
    printf("6-Branco %i votos\n", totalbranco);
}