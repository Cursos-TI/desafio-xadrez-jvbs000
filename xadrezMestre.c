#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Função recursiva para o movimento do Bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical > 0) {
        for (int i = 0; i < horizontal; i++) {
            printf("Direita\n");
        }
        printf("Cima\n");
        moverBispo(vertical - 1, horizontal);
    }
}

// Função para o movimento do Cavalo
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

int main() {
    printf("---- Movimento da Torre ----\n");
    moverTorre(5);
    printf("\n");

    printf("---- Movimento do Bispo ----\n");
    moverBispo(5, 1);
    printf("\n");

    printf("---- Movimento da Rainha ----\n");
    moverRainha(8);
    printf("\n");

    printf("---- Movimento do Cavalo ----\n");
    moverCavalo(1);
    printf("\n");
}

// Depois de várias tentativas acabei percebendo que não é exatamente necessário declarar variáveis no int main para as do void, só inserir diretamente o valor funcionava também