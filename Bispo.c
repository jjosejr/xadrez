#include <stdio.h>

int main() {

    int linha = 6;
    int coluna = 2;

    int nova_linha = linha - 5;
    int nova_coluna = coluna + 5;

    if (nova_linha >= 0 && nova_linha < 8 && nova_coluna >= 0 && nova_coluna < 8) {
        printf("5 casas na diagonal direita para cima!\n");
        printf("Nova posicao do bispo: linha %d, coluna %d\n", nova_linha, nova_coluna);
    } else {
        printf("movimento inválido: fora do tabuleiro.\n");
    }

    return 0;
}
