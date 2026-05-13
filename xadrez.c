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

    printf("\n");

    // --- NÍVEL AVENTUREIRO: MOVIMENTAÇÃO DO CAVALO ---
    printf("Movendo o Cavalo:\n");

    // Requisito: Valores definidos como variáveis (conforme visto no vídeo)
    int casasVertical = 2;
    int casasHorizontal = 1;
    int movimentoConcluido = 0; // Flag de controle similar à do vídeo [02:22]

    // Lógica de Movimentação: Loop WHILE externo e FOR interno
    // Seguindo a explicação do prof: o while controla o estado do movimento
    while (movimentoConcluido < 1) { 
        
        // Loop FOR para a parte vertical (2 casas para baixo)
        for (int i = 0; i < casasVertical; i++) {
            printf("Baixo\n");
        }

        // Loop FOR (ou ação direta) para a parte horizontal
        for (int j = 0; j < casasHorizontal; j++) {
            printf("Esquerda\n");
        }

        movimentoConcluido++; // Finaliza o movimento do cavalo [02:54]
    }

    return 0;
}