#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int N;

printf("Informe a quantidade de elementos do vetor:\n");
scanf("%d", &N);

int vetor[N];

// Opção entre informar ou gerar os elementos do vetor.
    int opcao;
    printf("Escolha uma opcao para o seu vetor.\n");
    printf("1 - Informar os elementos do vetor.\n");
    printf("2 - Gerar numeros aleatorios para o vetor.\n");
    scanf("%d", &opcao);
    
int impares = 0;
int i;
    
    if (opcao == 1) {
    	
        for (i = 0; i < N; i++) {
         printf("Digite o elemento %d do vetor:\n", i+1);
         scanf("%d", &vetor[i]);
            
          if(vetor[i]%2!=0){
			impares++;
		  }
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
    
    
     printf("Existem %d valores impares no vetor\n", impares);
	 printf("Valores do vetor:");
	 int j;
	 for (j = 0; j < N; j++) // Mostra todos os valores inseridos do vetor
        printf(" %d", vetor[j]);
    printf("\n");
}

