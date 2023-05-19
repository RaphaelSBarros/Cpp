#include <iostream>
using namespace std;

float vHora, hTrabalhada, vFinal;

main(){
	cout << "Digite o valor recebido por hora trabalhada: ";
	cin >> vHora;
	
	cout << "Digite total de horas trabalhadas no mes: ";
	cin >> hTrabalhada;
	
	vFinal = vHora * hTrabalhada;
	
	cout << "O valor a ser recebido no fina do mes e de: " <<vFinal;
	cout << " reais";
}