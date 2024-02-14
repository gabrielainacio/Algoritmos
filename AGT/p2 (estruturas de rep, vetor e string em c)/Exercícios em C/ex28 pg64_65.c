//28) Construa um algoritmo que calcule e escreva a 
//a soma dos dez primeiros termos da série H, em que:
// H = 1/pot(1,3) - 1/pot (3,3) + 1/pot(5,3) -  1/pot(7,3) +  1/pot(9,3)...
// ultimo da serie 1/pot(29,3)
// série H: 

#include <stdio.h>
#include <math.h>

int main() {
    int i = 1, sinal = 1;
    float S = 0.0, numerador = 1.0, denominador;

    while (i <= 29) {
        denominador = pow(i, 3);
        S = S + (sinal * numerador) / denominador;
        sinal = sinal * -1;
        i = i + 2;
    }

    printf("O valor de S é: %.2f\n", S);

    return 0;
}

