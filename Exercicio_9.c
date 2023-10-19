#include <stdio.h>
#include <string.h>

int main() {
    char vetor[100];
    
    printf("Informe uma string: ");
    gets(vetor);
    
    int tamanho = strlen(vetor), i;
    
    printf("String na sua ordem inversa: ");
    // O for começará imprimindo o último valor da string, e continuando até o primeiro.
    for (i = tamanho - 1; i >= 0; i--) { // -1, pois o vetor começa em 0. O for continua até atingir 0.
        printf("%c", vetor[i]);
    }
    
    printf("\n");
    
    return 0;
}
