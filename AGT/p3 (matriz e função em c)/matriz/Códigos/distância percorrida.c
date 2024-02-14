/******************************************************************************

Faça um programa que leia a matriz e o vetor e calcule a distância percorrida 
durante a viagem.

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
	
	int rota[6]= {2,3,1,4,5,0};
	int i, cidadepassada=rota[0], distancia = 0;
	
	for (i=0; i<5;i++){
	    distancia += matrizdistancia[cidadepassada][rota[i+1]];
	    cidadepassada=rota[i+1]; 
	    printf("%i", i);
	}
	printf("A distância é: %i\n", distancia); 
	return 0; 
}
