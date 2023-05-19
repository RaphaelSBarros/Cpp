#include <iostream>
#include <cmath>
using namespace std;

float capital, taxa;

int dias;

main(){
	
	cout << "Informe o valor do capital: ";
	cin >> capital;
	cout << "Informe a taxa cobrada(Ex: 5% = 0.05): ";
	cin >> taxa;
	cout << "Informe o tempo em dias: ";
	cin >> dias;
	
	cout << "\nO valor do capital é de: "<<capital;
	cout << "\nCom uma taxa de: "<<taxa*100 <<"% ao dia";
	cout << "\nValor dos juros: "<<capital*(taxa*dias);
	
	cout << "\nValor total do montante é de: "<<capital -(capital*(taxa*dias));
	

}