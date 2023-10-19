#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int N;

srand(time(NULL)); // Gera uma semente com base no tempo atual, para gerar n�meros pseudoealeat�rios
N = rand() % 1001; // O Vetor possuir� entre 0 e 1000 posi��es aleat�rias

int *vetor = (int *)malloc(N * sizeof(int)); // Aloca��o din�mica, pois em algumas vers�es do C
// N�o existe o suporte para um vetores com tamanho definido por uma vari�vel
// Portanto, com essa aloca��o din�mica, ocorre a declara��o da vari�vel vetor[N]

int *posicoes = (int *)malloc(N * sizeof(int)); // Aloca��o din�mica tamb�m para as posi��es as quais
// O n�mero se encontra, pois a sua posi��o tamb�m � um vetor com tamanho definido por uma vari�vel.


int i;
for (i = 0; i < N; i++) {
            vetor[i] = rand() % 1001; // N�meros aleat�rios entre 0 e 1000
        }
        
int numero;
printf("O vetor possui %d numeros inteiros aleatorios entre 0 e 1000\n", N);
printf("Forneca um numero e eu direi se ele esta no vetor: ");
scanf("%d", &numero);

system("cls"); // Limpa a tela antes de exibir o resultado, de se o vetor possui ou n�o o valor.

int encontrado = 0; // Para verificar quando o n�mero for encontrado
int encontradas = 0; // Para verificar todas as posi��es as quais o n�mero foi encontrado
//Pois, levando em conta a quantia de n�meros aleat�rios, pode ocorrer mais de uma vez

  for (i = 0; i < N; i++) {
        if (vetor[i] == numero) {
            encontrado = 1;
            posicoes[encontradas] = i; // Armazena a posi��o encontrada
            encontradas++; // Incrementa o contador de vezes encontradas
        }
    }
    
  if(encontrado == 1){
  	printf("O numero %d esta presente no vetor estando na posicoes: ", numero);
  	for (i=0; i<encontradas; i++){ // Inicializa um loop por todas as posi��es que o n�mero foi
  	// encontrado.
  		printf("%d", posicoes [i]); // Imprimindo o valor armazenado na posi��o onde o n�mero
  		// foi encontrado no vetor original
  		if (i < encontradas - 1) { 
  			printf(", "); // Apenas coloca uma virgula no �ltimo valor para melhorar a legibilidade.
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

free(vetor); // Libera a mem�ria que foi alocada dinamicamente
free(posicoes);

return 0; // Tudo ocorreu corretamente no codigo.
}
