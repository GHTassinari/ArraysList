#include <stdio.h>
#include <stdlib.h>
int main() {
int N;

printf("Informe a quantidade de elementos do vetor:\n");
scanf("%d", &N);

float vetor[N], maior;

int i;
    for (i=0; i<N; i++){
	printf("Escreva o elemento %d do vetor de quantia informada\n", i+1);
	scanf("%f", &vetor[i]);
	if(i==0){
		maior = vetor[i];
	} else {
		if (vetor[i]>maior){
			maior = vetor[i];
		}
	 }
	}
	 printf("O maior valor do vetor e: %f\n", maior);
	 printf("Valores do vetor:");
int j;
	 for (j = 0; j < N; j++) // Mostra todos os valores inseridos do vetor
        printf(" %f", vetor[j]);
    printf("\n");
}

