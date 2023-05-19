#include <iostream>
using namespace std;

int n1, n2;

main(){
	cout << "Digite um numero: ";
	cin >> n1;
	cout << "Digite outro numero: ";
	cin >> n2;

	if(n1 > n2){
		cout << "O maior numero e: "<<n1;
	}else{
		cout << "O maior numero e: "<<n2;
	}
}