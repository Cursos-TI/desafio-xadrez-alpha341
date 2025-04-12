#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Nível novato
// Nível aventureiro
// Nível mestre

//Recursiva para o movimento da torre
void moveTorre (int casas){
    if (casas>0){
        printf("TORRE - DIREITA\n");
        moveTorre(casas-1);
        
    }
}

//Recursiva para o movimento do bispo
void moveBispo (int casas){
    char vertical [25];
    char horizontal [10];
    for (int i=0; i<casas; i++){
        strcpy(vertical, "BISPO - DIAGONAL/CIMA");
        for (int j =0; j<1;j++){
            strcpy(horizontal,"/DIREITA\n");
            printf("%s%s",vertical,horizontal);
        }
    }
}

//Recursiva para o movimento da rainha
void moveRainha(int casas){
    int i = 0;
    while(i<casas){
        printf("RAINHA - ESQUERDA\n");
        i++;
    }
}



int main() {
    int i = 0;
    int movimentoCavalo = 0;

    //Movimento da torre
    moveTorre(5);

    //Movimento da rainha
    moveRainha(8);

    //Movimento do bispo
    moveBispo(5);

    //Movimento do cavalo
    while (movimentoCavalo < 3) {
        for (int movimentoVertical = 0; movimentoVertical < 3; movimentoVertical++) {
            if (movimentoVertical % 2 == 0 && movimentoVertical != 0) {
                printf("CAVALO - DIREITA\n\n");
                movimentoCavalo++;
                break;                
            } else {
                movimentoCavalo++;
                printf("CAVALO - CIMA\n");
            } 
        }
    }
    

    return 0;
}
