#include <stdio.h>

int main() {
    // Constantes para quantidade de movimentos
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    printf("=== Nivel Novato ===\n\n");

    // Torre -> 5 casas para a direita
    printf("Torre:\n");
    for (int i = 0; i < TORRE_MOV; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Rainha -> 8 casas para a esquerda
    printf("Rainha:\n");
    for (int i = 0; i < RAINHA_MOV; i++) {
        printf("Esquerda\n");
    }
    printf("\n");

    // Bispo -> 5 casas na diagonal superior direita
    // Obs: diagonal é combinação de duas direções (Cima + Direita)
    printf("Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Cima + Direita\n");
    }

    return 0;
}
