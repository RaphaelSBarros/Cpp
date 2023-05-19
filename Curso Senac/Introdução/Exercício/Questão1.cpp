#include <iostream>
using namespace std;

int num1, num2, soma;

main(){
	cout << "Digite um numero: ";
	cin >>  num1;
	cout << "Digite outro numero: ";
	cin >> num2;
	
	soma = num1 + num2;
	
	cout << "\n\t A soma entre os numeros e: " <<soma;
}