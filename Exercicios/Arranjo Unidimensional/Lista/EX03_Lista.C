#include <stdio.h>
//Dificil
int main() {
    int MAX_N = 500;
    int n, i, j, conta, max_conta, min_conta;
    float nums[MAX_N];
    float modes[MAX_N];
    
    printf("Digite um valor inteiro n entre 1 e 500: ");
    scanf("%d", &n);
    
    printf("Digite %d valores reais: ", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &nums[i]);
    }
    
    max_conta = 0;
    min_conta = n;
    conta = 1;
    modes[0] = nums[0];
    j = 0;
    
    for (i = 1; i < n; i++) {
        if (nums[i] == modes[j]) {
            conta++;
        } else {
            if (conta > max_conta) {
                max_conta = conta;
                j = 0;
                modes[j] = nums[i-1];
            } else if (conta == max_conta) {
                j++;
                modes[j] = nums[i-1];
            }
            
            if (conta < min_conta) {
                min_conta = conta;
            }
            
            conta = 1;
        }
    }
    
    if (conta > max_conta) {
        max_conta = conta;
        j = 0;
        modes[j] = nums[n-1];
    } else if (conta == max_conta) {
        j++;
        modes[j] = nums[n-1];
    }
    
    if (conta < min_conta) {
        min_conta = conta;
    }
    
    printf("Moda(s): ");
    for (i = 0; i <= j; i++) {
        printf("%.2f ", modes[i]);
    }
    printf("\n");
    
    printf("Maior moda aparece %d vezes\n", max_conta);
    printf("Menor moda aparece %d vezes\n", min_conta);
    
    return 0;
}
