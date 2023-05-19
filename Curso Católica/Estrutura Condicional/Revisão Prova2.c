#include <stdio.h>

int main(void){
	int idade, ano;
	
	printf("Digite o ano de nascimento do atleta: ");
	scanf("%d", &ano);
	idade = 2022-ano;
	
	if(idade >= 5 && idade <= 7)
		printf("O atleta pertence a categoria Infantil A");
	else if(idade>=8 && idade<=10)
		printf("O atleta pertence a categoria Infantil B");
	else if(idade>=11 && idade<=13)
		printf("O atleta pertence a categoria Juvenil A");
	else if(idade>=14 && idade<=17)
		printf("O atleta pertence a categoria Juvenil B");
	else
		printf("Este atleta nao pertence a nenhuma das categorias.");
}
