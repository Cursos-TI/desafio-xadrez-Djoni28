#include <stdio.h>

//      DESAFIO - NÍVEL MESTRE - Removi demais comentários pra deixar o código limpo

void Torre(int mov) {
    for (int movTorre=1; movTorre<=mov; movTorre++) {
        printf("Torre para a direita!\n");
    }
}

void Rainha(int mov, int atual) {
    if (atual > mov) return;
    printf("Rainha para a frente!\n");
    Rainha(mov, atual + 1);
}

int main() {

    // TORRE - for - X casas para a direita (uso de função apenas)
    int torreDireita;
    printf("\nQuantas Casas devemos mover a torre para a direita?: ");
    scanf("%d", &torreDireita);
    Torre(torreDireita);

    // BISPO - while e do while - uso de loops aninhados
    int bispoMov;
    printf("\nQuantas casas para a diagonal (cima/direita) vamos mover o bispo?: ");
    scanf("%d", &bispoMov);
    int MH = 0, MV = 0;
    do {
        MV++;
        printf("Bispo uma casa para cima (%d, %d)\n", MV, MH);
        while (MV > MH) {
            MH++;
            printf("Bispo uma casa para o lado (%d, %d)\n", MV, MH);
        }
    }  while (MV < bispoMov);

    // RAINHA - for - uso de funções recursivas
    int rainhaFrente;
    printf("\nQuantas casas devemos mover a rainha para a frente?: ");
    scanf("%d", &rainhaFrente);
    Rainha(rainhaFrente, 1);

    //CAVALO - for aninhado - input do usuário (CIMA, BAIXO, ESQUERDA, DIREITA)
    char movimentoCavalo1 [10], movimentoCavalo2 [10];

    printf("\nQual o primeiro movimento que  o cavalo deve fazer? ");
    scanf("%s", movimentoCavalo1);
    printf("Qual o movimento final que o cavalo deve fazer? ");
    scanf("%s", movimentoCavalo2);

    for (int cav2 = 1, cav1; cav2<=1; cav2++) { // Esse loop não é necessário pois repete apenas uma vez, feito para estudo de loops alinhados

        for (cav1 = 1; cav1 <= 2 && cav1 != 99; cav1++) { // Loop interno
            printf("Cavalo para %s\n", movimentoCavalo1);
        }
        printf("Cavalo para %s\n", movimentoCavalo2);
    }
    return 0;
}