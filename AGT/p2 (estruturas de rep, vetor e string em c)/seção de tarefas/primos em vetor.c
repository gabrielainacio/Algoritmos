/*Escreva um algoritmo para ler um vetor de 10 inteiros e 
informe quais valores são primos e quais são as posições no vetor.*/

#include <stdio.h>

int main() {
    int num[10];
    int i, primo, divisor;

    // Leitura do vetor(um de cada vez)
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }    

    for (i = 0; i < 10; i++) {
        primo = 1;

        // Verifica se o número atual é primo
        for (divisor = 2; divisor < num[i]; divisor++) {
            if (num[i] % divisor == 0) {
                primo = 0;
                break;
            }    
        }

        // Se o número é primo e diferente de 1, imprime o número e sua posição no vetor
        if (primo == 1 && num[i] != 1) {
            printf("O número %d na posição %d é primo.\n", num[i], i);
        }
    }

    return 0;
}

