#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, i;
    printf("Digite o numero de lancamentos do dado: ");
    scanf("%d", &N);

    int dado[N];
    srand(time(NULL));

    // Preencher o vetor com resultados de lan�amentos aleat�rios
    for (i = 0; i < N; i++) {
        dado[i] = rand() % 6 + 1; // Gera um n�mero pseuadoaleat�rio entre 1 e 6
    }

    // Inicializar um vetor de contagem com zeros
    int contagem[6] = {0}; // Cada �ndice representa uma face de 1 a 6
    // Ou seja, esse vetor vai de 0 a 5, portanto haver� a necessidade de uma redu��o no pr�ximo for.

    for (i = 0; i < N; i++) {
        contagem[dado[i] - 1]++; // Diminui 1 para corresponder ao �ndice do vetor
    }

    // Imprime as ocorr�ncias de cada face
    for (i = 0; i < 6; i++) {
        printf("A face %d: ocorreu %d vezes\n", i + 1, contagem[i]);
    }

    return 0;
}
