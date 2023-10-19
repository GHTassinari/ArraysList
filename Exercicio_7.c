#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    
    // Opção inicial do usuário.
    printf("Digite o numero, informando a opcao escolhida para o seu vetor.\n");
    printf("1 - Informar a quantidade e elementos do vetor.\n");
    printf("2 - Gerar uma quantia e numeros aleatorios para o vetor.\n");
    printf("Resposta: ");
    scanf("%d", &opcao);

    system("cls"); // Limpa a tela antes da próxima interação.

    int N, i;
    if (opcao == 1) {
        //Quantia de elementos nos vetores proposta pelo usuário
        printf("Informe a quantia de elementos dos vetores:\n");
        scanf("%d", &N);
        
        //Declaração das variáveis dos vetores.
        int vetor1[N], vetor2[N];
        
        system("cls");
        
        for (i = 0; i < N; i++) {
            printf("Digite o elemento %d do seu primeiro vetor:\n", i+1);
            scanf("%d", &vetor1[i]);
        }
        for (i = 0; i < N; i++) {
            printf("Digite o elemento %d do seu segundo vetor:\n", i+1);
            scanf("%d", &vetor2[i]);
        }
        
        system("cls");
        
        int vetor3[N];     
        
        for (i = 0; i < N; i++) {
            vetor3[i] = vetor1[i] * vetor2[i];
        }

        printf("Resultado da multiplicacao dos vetores:\n");
        for (i = 0; i < N; i++) {
            printf("%d x %d = %d\n", vetor1[i], vetor2[i], vetor3[i]);
        }
    } else if (opcao == 2) {
        srand(time(NULL));
        
        N = rand() % 10 + 1; // Cada vetor possuirá entre 1 e 10 elementos aleatórios.
        
        int vetor1[N], vetor2[N], i;
        
        for (i = 0; i < N; i++) {
            vetor1[i] = rand() % 1000 + 1; // Números aleatórios entre 1 e 1000
        }
        for (i = 0; i < N; i++) {
            vetor2[i] = rand() % 1000 + 1;
        }
        
        int vetor3[N];
        
        for (i = 0; i < N; i++) {
            vetor3[i] = vetor1[i] * vetor2[i];
        }

        printf("Resultado da multiplicacao dos vetores:\n");
        for (i = 0; i < N; i++) {
            printf("%d x %d = %d\n", vetor1[i], vetor2[i], vetor3[i]);
        }
    } else {
        printf("Opcao invalida, nao foi informado 1 ou 2.\n");
        return 1;
    }

    return 0;
}
