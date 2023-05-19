#include <iostream>
using namespace std;

float p1, p2, p3, p4, p5, pMedio;

main(){
	cout << "Digite o peso da primeira pessoa(kg): ";
	cin >> p1;
	
	cout << "Digite o peso da segunda pessoa(kg): ";
	cin >> p2;
	
	cout << "Digite o peso da terceira pessoa(kg): ";
	cin >> p3;
	
	cout << "Digite o peso da quarta pessoa(kg): ";
	cin >> p4;
	
	cout << "Digite o peso da quinta pessoa(kg): ";
	cin >> p5;
	
	pMedio = (p1 + p2 + p3 + p4 + p5) / 5;
	
	cout << "A media de peso das cinco pessoas e de: " <<pMedio;
	cout << "kgs";
}