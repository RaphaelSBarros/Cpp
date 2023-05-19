#include <iostream>
using namespace std;

int anos, meses, dias;

main(){
	cout << "Digite sua idade: ";
	cin >> anos;
	
	meses = anos * 12;
	
	dias = anos * 365;
	
	cout << "Sua idade em meses e: " <<meses;
	cout << "\nSua idade em dias e: " <<dias;
}