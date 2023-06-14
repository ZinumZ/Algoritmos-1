/*Crie um algoritmo que leia uma matriz 5x5. Em seguida, conte quantos números pares existem na matriz.*/
#include <stdio.h>

int main(){
    int i = 0, j = 0, num;
    int matriz[5][5], pares = 0;

    //Recebendo numeros do usuario:
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("[%i],[%i]: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++){ //Contando os pares
        for (j = 0; j < 5; j++){
            if (matriz[i][j] % 2 == 0){
                pares++;
            }
        }
    }
    printf("Numero de pares existentes: %i\n", pares);
    return 0;
}
