#include <stdio.h>
//escreva um algoritmo que leia um N inteiro positivo maior 
//que 0 e que mostre , como saída, um número com N termos 
//de Fibonacci somados. 

//Considere que a série de Fibonacci é : 1 , 1, 2, 3, 5, 8, 13, 21, 34, 55, ....

int main() {
    int num, i, termoanterior1 = 1, termoanterior2 = 0, proximotermo, soma = 0;
    
    printf("Digite um número positivo:\n");
    scanf("%d", &num); 

    i = 1;

    while (i <= num) {
        proximotermo = termoanterior1 + termoanterior2;
        termoanterior1 = termoanterior2;
        termoanterior2 = proximotermo;
        soma += proximotermo;
        i++;
    }
    
    printf("A soma dos primeiros %d termos de Fibonacci é: %d\n", num, soma);
    
    return 0;
}
