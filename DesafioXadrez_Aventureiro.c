#include <stdio.h>

int main() {
    printf("=== Nivel Aventureiro ===\n\n");

    // Movimento do cavalo: "L" (2 para baixo + 1 para esquerda)
    // Usando for + while

    printf("Cavalo:\n");

    // Primeiro movimento: 2 para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // Segundo movimento: 1 para esquerda
    int j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }

    // Exemplo com loops aninhados (mostrar o "L" completo em matriz imaginária)
    printf("\nCavalo (usando loops aninhados):\n");
    for (int i = 0; i < 2; i++) {  // 2 movimentos para baixo
        for (int j = 0; j < 1; j++) {  // 1 movimento para esquerda
            printf("Baixo + Esquerda\n");
        }
    }

    return 0;
}
