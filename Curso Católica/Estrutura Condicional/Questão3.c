#include <stdio.h>
int main(void){
	int valor;
	
	printf("Digite um numero: ");
	scanf("%d", &valor);
	
	
	if (valor%2 == 0)
		printf("O valor transformado em impar e: %d", valor+1);
		else
			printf("O valor transformado em par e: %d", valor+1);
			
return 0;
}
