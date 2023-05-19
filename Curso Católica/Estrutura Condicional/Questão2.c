#include <stdio.h>
int main(void){
	int valor;
	
	printf("Digite um numero: ");
	scanf("%d", &valor);
	
	
	if (valor%2 == 0)
		printf("Esse numero e par");
		else
			printf("Esse numero e impar");
			
return 0;
	
}
