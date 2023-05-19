#include <iostream>
using namespace std;

int m, cm;
float input;

main(){
	cout << "Digite um valor em quilometros para ser convertido: ";
	cin >> input;
	
	m = input * 1000;
	input =  input - m / 1000;
	
	cm = input * 100;
	
	cout << "O valor convertido para metros e centimetros e: " <<m;
	cout << "m " <<cm;
	cout << "cm";
}