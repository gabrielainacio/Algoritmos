/*Escreva um algoritmo que leia um peso (valor real) na Terra e o número de um planeta.O programa deve escrever o valor do seu peso neste planeta. A relação de planetas é dada a seguir juntamente com o valor das gravidades relativas à Terra.

Use um real com 1 casa decimal para o peso gerado como saída.

Número	Gravidade	Planeta
1	     0.37	    Mercúrio
2	     0.88	    Vênus
3	     0.38	    Marte
4	     2.64	   Júpiter
5	     1.15	   Saturno
6	     1.17	   Urano
 
Para calcular o peso no planeta use a fórmula Pplaneta = Pterra/10 * gravidade*/

#include <stdio.h>

int main() {
    float pesoterra, pesoplaneta;
    float gravidade[] = {0.37, 0.88, 0.38, 2.64, 1.15, 1.17}; 
    int planeta;

    printf("Mercurio(1), Venus(2), Marte(3), Jupiter(4), Saturno(5), Urano(6)\nDigite o número correspondente ao planeta:\n");
    scanf("%i", &planeta);

    printf("\nDigite o valor do peso na Terra:\n");
    scanf("%f", &pesoterra);

    if (planeta >= 1 && planeta <= 6) {
        pesoplaneta = pesoterra * gravidade[planeta - 1]; 
        printf("O peso (kg) no planeta escolhido é %.1f\n", pesoplaneta);
    } else {
        printf("Número de planeta inválido.\n");
    }

    return 0;
}


