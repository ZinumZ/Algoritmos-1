#include <stdio.h>
#include <string.h>
/*crie um registro para armazenar informações sobre um produto. O 
registro deve conter o nome do produto, o preço unitário e a 
quantidade em estoque. O algoritmo deve ler as informações de três 
produtos e imprimir o valor total em estoque.*/

// Definindo o tipo de registro para armazenar informações de um produto
struct Produto {
    char nome[50];
    float preco_unitario;
    int quantidade;
};

int main() {
    int i;
    float valor_total = 0;

    // Criando um array de 3 produtos
    struct Produto produtos[3];

    // Lendo as informações de cada produto e armazenando no array de produtos
    for (i = 0; i < 3; i++) {
        printf("\nDigite o nome do produto %d: ", i+1);
        scanf("%s", &produtos[i].nome);

        printf("Digite o preco unitario do produto %d: ", i+1);
        scanf("%f", &produtos[i].preco_unitario);

        printf("Digite a quantidade em estoque do produto %d: ", i+1);
        scanf("%d", &produtos[i].quantidade);

        valor_total = valor_total + produtos[i].preco_unitario * produtos[i].quantidade;
    }

    printf("Valor total em estoque: R$ %.2f\n", valor_total);

    return 0;
}
