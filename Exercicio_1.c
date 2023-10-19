#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de soma.
int calcularSoma(int vetor[], int tamanho) {
    int soma = 0;
int i;
    for (i = 0; i < tamanho; i++)
        soma += vetor[i]; //Equivale à soma = soma + vetor[i].
    return soma;
}

int main(void) {
    int N;
    
    printf("Digite a quantidade de elementos do vetor:\n");
    scanf("%d", &N);

    if (N <= 0 || N > 100) {
        printf("Quantidade invalida, o vetor deve possuir entre 1 e 100 elementos.\n");
        return 1;
    }

    int vetor[N];

    // Opção entre informar ou gerar os elementos do vetor.
    int opcao;
    printf("Escolha uma opcao para o seu vetor.\n");
    printf("1 - Informar os elementos do vetor.\n");
    printf("2 - Gerar numeros aleatorios para o vetor.\n");
    scanf("%d", &opcao);
    
    int i;

    if (opcao == 1) {
        printf("Digite os elementos do vetor:\n");
        for (i = 0; i < N; i++) {
            scanf("%d", &vetor[i]);
        }
    } else if (opcao == 2) {
        // Gerando uma semente completamente aleatória com base no tempo atual.
        srand(time(NULL));
        for (i = 0; i < N; i++) {
            vetor[i] = rand() % 101; // Números aleatórios entre 0 e 100
        }
    } else {
        printf("Opcao invalida, nao foi informado 1 ou 2.\n");
        return 1;
    }
    
    int soma = calcularSoma(vetor, N);

    printf("Valores do vetor:"); 
    for (i = 0; i < N; i++) // Mostra todos os valores gerados ou inseridos do vetor
        printf(" %d", vetor[i]);
    printf("\n");

    // Calcular a soma dos elementos usando a função calcularSoma
    printf("A soma de todos os elementos do vetor e: %d\n", soma);

    return 0;
}
