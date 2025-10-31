#include <stdio.h>

int main() {
    int casasTorre = 5; 
    printf("=== Movimento da TORRE ===\n");
    printf("A Torre se move 5 casas para a DIREITA:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n"); 

    int casasBispo = 5; 
    int i = 1;
    printf("=== Movimento do BISPO ===\n");
    printf("O Bispo se move 5 casas na diagonal para CIMA e à DIREITA:\n");

    while (i <= casasBispo) {
        printf("Casa %d: Cima e Direita\n", i);
        i++;
    }

    printf("\n");

    int casasRainha = 8; 
    int j = 1;
    printf("=== Movimento da RAINHA ===\n");
    printf("A Rainha se move 8 casas para a ESQUERDA:\n");

    do {
        printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\n=== Fim da simulação dos movimentos ===\n");

    return 0;
}
