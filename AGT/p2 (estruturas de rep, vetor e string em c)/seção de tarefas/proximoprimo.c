#include <stdio.h>
//Escreva um programa em que um usuário dá um número qualquer, 
//positivo e maior que 0, e o programa informa qual o próximo primo 
//que o sucede

int main() {
    int num, proximoprimo, divisor, primo; 
    
    printf("Digite um número:\n");
    scanf("%d", &num);
    
    num++;
    while (1) {
        primo = 1;
        divisor = 2;
        
        if (num <= 1) {
            primo = 0;
        } else {
            while (divisor < num) {
                if (num % divisor == 0) {
                    primo = 0;
                    break;
                }
                divisor++; 
            }
        }
        
        if (primo == 1) {
            proximoprimo = num;
            break;
        }
        num++;  
    }

    printf("O próximo número primo é: %d\n", proximoprimo);
    return 0;
}
