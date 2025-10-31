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





#include <stdio.h>

int main() {
    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

    printf("\n");

    for (int i = 0; i < movimentoVertical; i++) {
        printf("Baixo\n");
    }

    int j = 0;
    while (j < movimentoHorizontal) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}





#include <stdio.h>

void moverTorre(int casas, int atual) {
    if (atual == casas) return;
    printf("Cima\n");
    moverTorre(casas, atual + 1);
}

void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return;
    for (int i = 0; i < horizontal; i++) {
        printf("Direita\n");
    }
    printf("Cima\n");
    moverBispo(vertical - 1, horizontal);
}

void moverRainha(int casas, int atual) {
    if (atual == casas) return;
    printf("Cima\n");
    printf("Direita\n");
    moverRainha(casas, atual + 1);
}

int main() {
    int casasTorre = 3;
    int casasBispoVertical = 2;
    int casasBispoHorizontal = 2;
    int casasRainha = 3;

    moverTorre(casasTorre, 0);
    printf("\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);
    printf("\n");
    moverRainha(casasRainha, 0);
    printf("\n");

    for (int i = 0, j = 0; i < 2 || j < 1; i++, j++) {
        if (i < 2) {
            printf("Cima\n");
        } else if (j < 1) {
            printf("Direita\n");
        } else {
            break;
        }
    }

    return 0;
}
