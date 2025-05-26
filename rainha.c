#include <stdio.h>

int main() {
    int linha = 3;
    int coluna = 6;

    printf("Posicaoo inicial da rainha: linha %d, coluna %d\n", linha, coluna);

    for (int i = 0; i < 5; i++) {
        coluna--;

        if (coluna < 0) {
            printf("Movimento inválido: fora do tabuleiro\n");
            return 1;
        }

        printf("Rainha movida para: linha %d, coluna %d\n", linha, coluna);
    }

    printf("Movimento completo. Posicaoo final da rainha: linha %d, coluna %d\n", linha, coluna);

    return 0;
}
