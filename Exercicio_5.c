#include <stdio.h>
#include <stdlib.h>

int main() {
int N;

printf("Informe a quantidade de elementos do vetor:\n");
scanf("%d", &N);

int vetor[N];
int i;
    for (i=0; i<N; i++){
	printf("Escreva o elemento %d do vetor de quantia informada\n", i+1);
	scanf("%d", &vetor[i]);
	}
	
	int contador[N]; // Armazena as contagens de cada elemento
    for (i = 0; i < N; i++) {
        contador[i] = 0; // Inicializa um contador para cada elemento do vetor
    }

	 printf("Valores do vetor:");
int j;
	 for (j = 0; j < N; j++) {
        printf(" %d", vetor[j]);
        contador[vetor[j]]++; // Aumenta o contador para determinado valor do vetor
    }
    
    printf("\n");
    
    printf("Contagem dos valores no vetor:\n");
    for (i = 0; i < N; i++) {
        if (contador[i] > 0) {
            printf("O valor %d ocorre %d vezes no vetor.\n", i, contador[i]);
        }
    }
    
    return 0;
}

