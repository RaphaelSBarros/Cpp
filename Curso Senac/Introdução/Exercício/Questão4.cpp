#include <iostream>
using namespace std;

float c, f;

main(){
	cout << "Digite a temperatura em Celsius: ";
	cin >> c;
	
	f = (9 * c + 160) / 5;
	
	cout << "A temperatura convertida para Fahrenheit e: " <<f;
	cout << "F";
}