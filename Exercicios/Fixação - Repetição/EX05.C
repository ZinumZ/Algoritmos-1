#include <stdio.h>
/*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e
cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico.*/
int main(){
    int i = 0;
    float chico = 1.5, ze = 1.1;

    while (chico > ze){
        chico = chico + 0.02;
        ze = ze + 0.03;
        i++; //ano
    }
    printf("Iria demorar %i anos para que Zé seja maior que Chico", i);
    return 0;
}
//após 41 anos: zé == 2.33, chico == 2.32 