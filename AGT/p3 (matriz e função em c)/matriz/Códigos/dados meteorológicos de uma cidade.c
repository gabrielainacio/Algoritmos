#include <stdio.h>

int main() {
    float matriz1[4][12] = {
        {29.3, 29.1, 28.2, 26.0, 23.8, 22.1, 21.3, 21.7, 22.6, 24.2, 26.3, 27.7},
        {25.1, 25.1, 24.1, 21.8, 19.5, 18.0, 17.1, 17.6, 18.8, 20.6, 22.4, 23.6},
        {21.0, 21.1, 20.1, 17.6, 15.3, 14.0, 12.9, 13.6, 15.1, 17.0, 18.5, 19.5},
        {258.0, 234.0, 216.0, 122.1, 111.3, 98.6, 107.7, 98.0, 137.0, 173.4, 159.0, 208.1}
    };

    float matriz2[1][12];
    float soma = 0, menor, media = 0;
    int linha, coluna, meses=0;

    // Média das temperaturas (matriz2)
    for (linha = 0; linha < 3; linha++) {
        soma = 0;
        for (coluna = 0; coluna < 12; coluna++) {
            soma += matriz1[linha][coluna];
        }
        matriz2[0][linha] = soma / 12;
        printf("As médias são: %.2f\n", matriz2[0][linha]);
    }

    printf("\n");

    // Qual o menor elemento da última linha
    menor = matriz1[3][0]; // Assume que o primeiro elemento é o menor
    for (coluna = 0; coluna < 12; coluna++) {
        if (matriz1[3][coluna] < menor) {
            menor = matriz1[3][coluna];
        }
    }
    printf("O menor elemento da última linha é %.2f\n", menor);

    // Qual a temperatura média para precipitações superiores a 200mm
    for (coluna = 0; coluna < 12; coluna++) {
        if (matriz1[3][coluna] > 200) {
            media += matriz1[3][coluna]; 
            meses++;
        }
    media = media/ meses;
    }


printf("A temperatura média para precipitações superiores a 200mm é %.2f\n", media);
    
    return 0;
}

