/******************************************************************************
Leia uma matriz quadrada qualquer e crie um programa para 
calcular a média aritmética dos
elementos hachurados da figura 1, letra 
*******************************************************************************/
#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    printf("%i\n",  matriz[0][1]);
    printf("%i\n",  matriz [2][1]);
    
    float media= ((float)matriz[0][1] + (float)matriz [2][1])/ 2.0; 
    
    printf("%.1f",  media);
    
    return 0;
}
