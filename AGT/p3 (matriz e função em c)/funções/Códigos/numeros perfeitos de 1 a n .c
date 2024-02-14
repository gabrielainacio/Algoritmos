/******************************************************************************
Escreva um programa que leia n e imprima todos os inteiros 
compreendidos entre 1 e n que são "perfeitos", isto é, iguais à 
soma dos seus divisores próprios; 
um divisor d de n diz-se próprio se é inferior a n. 
Por exemplo, 6 é perfeito porque 6=1+2+3. 
O seu programa deve incluir uma função
"int somad(int n)" que retorna a soma dos divisores próprios de n.
*******************************************************************************/#include <stdio.h>
int somad(int n) {
    int i, soma = 0;

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    return soma;
}

int main() {
    int n; 
    
    printf("Digite um numero:"); 
    scanf("%i", &n);
    
    printf("Números perfeitos entre 1 e %d:\n", n);
    
    for (int i = 1; i <= n; i++) {
        if (i == somad(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
    
