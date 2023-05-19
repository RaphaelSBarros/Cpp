#include <stdio.h>

int main(void){

const vPercDistribuidor = 28;
const vPercImpostos = 45;
printf("\nInforme o valor de custo de fabrica: ");
	float vCustoFabrica;
	scanf("%f", &vCustoFabrica);
 
	float vValorDistribuidor = vCustoFabrica +
	  (vCustoFabrica * vPercDistribuidor / 100);
 
	float vValorImposto = vCustoFabrica + (vCustoFabrica * vPercImpostos / 100);
 
	float vCustoConsumidor = vCustoFabrica + vValorDistribuidor + vValorImposto;
 
	printf("\nO custo ao consumidor e: %-7.2f", (vCustoConsumidor));
 
 }
