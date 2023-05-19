#include <iostream>
using namespace std;

int a, b;

main(){
	cout << "Digite um valor: ";
	cin >> a;
	
	cout << "Digite outro valor: ";
	cin >> b;

	if(a>b){
		cout << "O maior valor e: "<<a;
	}else{
		cout << "O maior valor e: "<<b;
		}
}