
#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3], linha, coluna;
//usuário digita a matriz    
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("Digite o elemento %d %d: \n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
        printf("\n");
    }
    
//impressão da matriz    
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    
    printf("\n");
    
//impressão da diagonal principal
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            if(linha==coluna){
                printf("%d ", matriz[linha][coluna]);
            }else
            printf("* "); 
        }
        printf("\n");
    }
    return 0;
}
