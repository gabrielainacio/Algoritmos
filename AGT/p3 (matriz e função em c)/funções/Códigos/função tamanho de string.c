#include <stdio.h>

//criando função que vê o tamanho da string
int tamanho (char str []){
    int tam=0; 
    while (str[tam]!= '\0'){
        tam++;
    }  
    return tam; 
}

int main (){
    char vetorstring [20]= {"gabriela"}; 
    printf ("O tamanho é: %i\n", tamanho(vetorstring));
    return 0; 
}