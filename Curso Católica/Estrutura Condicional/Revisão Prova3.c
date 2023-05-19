#include <stdio.h>
int main(void){

int n;

printf("Escolha um numero: ");
scanf("%d", &n);

if(n%2==0 && n>0)
	printf("Este numero e Par e Positivo.");
else if(n%2==0 && n<0)
	printf("Este numero e Par e Negativo");
else if(n%2==1 && n>0)
	printf("Este numero e Impar e Positivo.");
else if(n%2==1 && n<0)
	printf("Este numero e Impar e Negativo");
else
	printf("Este numero e Neutro");
	
}
