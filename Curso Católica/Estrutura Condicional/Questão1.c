#include <stdio.h>
int main(void){
	int valor;
	
	printf("Escolha um numero: ");
	scanf("%d", &valor);
	
	if (valor>0)
		printf("O valor e positivo");
		else
			printf("O valor e negativo");
			
return 0;

}
