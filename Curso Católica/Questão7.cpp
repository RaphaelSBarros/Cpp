#include <stdio.h>

int main(void){
	int a,b,c;
	
	printf("Digite um numero: ");
	scanf("%d", &a);
	
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	c = a + b;
	
	printf("%d + %d = %d", a,b,c);
}