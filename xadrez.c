#include <stdio.h>

// Função Recursiva: Torre
void moverTorre(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    moverTorre(movimentos - 1);
}

// Função Recursiva: Rainha
void moverRainha(int movimentos) {
    if (movimentos == 0) return;
    printf("Esquerda\n");
    moverRainha(movimentos - 1);
}

// Função Recursiva + Loops Aninhados: Bispo
void moverBispoLimitado(int linhaAtual, int movimentosFeitos, int maxMovimentos) {
    if (movimentosFeitos >= maxMovimentos) return;

    // Loop interno para o movimento horizontal (diagonal)
    for (int coluna = 0; coluna < 2; coluna++) {
        if (movimentosFeitos >= maxMovimentos) break;

        printf("Diagonal Cima Direita\n");
        movimentosFeitos++;
    }

    // Chamada recursiva para a próxima linha (vertical)
    moverBispoLimitado(linhaAtual + 1, movimentosFeitos, maxMovimentos);
}

// Movimento do Cavalo com loops aninhados e controle de fluxo
// Duas casas para cima, uma para a direita
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    // Loop externo: movimento para cima (vertical)
    for (int i = 0; i < 3; i++) {
        if (i == 2) break; 
        printf("Cima\n");

        // Loop interno: verificação e controle da direção final
        for (int j = 0; j < 2; j++) {
            if (i == 1 && j == 0) {
                printf("Direita\n"); 
                break;
            }
            continue;
        }
    }
}

int main() {
    
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo (5 movimentos no total)
    printf("Movimento do Bispo:\n");
    moverBispoLimitado(0, 0, 5);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo
    moverCavalo();

    return 0;
}
