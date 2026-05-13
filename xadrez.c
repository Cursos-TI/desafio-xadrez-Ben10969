#include <stdio.h>

int main() {
    // --- Nível Novato: Movimentação das Peças ---

    // 1. Implementação de Movimentação do Bispo
    // Sugestão: Repetição para diagonal (Cima, Direita) - Usaremos WHILE
    printf("Movendo o Bispo:\n");
    int casasBispo = 5;
    int b = 1;
    while (b <= casasBispo) {
        printf("Cima, Direita\n");
        b++;
    }

    printf("\n"); // Espaço entre as peças

    // 2. Implementação de Movimentação da Torre
    // Sugestão: Repetição para a direita - Usaremos FOR
    printf("Movendo a Torre:\n");
    int casasTorre = 5;
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // 3. Implementação de Movimentação da Rainha
    // Sugestão: Repetição para a esquerda - Usaremos DO-WHILE
    printf("Movendo a Rainha:\n");
    int casasRainha = 8;
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= casasRainha);

    return 0;
}