#include <iostream>
#include <cmath>
using namespace std;

int ano;

main(){
	cout << "Informe um ano: ";
	cin >> ano;
	
	if(ano % 100 != 0){
		if(ano % 4 == 0){
			cout << ano << " e um ano bissexto";
		}
	}else{
		if (ano % 400 == 0){
			cout << ano << " e um ano bissexto";
		}else{
			cout << ano << " nao e um ano bissexto";
		}
	}
} 