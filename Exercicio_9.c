#include <stdio.h>
#include <string.h>

int main() {
    char vetor[100];
    
    printf("Informe uma string: ");
    gets(vetor);
    
    int tamanho = strlen(vetor), i;
    
    printf("String na sua ordem inversa: ");
    // O for come�ar� imprimindo o �ltimo valor da string, e continuando at� o primeiro.
    for (i = tamanho - 1; i >= 0; i--) { // -1, pois o vetor come�a em 0. O for continua at� atingir 0.
        printf("%c", vetor[i]);
    }
    
    printf("\n");
    
    return 0;
}
