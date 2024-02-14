#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;
    int vetor[10] = {9, 10, 200, 5, 6, 4, 70, 80, 91, 100};
    
    printf("Digite um valor inteiro:\n");
    scanf("%d", &N);

    int menorDiferenca = abs(N - vetor[0]);
    int posicoes[10];
    int encontrados = 0;

    // Calcula a diferença entre N e cada elemento do vetor
    for(i = 0; i < 10; i++) {
        int diferenca = abs(N - vetor[i]);
        // Se a diferença atual for menor ou igual à menor diferença encontrada até agora
        if(diferenca <= menorDiferenca) {
            // Se a diferença atual for menor, reinicia o array de posições e atualiza a menor diferença
            if (diferenca < menorDiferenca) {
                menorDiferenca = diferenca;
                encontrados = 0;
            }
            posicoes[encontrados] = i;
            encontrados++;
        }
    }

    // Imprime os valores mais próximos e suas posições
    for(i = 0; i < encontrados; i++) {
        printf("%d\n", vetor[posicoes[i]]);
        printf("pos %d\n", posicoes[i]);
    }

    return 0;
}

