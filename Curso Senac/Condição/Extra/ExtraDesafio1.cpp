#include <iostream>
using namespace std;

int n;



int main(){
	cout << "Digite um numero: ";
	cin >> n;
	
	if (n % 2 == 0){
		cout << "O numero que vc digitou e par";
	}else{
		cout << "O numero que vc digitou e impar";
	}
}	