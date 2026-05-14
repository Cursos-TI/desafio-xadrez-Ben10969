#include <stdio.h>

// --- RECURSIVIDADE: O Robô que repete a ordem para si mesmo ---

void moverTorre(int casas) {
    if (casas > 0) { // Enquanto ainda restarem casas no estoque...
        printf("Direita\n");
        moverTorre(casas - 1); // O robô chama a si mesmo para a próxima casa
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Bispo com Recursividade (conforme pedido: uma função que se chama)
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

int main() {
    // 1. Movimentação com Recursividade
    printf("Movendo a Torre:\n");
    moverTorre(5);
    printf("\n");

    printf("Movendo a Rainha:\n");
    moverRainha(8);
    printf("\n");

    // 2. Bispo com Loops Aninhados (Eixo Vertical e Horizontal)
    // O desafio pede: Externo Vertical, Interno Horizontal
    printf("Movendo o Bispo (Loops Aninhados):\n");
    for (int v = 1; v <= 5; v++) { // Loop Vertical
        for (int h = 1; h <= 1; h++) { // Loop Horizontal
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

    // --- CAVALO COM LOOPS COMPLEXOS (Exigência do Desafio) ---
    printf("Cavalo em L (Cima e Direita):\n");
    
    // Usando múltiplas variáveis (i e j) e Continue/Break
    for (int i = 1, j = 2; i <= 1; i++) { // i controla o movimento total
        while (j > 0) {
            printf("Cima\n");  
            j--;
            
            if (j > 0) continue; // "Ainda faltam passos para cima? Então ignore o resto e volte"
            
            // Se chegou aqui, é porque o j acabou (é 0)
            printf("Direita\n");
            break; // "Já fiz o L, agora pare tudo e saia desse loop"
        }
    }
    
    return 0;
}