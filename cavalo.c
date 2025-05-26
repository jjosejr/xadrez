#include <stdio.h>

int main() {
    int linha = 4;
    int coluna = 3;

    printf("Posicao inicial do cavalo: linha %d, coluna %d\n", linha, coluna);


    int nova_linha = linha - 2;
    int nova_coluna = coluna + 1;


    if (nova_linha >= 0 && nova_linha < 8 && nova_coluna >= 0 && nova_coluna < 8) {
        printf("Movimento valido!\n");
        printf("Nova posicaoo do cavalo: linha %d, coluna %d\n", nova_linha, nova_coluna);
    } else {
        printf("Movimento invalido: fora do tabuleiro.\n");
    }

    return 0;
}
