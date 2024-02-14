/******************************************************************************
Faça um programa que mostre o número e o nome das cidades, 
e então o usuário pode digitar o número das cidades para 
compor uma rota válida. 
O programa deve calcular a distância da rota válida que 
o usuário fornecer. 

*******************************************************************************/
#include <stdio.h>

int main (){
	int matrizdistancia [6] [6]={
		{0,63,210,190,0,190}, 
		{63,0,160,150,95,0},
		{210,160,0,10,0,0},
		{190,150,10,0,0,0},
		{0,95,0,0,0,80},
		{190,0,0,0,80,0},
	};
	
	int tamanho, i, j;
	printf("Quantas cidades tem em sua rota?\n");
	scanf("%i", &tamanho); 
	int rota[tamanho]; 
	
	printf("************Cidades*************\n");
	printf("Cáceres(0)\n");
	printf("BBugres(1)\n");
	printf("Cuiabá(2)\n");
	printf("VGrande(3)\n");
	printf("Tangará(4)\n");
	printf("PLacerda(5)\n");
	printf("********************************\n");
	

	printf("Rotas inválidas:\n");
	printf("Cáceres-Tangará / Tangará-Cáceres\n");
	printf("BBugres-PLacerda / PLacerda-BBugres \n");
	printf("Cuiabá-Tangará /Tangará-Cuiabá\n");
	printf("Cuiabá-PLacerda / PLacerda-Cuiabá\n");
	printf("VGrande-Tangará / Tangará-VGrande\n");
	printf("VGrande-PLacerda / PLacerda-VGrande\n");
	printf("Tangará-PLacerda\n");
	printf("********************************\n");
	
	for(j=0;j<tamanho;j++){
	  printf("Digite a próxima cidade\n");
	  scanf("%d", &rota[j]);

	}

	int cidadepassada=rota[0], distancia = 0;
	
	for (i=0; i<5;i++){
	    distancia += matrizdistancia[cidadepassada][rota[i+1]];
	    cidadepassada=rota[i+1]; 
	}
	printf("A distância é: %i\n", distancia); 
	return 0; 
}
