#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz1[2][2]= {1,2,3,4};
    int matriz2[2][2]={11,12,13,14};
    int matriz3[2][2],linha,coluna;
    
    for(linha=0;linha<2;linha++){
        for(coluna=0;coluna<3; coluna++){
            matriz3[linha][coluna]=matriz1[linha][coluna]+matriz2[linha][coluna];
        }
    }
    
    for(linha=0;linha<2;linha++){
        for(coluna=0;coluna<2; coluna++){
            printf("%d ", matriz3[linha][coluna]);
        }
        printf("\n");
    }
    
    return 0;
}
    