//27)Escreva um algoritmo que calcule e escreva a soma 
// dos dez primeiros termos da seguinte série
// 2/500 - 5/450 + 2/400 - 5/350...+2/300
//-5/250+2/200-5/150+2/100-5/50

#include <stdio.h>

int main() {
    int i=1;
    float S = 0.0, numerador=2.0, denominador=500.0, sinal = 1.0;

    while (i<=10) {
        S= S + numerador/denominador; 
        if (i%2==0){
            numerador = 2.0;
        }else {
            numerador = -5.0; 
        }
        denominador= denominador - 50.0;
        i++; 
    }

    printf("O valor de S é: %.2f\n", S);

    return 0;
}

