#include <stdio.h>

// Funções recursivas
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Cima + Direita\n");
    moverBispo(passos - 1);
}

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    printf("=== Nivel Mestre ===\n\n");

    // Bispo recursivo (5 casas na diagonal superior direita)
    printf("Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Torre recursiva (5 casas para a direita)
    printf("Torre:\n");
    moverTorre(5);
    printf("\n");

    // Rainha recursiva (8 casas para a esquerda)
    printf("Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Cavalo (L: 2 para cima + 1 para direita) usando loop com múltiplas variáveis
    printf("Cavalo:\n");
    for (int i = 0, j = 0; i < 2 || j < 1; ) {
        if (i < 2) {
            printf("Cima\n");
            i++;
            continue; // volta ao loop para terminar os movimentos de cima primeiro
        }
        if (j < 1) {
            printf("Direita\n");
            j++;
            break; // sai após terminar a última jogada
        }
    }

    return 0;
}
