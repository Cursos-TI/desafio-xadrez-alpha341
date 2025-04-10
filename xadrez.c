#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível novato

int main() {
    
    //Movimento da torre
    for (int i=0; i<5; i++){
        printf("DIREITA\n");
    }

    //Movimento da rainha
    int i = 0;
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

    return 0;
}
