//18) contrua um algoritmo que, dado um conjunto de valores inteiros e 
//positivos determine qual o menor e o maior valor do conjunto. 
//O final do conjunto de valores é conhecido pelo valor -1, 
//que não deve ser considerado
#include <stdio.h>
#include <stdio.h>

int main() {
    int numero, menor, maior;

    // Lê o primeiro número do conjunto
    printf("Digite um numero (ou -1 para finalizar): ");
    scanf("%d", &numero);

    // Inicializa o menor e o maior com o primeiro número válido
    menor = numero;
    maior = numero;

    // Loop para ler os números e encontrar o menor e o maior
    while (numero != -1) {
        // Lê o próximo número do conjunto
        printf("Digite um numero (ou -1 para finalizar): ");
        scanf("%d", &numero);

        // Verifica se o número é diferente de -1 antes de comparar
        if (numero != -1) {
            // Compara o número com o menor e o maior encontrado até agora
            if (numero < menor) {
                menor = numero;
            }
            if (numero > maior) {
                maior = numero;
            }
        }
    }

    // Imprime o menor e o maior valor do conjunto
    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);

    return 0;
}

