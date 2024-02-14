#include <stdio.h>

int primo(int n) {
    int divisor; 
    if (n <= 1) {
        return 0; 
    }
    for (divisor = 2; divisor < n; divisor++) {
        if (n % divisor == 0) {
            return 0;
        } 
    }
    return 1; 
}

int proximoPrimo(int N) {
    int proximo; 
     
    for (proximo = N + 1; ; proximo++) {
        if (primo(proximo)) {
            return proximo;
        }
    }
}

int main() {
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    int proximo = proximoPrimo(numero);
    printf("O próximo número primo após %d é: %d\n", numero, proximo);

    return 0;
}
