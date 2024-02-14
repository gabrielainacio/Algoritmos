
/******************************************************************************
criar uma matriz identidade de 3ª ordem

matriz identidade: os elementos da diagonal principal são 1 e o restante eh zero
*******************************************************************************/
#include <stdio.h>

int main(){
    int matriz[3][3]; 
    int coluna, linha;
    
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3; coluna++){
            if (linha==coluna){
                matriz[linha][coluna]=1;
            }else{
                matriz[linha][coluna]=0;
            }
        }
    }
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3; coluna++){
            printf("%i", matriz[linha][coluna]);

        }
        printf("\n");
    }    
    


    return 0;
}
