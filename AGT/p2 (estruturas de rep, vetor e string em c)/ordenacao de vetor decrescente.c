/*ordenação de vetor: ordem crescente*/

#include <stdio.h>

int main() {
    int i, contadorA, contadorB, maior;
    int vetor[3];

    // Preenchendo o vetor
    for (i = 0; i < 3; i++) {
        printf("Digite um numero:\n");
        scanf("%i", &vetor[i]);
    }

    // Ordenação do vetor em ordem decrescente usando o algoritmo de seleção
    for (contadorA = 0; contadorA < 3; contadorA++) {
        for (contadorB = contadorA + 1; contadorB < 3; contadorB++) {
            // Trocar os elementos se o elemento atual for menor que o próximo elemento
            if (vetor[contadorA] < vetor[contadorB]) {
                maior = vetor[contadorB];
                vetor[contadorB] = vetor[contadorA];
                vetor[contadorA] = maior;
            }
        }
    }

    // Imprimindo o vetor ordenado em ordem decrescente
    for (i = 0; i < 3; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
