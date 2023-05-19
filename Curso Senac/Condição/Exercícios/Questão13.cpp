#include <iostream>
using namespace std;

int n1;

main(){
	cout << "Digite um numero: ";
	cin >> n1;

	if(n1 % 2 == 0){
		cout << "Este numero e par";
	}else{
		cout << "Este numero e impar";
	}
}