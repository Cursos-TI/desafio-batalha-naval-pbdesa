#include <stdio.h>

// Desafio Batalha Naval - MateCheck - Pablo Francisco de Sa
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios

    //Declaração do tabuleiro 10x10 inicializado com zeros
    int tabuleiro [10][10] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    //Declaração dos navios com seus tamanhos
    int navio1 [3];
    int navio2 [3];

    // Navio 1: Horizontal
    int linha_navio1 = 0;
    int coluna_navio1 = 3;

    // Navio 2: Vertical
    int linha_navio2 = 6;
    int coluna_navio2 = 7;

    // --- Colocação dos navios no tabuleiro ---
    // Verificar se o Navio 1 está dentro dos limites do tabuleiro
    if(linha_navio1 >= 10  || coluna_navio1 + 2 >= 10) {
        printf("ERRO: Navio 1 fora dos limites do tabuleiro.\n");
        return 1;
            }
    
    // Colocação do Navio 1 (horizontal)
    for(int i = 0; i < 3; i++) {
        tabuleiro[linha_navio1][coluna_navio1 + i] = 3; 
    }   

    // Verificar se o Navio 2 está dentro dos limites do tabuleiro
    if(linha_navio2 + 2 >= 10 || coluna_navio2 >= 10) {
        printf("ERRO: Navio 2 fora dos limites do tabuleiro.\n");
        return 1;
            }   

    // Verificar sobreposição dos navios
    for(int m = 0; m < 3; m++) {
        if (tabuleiro[linha_navio2 + m][coluna_navio2] == 3) {
            printf("ERRO: Navio 1 e 2 com sobreposição.\n");
            return 1; 
        }
    }

    // Colocação do Navio 2 (vertical)
    for(int i = 0; i < 3; i++) {
        tabuleiro[linha_navio2 + i][coluna_navio2] = 3; 
    }

    // Impressão do tabuleiro
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }   

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
