#include <stdio.h>
#include <string.h>

int main() {
    char dna[51]; // Tamanho de 50+1 para possuir o caractere nulo '\0'
    char complementar[51]; // Vetor para o complemento deste DNA
    int i;
    
    printf("Digite a sequencia de DNA (A, T, C, G): ");
    scanf("%s", dna); // L� a sequ�ncia de DNA que ser� informada pelo usu�rio.
    
    int tamanho = strlen(dna);
    
    // Gera o vetor complementar e verifica por caracteres inv�lidos
    int erro = 0;
    for (i = 0; i < tamanho; i++) {
    	
        switch (dna[i]) { // Caso o vetor string possua aquele valor na posi��o, o complementar
        // Possuir� outra, determinado pelo c�digo
        // O Break encerrar� o switch, para que o loop continue, at� o fim do DNA.
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
                // Caractere inv�lido
                printf("Houve um caractere invalido inserido na posicao %d: %c\n", i, dna[i]);
                erro
				 = 1;
                break;
        }
    }
    
    if (!erro) { // Verifica se a vari�vel erro � igual a zero, ou seja, n�o houve erro.
        complementar[tamanho] = '\0'; // Adiciona o caractere nulo ao final
        printf("Vetor complementar: %s\n", complementar);
    }
    
    return 0;
}

