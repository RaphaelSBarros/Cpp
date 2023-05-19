#include <iostream>
using namespace std;

int n1, n2;
char op;

main(){
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;
	
	cout << "Escolha uma operacao a ser realizada entre estes numeros: \n";
	cout << "[+]Adicao\t[-]Subtracao\t[*]Multiplicacao\t[/]Divisao\n";
	cin >> op;
	
	switch(op){
		case '+':
			cout << ""<<n1;
			cout << " + "<<n2;
			cout << " = "<<n1+n2;
			break;
			
		case '-':
			cout << ""<<n1;
			cout << " - "<<n2;
			cout << " = "<<n1-n2;
			break;
			
		case '*':
			cout << ""<<n1;
			cout << " * "<<n2;
			cout << " = "<<n1*n2;
			break;
			
		case '/':
			cout << ""<<n1;
			cout << " / "<<n2;
			cout << " = "<<n1/n2;
			break;

		default:
			cout << "OPCAO INVALIDA!";
			break;
	}
}