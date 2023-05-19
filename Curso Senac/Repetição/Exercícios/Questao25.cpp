#include <iostream>
using namespace std;

int i, num;
float total;

main(){
	system("chcp 65001");
	
	
		cout << "Informe a quantidade de pessoas: ";
		cin >> num;
		float pessoas[num];
		for(i=0;i<num;i++){
			cout << "\nDigite a altura da pessoa "<<i+1<<": ";
			cin >> pessoas[i];
			total += pessoas[i];
		}
		cout << "A média da altura das "<<num<<" pessoas é: "<<(total / num) <<"m";
}