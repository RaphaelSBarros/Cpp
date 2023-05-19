#include <stdio.h>

int main(void){
	
float altura, pesoM, pesoF;
int sexo;


printf("Digite a sua altura: ");
scanf("%f", &altura);

printf("Informe o seu sexo: [1] Masculino [2] Feminino\n");
scanf("%d", &sexo);

pesoM = (72.7*altura)-58;
pesoF = (62.1*altura)-44.7;

if(sexo == 1)
	printf("Seu Peso ideal e: %.2f",pesoM);
else
	printf("Seu peso ideal e: %.2f",pesoF);
	
}
