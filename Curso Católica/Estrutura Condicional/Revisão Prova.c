#include <stdio.h>

int main(void){
	int a,b;
	
	printf("Informe um numero: ");
	scanf("%d", &a);
	
	printf("Informe outro numero: ");
	scanf("%d", &b);
	
	
	if(a%b == 0)
		printf("%d e multiplo de %d", a,b);
		
	else
		printf("%d nao e multiplo de %d", a,b);
}
