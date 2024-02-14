#include <stdio.h>

//criando função para imprimir string 

void imprimir(char palavra[]){
    int i=0;
    while (palavra[i]!='\0'){
        printf("%c", palavra[i]);
        i++;
    }
    printf("\n");
}

int main (){
    char string[20]={"gabriela"};
    imprimir(string);
    return 0; 
}

