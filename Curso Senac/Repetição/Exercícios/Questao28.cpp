#include <iostream>
using namespace std;

int i, num, count;

main(){
	system("chcp 65001");
	
	cout << "Digite 10 numeros";
	
	for(i=1; i<=10; i++){
		cout << "\nInforme o "<<i<<"º numero: ";
		cin >> num;
		
		if(num <= 0){
			count++;
		}
	}
	
	cout << "Foram encontrados "<<count <<" numeros negativos";
}