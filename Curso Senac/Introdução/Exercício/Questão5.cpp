#include <iostream>
using namespace std;

float mi, km;

main(){
	cout << "Digite a quantidade de milhas a ser convertida: ";
	cin >> mi;
	
	km = mi * 1.60934;
	
	cout << "O valor convertido para quilometros e: " <<km;
	cout << "km";
}