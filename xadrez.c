#include <stdio.h>


// Nível Mestre - Funções Recursivas e Loops Aninhados


void torreRec(int casas){
    if(casas == 0)
        return;

    printf("Esquerda\n");
    torreRec(casas - 1);
}

void queenRec(int casas){
    if(casas == 0)
        return;

    printf("Cima\n");
    queenRec(casas - 1);
}

void bispoRec(int casas){
    if(casas == 0)
        return;

    // loops aninhados: vertical fora, horizontal dentro
    for(int v = 0; v < 1; v++){
        printf("Cima\n");

        for(int h = 0; h < 1; h++){
            printf("Direita\n");
        }
    }

    bispoRec(casas - 1);
}   

/* 
    const int moveBase = 5; 
    printf("\n\nMovimentação do Bispo.\n\n"); 
    for(int i = 0; i < moveBase; i++){ 
        printf("Cima esquerda\n"); 
    }
    */

void cavalo(){
    const int vertical = 2;
    const int horizontal = 1;

    printf("\nMovimentação do Cavalo\n\n");

    for(int v = 0; v < vertical; v++){
        if(v < 0) continue;
        printf("Cima\n");
    }

    for(int h = 0; h < horizontal; h++){
        if(h > 1) break;
        printf("Direita\n");
    }
}

int main(){
    int casas = 5;

    printf("\nMovimentação da Torre\n\n");
    torreRec(casas);

    printf("\nMovimentação do Bispo\n\n");
    bispoRec(casas);

    printf("\nMovimentação da Rainha\n\n");
    queenRec(casas);

    cavalo();

    return 0;
}