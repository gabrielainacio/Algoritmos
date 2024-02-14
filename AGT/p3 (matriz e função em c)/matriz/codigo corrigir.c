
/******************************************************************************
-preencher uma matriz de quarta ordem
-soma dos valores da diagonal principal
- produto entre os valores da segunda linha 
- o maior valor da terceira coluna
*******************************************************************************/
#include <stdio.h>

int main(){
    int matriz[4][4]; 
    int coluna, linha, somaDP=0, produto=1,maior=0;
    
    for (linha=0;linha<4; linha++){
        for(coluna=0; coluna<4; coluna++){
            printf("Digite uma valor:\n");
            scanf("%i", &matriz[linha][coluna]);
            if(linha==coluna){
                somaDP+= matriz[linha][coluna]; 
            }
        }
    }
    for (linha=0;linha<4; linha++){
        for(coluna=0; coluna<4; coluna++){
            produto*=matriz[1][coluna];
            
        }
    }
    
    for (linha=0;linha<4; linha++){
        for(coluna=0; coluna<4; coluna++){
            if(matriz[linha][2]>maior){
                maior=matriz[linha][2];   
            }
            
        }
    }
    printf("A soma dos valores da diagonal principal é: %i\n", somaDP);
    printf("o produto é: %i\n", produto);
    printf("o maior é: %i\n", maior);


    return 0;
}
