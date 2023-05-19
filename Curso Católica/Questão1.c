//importando bibliotecas
#include <stdio.h> 
#include <stdlib.h>

int main(void){
	char nome[50],
	endereco[50],
	telefone[15],
	email[25],
	rg[8],
	cpf[12];
	
	//entrada de dados
	printf("Digite seu nome: "); 
	gets(nome); //função gets lê uma lina de fluxo de entrada padrão da biblioteca stdio.h 
	
	printf("Digite seu endereco: "); 
	gets(endereco);
	
	printf("Digite seu telefone: "); 
	gets(telefone);
	
	printf("Digite seu email: "); 
	gets(email);
	
	printf("Digite seu rg: "); 
	gets(rg);
	
	printf("Digite seu cpf: "); 
	gets(cpf);
	
	//saída de dados
	printf("Nome: %s\n", nome);
	printf("Endereco: %s\n", endereco);
	printf("Telefone: %s\n", telefone);
	printf("Email: %s\n", email);
	printf("Rg: %s\n", rg);
	printf("Cpf: %s\n", cpf);
	
}
