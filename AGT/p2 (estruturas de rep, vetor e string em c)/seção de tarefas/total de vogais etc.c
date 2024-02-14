
/*Escreva um algoritmo que lê um string de tamanho máximo 1000. 
O algoritmo deve dizer: 
a)total de vogais, 
b) total de letras, 
c) total de pontuações. Como saída, devolva um número para cada item. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[1000];
    int tamanho, contador_letra = 0, contador_vogal = 0, contador_pontuacao = 0;

    printf("\nDigite o texto:\n");
    fgets(texto, 1000, stdin);
    
    // Tamanho e remoção do caractere de nova linha
    tamanho = strlen(texto);
    if (texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
        tamanho--;
    }
    // Contar vogais, letras e pontuações
        for (int i = 0; i < tamanho; i++) {
        char caractere = texto[i];

        // Verificar se o caractere é uma letra
        if (isalpha(caractere)) {
            contador_letra++;

            // Verificar se o caractere é uma vogal
            if (tolower(caractere) == 'a' || tolower(caractere) == 'e' || 
                tolower(caractere) == 'i' || tolower(caractere) == 'o' || 
                tolower(caractere) == 'u') {
                contador_vogal++;
            }
        } else if (ispunct(caractere)) {
            contador_pontuacao++;
        }
    }
    printf("Total de vogais: %d\n", contador_vogal);
    printf("Total de letras: %d\n", contador_letra);
    printf("Total de pontuações: %d\n", contador_pontuacao);

    return 0;
}

