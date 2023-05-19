#include <iostream>
using namespace std;

int i, num, countpos, countpar, countst;

main(){
	system("chcp 65001");
	
	cout << "Digite 10 numeros";
	
	for(i=1; i<=10; i++){
		cout << "\nInforme o "<<i<<"º numero: ";
		cin >> num;
		
		if(num >= 0){
			countpos++;
		}
		if(num % 2 == 0){
			countpar++;
		}
		if(num % 7 == 0){
			countst++;
		}
	}
	
	cout << "\n\tForam encontrados "<<countpos <<" numeros positivos";
	cout << "\n\tForam encontrados "<<countpar <<" numeros pares";
	cout << "\n\tForam encontrados "<<countst <<" numeros multiplos de 7";
}