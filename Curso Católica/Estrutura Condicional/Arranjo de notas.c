#include <stdio.h>
#include <locale.h>
int main(void){
	
setlocale(LC_ALL, "portuguese");

printf("\nInforme um valor inteiro em Reais: ");
	int vValor;
	scanf("%d", &vValor);
  
	int v100 = vValor / 100;
	vValor = vValor - v100 * 100;
 
	int v50 = vValor / 50;
	vValor = vValor - v50 * 50;
 
	int v20 = vValor / 20;
	vValor = vValor - v20 * 20;
 
	int v10 = vValor / 10;
	vValor = vValor - v10 * 10;
 
	int v5 = vValor / 5;
	vValor = vValor - v5 * 5;
 
	int v2 = vValor / 2;
	vValor = vValor - v2 * 2;
 
	int v1 = vValor;
 
	printf("\nO n�mero de notas de 100 �: %d", (v100));
	printf("\nO n�mero de notas de 50 �: %d", (v50));
	printf("\nO n�mero de notas de 20 �: %d", (v20));
	printf("\nO n�mero de notas de 10 �: %d", (v10));
	printf("\nO n�mero de notas de 5 �: %d", (v5));
	printf("\nO n�mero de notas de 2 �: %d", (v2));
	printf("\nO n�mero de notas de 1 �: %d", (v1));
 
 }
