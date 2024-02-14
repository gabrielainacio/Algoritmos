//escreva um algoritmo que imprima todas as possibilidadrs de que no 
//lançamento de dois dados tenhamos o valor 7 como resultado da 
//soma dos valores de casa dado 
#include <stdio.h>

int main() {
    
  int dado1 = 1;
      while(dado1 <= 6) {
        int dado2 = 1;
        while(dado2 <= 6) {
            if(dado1 + dado2 == 7) {
                printf("Dado 1: %d, Dado 2: %d\n", dado1, dado2);
            }
            dado2++;
        }
        dado1++;
    }

    return 0;
}
