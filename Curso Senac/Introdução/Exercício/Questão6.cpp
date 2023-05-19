#include <iostream>
using namespace std;

int input, s, m, h;

main(){
	cout << "Digite a duracao do evento em segundos: ";
	cin >> input;
	
	h = input / 3600;
	input = input - h * 3600;
	
	m =  input / 60;
	input = input - m * 60;
	
	s = input;
	
	cout << "A duracao do evento em horas, minutos e segundos e: " <<h;
	cout << "horas, " <<m;
	cout << " minutos, " <<s;
	cout << " segundos";
}