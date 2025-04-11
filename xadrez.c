#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível novato
// Nível aventureiro


int main() {
    int i = 0;
    int movimentoCavalo = 1;


    //Movimento da torre
    for (int i=0; i<5; i++){
        printf("DIREITA\n");
    }

    //Movimento da rainha
    while(i<8){
        printf("ESQUERDA\n");
        i++;
    }

    //Movimento do bispo
    i = 0;
    do{
        printf("DIAGONAL/CIMA/DIREITA\n");
        i++;
    }while(i<5);

    
    while (movimentoCavalo>0) {
        for (i = 0; i<2; i++){
            printf("BAIXO\n");
        }

        printf("ESQUERDA\n");
        movimentoCavalo--;
    }  


    return 0;
}
