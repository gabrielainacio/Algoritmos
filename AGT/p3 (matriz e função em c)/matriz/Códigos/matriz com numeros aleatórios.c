#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i, j, mat1[3][3] = {11,12,13,14,15,16,17,18,19};

    srand(time(NULL));

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            mat1[i][j] = rand();
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%5d ", mat1[i][j]);
        printf("\n");
    }

    return 0;
}

/*função rand():gera números aleatório. -> biblioteca: stdlib.h função 
srand():inicializar a semente para rand().biblioteca: stdlib.h 

**********srand(time(NULL));************ Usa a função srand() para inicializar 
a semente para a função rand(). Isso é feito usando time(NULL) para obter o tempo 
atual como uma semente única. A "semente" para a função rand() é um valor inicial 
que é usado para iniciar a sequência de números pseudoaleatórios gerados pela função*/