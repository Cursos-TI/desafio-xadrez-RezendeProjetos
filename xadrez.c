#include <stdio.h>

int main() {
    
    // Movimento da Torre (para a direita) usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo (diagonal para cima e à direita) usando WHILE
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha (para a esquerda) usando DO-WHILE
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\n");
    
    printf("Movimento do Cavalo:\n");

    // Loop externo para os dois movimentos para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    // Loop interno (while) para o movimento à esquerda
    int esquerda = 0;
    while (esquerda < 1) {
        printf("Esquerda\n");
        esquerda++;
    

        }


    return 0;
}
