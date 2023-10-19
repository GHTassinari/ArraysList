#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, i;
    printf("Digite o numero de lancamentos do dado: ");
    scanf("%d", &N);

    int dado[N];
    srand(time(NULL));

    // Preencher o vetor com resultados de lançamentos aleatórios
    for (i = 0; i < N; i++) {
        dado[i] = rand() % 6 + 1; // Gera um número pseuadoaleatório entre 1 e 6
    }

    // Inicializar um vetor de contagem com zeros
    int contagem[6] = {0}; // Cada índice representa uma face de 1 a 6
    // Ou seja, esse vetor vai de 0 a 5, portanto haverá a necessidade de uma redução no próximo for.

    for (i = 0; i < N; i++) {
        contagem[dado[i] - 1]++; // Diminui 1 para corresponder ao índice do vetor
    }

    // Imprime as ocorrências de cada face
    for (i = 0; i < 6; i++) {
        printf("A face %d: ocorreu %d vezes\n", i + 1, contagem[i]);
    }

    return 0;
}
