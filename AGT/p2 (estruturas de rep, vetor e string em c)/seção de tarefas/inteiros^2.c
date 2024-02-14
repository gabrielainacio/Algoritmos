#include <stdio.h>
//Entrar com 4 valores inteiro e devolver o quadrado de cada valor.

int main(){
  int primeiro; 
  int segundo;
  int terceiro; 
  int quarto; 
  int primeiro2; 
  int segundo2;
  int terceiro2; 
  int quarto2; 
  
  printf("Digite o primeiro valor:\n");
  scanf("%d", &primeiro); 
  printf("Digite o segundo:\n");
  scanf("%d", &segundo); 
  printf("Digite o terceiro valor:\n");
  scanf("%d", &terceiro); 
  printf("Digite o quarto valor:\n");
  scanf("%d", &quarto); 
  
  primeiro2 = primeiro*primeiro;
  segundo2 = segundo*segundo;
  terceiro2 = terceiro*terceiro;
  quarto2 = quarto*quarto;
  
  printf("O quadrado dos valores são: %d, %d, %d, %d ", primeiro2 , segundo2 ,terceiro2 , quarto2 ); 
}