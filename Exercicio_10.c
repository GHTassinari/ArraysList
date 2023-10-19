#include <stdio.h>
#include <string.h>

int main() {
    char dna[51]; // Tamanho de 50+1 para possuir o caractere nulo '\0'
    char complementar[51]; // Vetor para o complemento deste DNA
    int i;
    
    printf("Digite a sequencia de DNA (A, T, C, G): ");
    scanf("%s", dna); // Lê a sequência de DNA que será informada pelo usuário.
    
    int tamanho = strlen(dna);
    
    // Gera o vetor complementar e verifica por caracteres inválidos
    int erro = 0;
    for (i = 0; i < tamanho; i++) {
    	
        switch (dna[i]) { // Caso o vetor string possua aquele valor na posição, o complementar
        // Possuirá outra, determinado pelo código
        // O Break encerrará o switch, para que o loop continue, até o fim do DNA.
            case 'A':
                complementar[i] = 'T';
                break;
            case 'T':
                complementar[i] = 'A';
                break;
            case 'C':
                complementar[i] = 'G';
                break;
            case 'G':
                complementar[i] = 'C';
                break;
            default:
                // Caractere inválido
                printf("Houve um caractere invalido inserido na posicao %d: %c\n", i, dna[i]);
                erro
				 = 1;
                break;
        }
    }
    
    if (!erro) { // Verifica se a variável erro é igual a zero, ou seja, não houve erro.
        complementar[tamanho] = '\0'; // Adiciona o caractere nulo ao final
        printf("Vetor complementar: %s\n", complementar);
    }
    
    return 0;
}

