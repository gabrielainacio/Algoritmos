#include <stdio.h>

int main() {
    int vetor[5] = {-1, -2, -3, 4, 5};
    int i, totalneg = 0, menor = vetor[0], menor_pos;

    /* Contar quantos negativos tem no vetor */
    for (i = 0; i < 5; i++) {
        if (vetor[i] < 0) {
            totalneg++;
        }

        /* Identificar valores pares e suas posições (índices) */
        if (vetor[i] % 2 == 0) {
            printf("%i é par e está na posição %i\n", vetor[i], i);
        
        /* Contar quantos negativos tem no vetor */
        } else {
            printf("%i é ímpar e está na posição %i\n", vetor[i], i);
        }

        /* Encontrar o menor valor e sua posição */
        if (vetor[i] < menor) {
            menor = vetor[i];
            menor_pos = i;
        }
    }

    printf("O menor número é %i e está na posição %i\n", menor, menor_pos);
    printf("O total de números negativos no vetor é: %i\n", totalneg);

    return 0;
}

