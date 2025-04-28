#include <stdio.h>
#include <string.h>

// Define a estrutura para restaurantes
struct Restaurante {
    char nome[50];
    char endereco[100];
    float precoMedio;
    char tipoComida[30];
};

// Função para solicitar os dados dos restaurantes
void preencherRestaurantes(struct Restaurante restaurantes[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Informe os dados do restaurante %d:\n", i + 1);

        printf("Nome: ");
        fgets(restaurantes[i].nome, 50, stdin);
        restaurantes[i].nome[strcspn(restaurantes[i].nome, "\n")] = 0;

        printf("Endereço: ");
        fgets(restaurantes[i].endereco, 100, stdin);
        restaurantes[i].endereco[strcspn(restaurantes[i].endereco, "\n")] = 0;

        printf("Preço médio: ");
        scanf("%f", &restaurantes[i].precoMedio);
        getchar(); // Para consumir o '\n' deixado pelo scanf

        printf("Tipo de comida: ");
        fgets(restaurantes[i].tipoComida, 30, stdin);
        restaurantes[i].tipoComida[strcspn(restaurantes[i].tipoComida, "\n")] = 0;

        printf("\n");
    }
}

// Função para listar os dados dos restaurantes
void listarRestaurantes(struct Restaurante restaurantes[], int tamanho) {
    printf("Lista de Restaurantes:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Restaurante %d:\n", i + 1);
        printf("Nome: %s\n", restaurantes[i].nome);
        printf("Endereço: %s\n", restaurantes[i].endereco);
        printf("Preço médio: R$%.2f\n", restaurantes[i].precoMedio);
        printf("Tipo de comida: %s\n", restaurantes[i].tipoComida);
        printf("\n");
    }
}

int main() {
    // Declaração de uma matriz de estruturas para 5 restaurantes
    struct Restaurante restaurantes[5];

    // Solicita os dados dos restaurantes
    preencherRestaurantes(restaurantes, 5);

    // Lista os dados dos restaurantes
    listarRestaurantes(restaurantes, 5);

    return 0;
}
