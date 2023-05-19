#include <stdio.h>
int main(void){
	int dia;
	
	printf("Digite um numero de 1 a 7: ");
	scanf("%d", &dia);
	
		if (dia == 1)
		printf("Esse numero corresponde ao Domingo");
			else if (dia == 2)
			printf("Esse numero corresponde a Segunda-feira");
				else if (dia == 3)
				printf("Esse numero corresponde a Terca-feira");
					else if (dia == 4)
					printf("Esse numero corresponde a Quarta-feira");
						else if (dia == 5)
						printf("Esse numero corresponde a Quinta-feira");
							else if (dia == 6)
							printf("Esse numero corresponde a Sexta-feira");
								else if (dia == 7)
								printf("Esse numero corresponde a Sabado");
									else
									printf("Numero invalido");
			
	
}
