/******************************************************************************
escreva um algoritmo que lê um string de tamanho máximo 1000. 
O algoritmo deve dizer:  
a) total de vogais,  

b) total de letras,  

c) total de pontuações, 

d) total de brancos 
Use uma função para cada um dos itens. Cada função recebe o string como entrada 
e devolve um número como saída da função
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <string.h> 

int vogais(char string[]) {
    int i, tam, contadorvogal = 0;

    tam = strlen(string);

    for (i = 0; i < tam; i++) {
        char caractere = tolower(string[i]);
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            contadorvogal++;
        }
    }

    return contadorvogal;
}

int letras (char string[]){
    int i, tam, contadorletra = 0;

    tam = strlen(string);

    for (i = 0; i < tam; i++) {
        char caractere = (string[i]);
        if (isalpha(caractere)) {
            contadorletra++;
        }
    }

    return contadorletra;
}

int branco (char string[]){
    int i, tam, contadorbranco = 0;

    tam = strlen(string);

    for (i = 0; i < tam; i++) {
        char caractere = (string[i]);
        if (isspace(caractere)) {
            contadorbranco++;
        }
    }

    return contadorbranco;
}

int pontuacao (char string[]){
    int i, tam, contadorpontuacao=0;
    
    tam = strlen(string);
    for (i=0;i<tam; i++){
        char caractere = string [i];
        if (ispunct(caractere)){
            contadorpontuacao++;
        }
    }
    return contadorpontuacao;
}
int main(){
    char string[1000]={"De acordo com a sede da ONU no Brasil, uma serie de tratados internacionais e outros instrumentos adotados desde 1945 expandiram o corpo do direito internacional sobre os direitos humanos. entre eles, a Convencao para a Prevencao e a Repressao do Crime de Genocidio (1948), a Convencao internacional sobre a eliminacao de Todas as Formas de Discriminacao Racial (1965), a Convencao sobre a eliminacao de Todas as Formas de Discriminacao contra as Mulheres (1979), a Convencao sobre os Direitos da Crianca (1989) e a Convencao sobre os Direitos das Pessoas com Deficiencia (2006)."}; 
    
    printf("O total de vogais é: %i \n", vogais(string));
    printf("O total de letras é: %i \n", letras(string));
    printf("O total de pontuacoes é: %i \n", pontuacao(string));
    printf("O total de brancos é: %i \n", branco(string));

    return 0;
}



