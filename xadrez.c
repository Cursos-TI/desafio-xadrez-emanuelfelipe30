#include <stdio.h>

// Função recursiva para movimentar a Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva combinada com loops aninhados para movimentar o Bispo (5 casas na diagonal para cima e à direita)
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return;
    for (int i = 0; i < horizontal; i++) {
        printf("Cima, Direita\n");
    }
    moverBispo(vertical - 1, horizontal);
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    
    printf("\n");
    
    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1);
    
    printf("\n");
    
    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    
    printf("\n");
    
    // Movimento do Cavalo (2 casas para cima e 1 para a direita) usando loops aninhados
    printf("Movimento do Cavalo:\n");
    
    int movimentos = 0;
    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
            movimentos++;
            continue;
        }
        
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
            movimentos++;
            break;
        }
    }
    
    return 0;
}