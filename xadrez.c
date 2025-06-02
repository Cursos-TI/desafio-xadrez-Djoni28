#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        printf("\nMovimento do Bispo:\n");
        int bispo_cimaDireita = 5;
        int bispo = 1;
        do {
            printf("Cima Direita\n");
            bispo++;
        } while (bispo <= bispo_cimaDireita);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        printf("\nMovimento da Torre:\n");
        int torre_direita = 5;
        for (int torre = 1; torre <= torre_direita; torre++) {
            printf("Direita!\n");
        }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        int rainha = 1;
        int rainha_frente = 5;
        printf("\nMovimento da Rainha:\n");
        while (rainha <= rainha_frente) {
            printf("Esquerda\n");
            rainha++;
        }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
        char movimentoCavalo1 [10], movimentoCavalo2 [10];

    printf("\nQual o primeiro movimento que  o cavalo deve fazer? ");
    scanf("%s", movimentoCavalo1);
    printf("Qual o movimento final que o cavalo deve fazer? ");
    scanf("%s", movimentoCavalo2);

    for (int cav2 = 1; cav2<=1; cav2++) { // Esse loop não é necessário pois repete apenas uma vez, feito para estudo de loops alinhados

        for (int cav1 = 1; cav1 <= 2; cav1++) { // Loop interno
            printf("Cavalo para %s\n", movimentoCavalo1);
        }
        printf("Cavalo para %s\n", movimentoCavalo2);
    }



    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
