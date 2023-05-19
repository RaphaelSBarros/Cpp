#include <iostream>
using namespace std;

int n1;

main(){
	cout << "Digite um numero: ";
	cin >> n1;

	if(n1 > 0){
		cout << "Este numero e positivo";
	}else if(n1 == 0){
		cout << "Este numero e neutro";
	}else{
		cout << "Este numero e negativo";
	}
}