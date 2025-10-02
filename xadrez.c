#include <stdio.h>

//  Funções Recursivas 

// Simula o movimento da Torre, imprimindo "Direita" a cada passo.
 
void moverTorre(int passos) {
    if (passos > 0) {
        printf("Direita\n");
        moverTorre(passos - 1); 
    }
}

// Simula o movimento da Rainha, imprimindo "Esquerda" a cada passo.
 
void moverRainha(int passos) {
    if (passos > 0) {
        printf("Esquerda\n");
        moverRainha(passos - 1); 
    }
}

// Simula o movimento do Bispo, imprimindo "Cima+Direita" a cada passo.
 
void moverBispo(int passos_vert, int passos_horiz) {
    if (passos_vert > 0 && passos_horiz > 0) {
        
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 1; j++) {
                printf("Cima+Direita\n");
            }
        }
        moverBispo(passos_vert - 1, passos_horiz - 1); 
    }
}

// Função Principal

int main() {
    
    // Valores para o número de casas a serem movidas
    const int casas_torre = 5;
    const int casas_rainha = 8;
    const int casas_bispo = 5;

    // Movimentação da Rainha 
    printf("--- Movimentação da Rainha ---\n");
    moverRainha(casas_rainha);
    printf("\n"); 

    // Movimentação da Torre 
    printf("--- Movimentação da Torre ---\n");
    moverTorre(casas_torre);
    printf("\n"); 

    // Movimentação do Bispo 
    printf("--- Movimentação do Bispo ---\n");
    moverBispo(casas_bispo, casas_bispo);
    printf("\n"); 


    // Movimentação do Cavalo 
    printf("--- Movimentação do Cavalo ---\n");
    int i, j;
    
   
    for (i = 1; i <= 3; i++) { 
        printf("Cima\n");
    }
    
    for (j = 1; j <= 2; j++) { 
        printf("Direita\n");
    }
    
    printf("\n"); 
    
    return 0;
}