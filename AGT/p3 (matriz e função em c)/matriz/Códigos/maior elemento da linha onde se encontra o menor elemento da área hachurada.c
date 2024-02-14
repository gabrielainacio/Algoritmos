
/******************************************************************************
1) linha onde se encontra o menor elemento 
2)achar o maior elemento dessa linha 
*******************************************************************************/
#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    int menorElemento = matriz[0][2];  // Inicializa com o primeiro elemento acima da diagonal secundária
    int linhaMenorElemento = 0;
    
    // Encontrar o menor elemento e a linha onde está
    for (int linha = 0; linha < 3; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            if (linha + coluna < 2) {
                int elemento = matriz[linha][coluna];
                if (elemento < menorElemento) {
                    menorElemento = elemento;
                    linhaMenorElemento = linha;
                }
            }
        }
    }

    // Encontrar o maior elemento na linha onde está o menor elemento
    int maiorElemento = matriz[linhaMenorElemento][0]; // Inicializa com o primeiro elemento da linha
    for (int coluna = 1; coluna < 3; coluna++) {
        if (matriz[linhaMenorElemento][coluna] > maiorElemento) {
            maiorElemento = matriz[linhaMenorElemento][coluna];
        }
    }

    // Imprimir resultados
    printf("Linha do menor elemento: %d\n", linhaMenorElemento);
    printf("Maior elemento na linha do menor elemento: %d\n", maiorElemento);

    return 0;
}



/***************************************************************************
 A utilização da variável count é comum quando não se sabe antecipadamente 
 quantos elementos serão armazenados no array. 
****************************************************************************/ 

/***************************************************************************
IMPRIMIR A DIAGONAL SECUNDARIA:  

    for(linha=0; linha<3;linha++){
        for(coluna=0;coluna<3; coluna++){
            if (linha+coluna==2){
                printf("%d ", matriz[linha][coluna]);
            }
        }
    }
****************************************************************************/ 

