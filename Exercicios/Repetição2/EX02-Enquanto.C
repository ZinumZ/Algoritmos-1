#include <stdio.h>

int main() {
  int num, i = 1, fatorial = 1;
  
  printf("Digite um numero inteiro positivo: ");
  scanf("%i", &num); 
  
  while (i <= num) {
    fatorial *= i; // Multiplica o fatorial pelo contador atual
    i++; 
  }
  
  printf("O fatorial de %i eh: %i\n", num, fatorial);
  
  return 0;
}
