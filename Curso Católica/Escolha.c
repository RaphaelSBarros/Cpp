#include <stdio.h>
#include <locale.h>

int main(void){
	int soma, sub, mult, escolha;
	float val1, val2, div;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número: ");
	scanf("%f", &val1);
	
	printf("Digite outro número: ");
	scanf("%f", &val2);
	
	printf("Escolha uma operação: \n 1 - Soma\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\n");
	scanf("%d", &escolha);
	
	switch(escolha){
		case 1:
			printf("%.1f + %.1f = %.1f", val1, val2, (val1+val2));
			break;
			
		case 2:
			printf("%.1f - %.1f = %.1f", val1, val2, (val1-val2));
			break;
			
		case 3:
			printf("%.1f x %.1f = %.1f", val1, val2, (val1*val2));
			break;
			
		case 4:
			printf("%.1f / %.1f = %.1f", val1, val2, (val1/val2));
			break;
			
		default:
			printf("Opção Inválida!");
					
	}
}
