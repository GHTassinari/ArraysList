#include <stdio.h>
#include <string.h>

int main() {
    char mensagem[1001]; // Tamanho máximo da mensagem, incluindo o caractere nulo
    
    printf("Digite a mensagem codificada: ");
    gets(mensagem); // Lê a mensagem codificada
    
    int tamanho = strlen(mensagem);
    for (int i = 0; i < tamanho; i++) {
        if (mensagem[i] == 'p' && i + 1 < tamanho) {
            if (mensagem[i + 1] == 'p') {
                printf(" ");
                i++;
            } else {
                printf("%c", mensagem[i + 1]);
                i++;
            }
        } else {
            printf("%c", mensagem[i]);
        }
    }
    
    printf("\n");
    
    return 0;
}
