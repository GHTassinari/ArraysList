#include <stdio.h>

int main() {
    float notas[5];
    float maior = 0, menor = 10, soma = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%f", &notas[i]);
        
        if (notas[i] > maior) {
            maior = notas[i];
        }
        
        if (notas[i] < menor) {
            menor = notas[i];
        }
        
        soma += notas[i];
    }
    
    float notaFinal = soma - maior - menor;
    printf("%.1f\n", notaFinal);
    
    return 0;
}
