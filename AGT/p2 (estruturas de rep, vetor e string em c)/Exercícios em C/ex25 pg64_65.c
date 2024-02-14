
//25) Prepare um algoritmo que calcule o valor de H, 
//sendo que ele é determinado pela série
//H = 1/1 + 3/2 + 5/3 + 7/4...+99/50

//Veja o que é coincidente na questão:
//**1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
//**1/1 -> 3/2 -> 5/3 -> 7/4
//**1 - 3 - 5 - 7 e 1 - 2 - 3 - 4
//Percebe algo em comum a ambos? E a cada lado?
//A lógica consiste em, para cada dividendo, somar-se 2 ao valor anterior
//e, cada divisor, somar-se 1.
#include <stdio.h>

#include <stdio.h>

int main() {
    int numerador = 1, denominador = 1;
    float H = 0.0;

    while (numerador <= 99 && denominador <= 50) {
        H += (float)numerador / denominador;
        numerador = numerador + 2;
        denominador++;
    }

    printf("O valor de H é: %.2f\n", H);

    return 0;
}
