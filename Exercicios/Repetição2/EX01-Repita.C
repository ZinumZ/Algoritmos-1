#include <stdio.h>

int main() {
  int i = 1, soma = 0, numero;
  
  do {
    printf("Digite o %iº numero: ", i);
    scanf("%i", &numero); 
    soma += numero; // Adiciona o número atual à soma
    i++; 
  } while (i <= 5); 
  
  printf("A soma dos numeros digitados eh: %i\n", soma); 
  
  return 0;
}
