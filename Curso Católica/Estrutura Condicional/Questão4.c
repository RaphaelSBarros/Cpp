#include <stdio.h>
int main(void){
	int a, b, c;
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &a);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &b);
	
	printf("Informe o terceiro numero: ");
	scanf("%d", &c);
	
	if ((a>b)&&(a>c))
		printf("O maior numero e: %d", a);
		else if ((b>a)&&(b>c))
			printf("O maior numero e: %d", b);
			else
				printf("O maior numero e: %d", c);
				
return 0;
}

