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
			cout << "\nDigite o peso(kg) da pessoa "<<i+1<<": ";
			cin >> pessoas[i];
			total += pessoas[i];
		}
		cout << "O peso médio das "<<num<<" pessoas é: "<<(total / num) <<"kgs";
}