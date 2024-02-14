
/******************************************************************************
ler uma matruiz 3x3 e mostrar os pares
*******************************************************************************/
#include <stdio.h>

int main(){
    int matriz[3][3]; 
    int coluna, linha,pares;
    
    for(linha=0; linha<3; linha++){
        for(coluna=0;coluna<3; coluna++){
            printf("Digite um valor:\n");
            scanf("%i", &matriz[linha][coluna]);
        }
    }
    
    for(linha=0;linha<3; linha++){
        for(coluna=0;coluna<3; coluna++){
            if (matriz[linha][coluna]%2==0){
                pares = matriz[linha][coluna]; 
                printf("os numeros pares da matriz são: %i\n", pares);
            }            
        }
    }
    return 0;
}
