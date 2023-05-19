#include <iostream>
#include <cmath>
using namespace std;


float a, b, c, h;

main(){
	cout << "Digite tres numeros: \n";
	cin >> a;
	cin >> b;
	cin >> c;
	
	if((b+c) > a){
		h = (a/2)*sqrt(3);
		cout << "Altura: "<<h;
		cout << "A area deste triangulo e: "<< (a*h)/2;
	}else{
		cout << "Nao e possivel criar um triangulo com os valores: \n";
		cout << "\n base: "<<a;
		cout << "\n hipotenusa1: "<<b;
		cout << "\n hipotenusa2: "<<c;
	}
}