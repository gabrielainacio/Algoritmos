
//26) Elabore um algoritmo que determine o valor de S em que: 
// S = 1/1 - 2/4 + 3/9 - 4/16 + 5/25 -6/36... -10/100
#include <stdio.h>

#include <stdio.h>

int main() {
    int numerador = 1, denominador = 1, sinal = 1;
    float S = 0.0;

    while (numerador <= 10 && denominador <= 100) {
        S = S + (float) (sinal*numerador) / denominador;
        numerador++;
        denominador= numerador*numerador;
    }

    printf("O valor de S é: %.2f\n", S);

    return 0;
}
