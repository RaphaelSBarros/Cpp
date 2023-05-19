#include <iostream>
using namespace std;

int a, b, c;

main(){
	cout << "Digite um valor qualquer: ";
	cin >> a;
	
	cout << "Digite outro valor: ";
	cin >> b;
	
	cout << "Os valores "<<a;
	cout << " e "<<b;
	cout << " Foram trocados!";
	c = a; a = b; b = c;
	cout << "\nAgora o primeiro valor e: "<<a;
	cout << " e o segundo e: "<<b;
}