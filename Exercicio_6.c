#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int N;

srand(time(NULL)); // Gera uma semente com base no tempo atual, para gerar números pseudoealeatórios
N = rand() % 1001; // O Vetor possuirá entre 0 e 1000 posições aleatórias

int *vetor = (int *)malloc(N * sizeof(int)); // Alocação dinâmica, pois em algumas versões do C
// Não existe o suporte para um vetores com tamanho definido por uma variável
// Portanto, com essa alocação dinâmica, ocorre a declaração da variável vetor[N]

int *posicoes = (int *)malloc(N * sizeof(int)); // Alocação dinãmica também para as posições as quais
// O número se encontra, pois a sua posição também é um vetor com tamanho definido por uma variável.


int i;
for (i = 0; i < N; i++) {
            vetor[i] = rand() % 1001; // Números aleatórios entre 0 e 1000
        }
        
int numero;
printf("O vetor possui %d numeros inteiros aleatorios entre 0 e 1000\n", N);
printf("Forneca um numero e eu direi se ele esta no vetor: ");
scanf("%d", &numero);

system("cls"); // Limpa a tela antes de exibir o resultado, de se o vetor possui ou não o valor.

int encontrado = 0; // Para verificar quando o número for encontrado
int encontradas = 0; // Para verificar todas as posições as quais o número foi encontrado
//Pois, levando em conta a quantia de números aleatórios, pode ocorrer mais de uma vez

  for (i = 0; i < N; i++) {
        if (vetor[i] == numero) {
            encontrado = 1;
            posicoes[encontradas] = i; // Armazena a posição encontrada
            encontradas++; // Incrementa o contador de vezes encontradas
        }
    }
    
  if(encontrado == 1){
  	printf("O numero %d esta presente no vetor estando na posicoes: ", numero);
  	for (i=0; i<encontradas; i++){ // Inicializa um loop por todas as posições que o número foi
  	// encontrado.
  		printf("%d", posicoes [i]); // Imprimindo o valor armazenado na posição onde o número
  		// foi encontrado no vetor original
  		if (i < encontradas - 1) { 
  			printf(", "); // Apenas coloca uma virgula no último valor para melhorar a legibilidade.
		  }
	  }
  } else {
  	printf("O numero %d nao esta presente no vetor.\n", numero);
  }
  

printf("\nOs (%d) valores do vetor:", N);
int j;
for (j = 0; j < N; j++) // Mostra todos os valores inseridos do vetor
  printf(" %d", vetor[j]);
  
printf("\n");

free(vetor); // Libera a memória que foi alocada dinamicamente
free(posicoes);

return 0; // Tudo ocorreu corretamente no codigo.
}
