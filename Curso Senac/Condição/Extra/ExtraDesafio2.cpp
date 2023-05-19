#include <iostream>
using namespace std;

int n;



int main(){
	cout << "Digite um numero: ";
	cin >> n;
	
	if (n > 0){
		cout << "O numero que vc digitou e positivo";
	}else if(n < 0){
		cout << "O numero que vc digitou e negativo";
	}else{
		cout << "O numero e neutro";
	}
}	