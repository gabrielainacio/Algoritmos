/******************************************************************************
elementos da diagonal principal
    - linha==coluna
*******************************************************************************/
#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    
    int linha, coluna; 
    
    for(linha=0;linha<3;linha++){
        for (coluna=0;coluna<3; coluna++){
            if (linha==coluna){
                printf(" %i  ", matriz[linha][coluna]); 
            }else{
                printf(" 00 ");  
            }
        }
        printf("\n");
    }
    
    return 0;
}
