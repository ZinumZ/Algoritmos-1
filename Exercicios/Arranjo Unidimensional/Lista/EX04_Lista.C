#include <stdio.h>
#include <math.h>
//Medio
int main() {
    int n, i;
    float numeros[110], media = 0, dp = 0;
    
    printf("Digite a quantidade de numeros a serem lidos (maximo 110): ");
    scanf("%d", &n);
    
    printf("Digite os %d numeros:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &numeros[i]);
        media = media + numeros[i];
    }
    
    media = media / n;
    
    for (i = 0; i < n; i++) {
        dp = dp + pow(numeros[i] - media, 2);
    }
    
    dp = sqrt(dp / (n - 1)); //sqrt = square root
    
    printf("O desvio padrao eh: %.2f\n", dp);
    
    return 0;
}
