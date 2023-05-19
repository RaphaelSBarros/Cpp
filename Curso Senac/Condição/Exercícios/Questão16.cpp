#include <iostream>
#include <cmath>
using namespace std;


int dep, cpf, desc = 5;
float sm = 1300, rm;

main(){
	cout << "\nDigite seu CPF: ";
	cin >> cpf;
	
	cout << "\nInforme o numero de dependentes: ";
	cin >> dep;
	
	cout << "\nInforme o valor da sua renda mensal: ";
	cin >> rm;
	
	rm = rm - (rm * ((dep * desc)/100));
	
	if(rm > (sm*2) && rm <= (sm*3)){
		cout << "De acordo com a sua renda mensal voce sera taxado em 5% da sua renda em impostos";
		cout << "\nValor do imposto: "<<sm*0.05;
		
	}else if(rm > (sm*3) && rm <= (sm*5)){
		cout << "De acordo com a sua renda mensal voce sera taxado em 10% da sua renda em impostos";
		cout << "\nValor do imposto: "<<sm*0.10;
		
	}else if(rm > (sm*5) && rm <= (sm*7)){
		cout << "De acordo com a sua renda mensal voce sera taxado em 15% da sua renda em impostos";
		cout << "\nValor do imposto: "<<sm*0.15;
		
	}else if(rm > (sm*7)){
		cout << "De acordo com a sua renda mensal voce sera taxado em 20% da sua renda em impostos";
		cout << "\nValor do imposto: "<<sm*0.20;
		
	}else{
		cout << "De acordo com a sua renda mensal voce esta ISENTO de impostos";
	}

}